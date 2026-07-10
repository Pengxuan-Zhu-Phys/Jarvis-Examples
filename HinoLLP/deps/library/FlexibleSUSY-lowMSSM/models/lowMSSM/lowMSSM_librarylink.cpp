// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================


#include "config.h"

#include "lowMSSM_info.hpp"
#include "lowMSSM_input_parameters.hpp"
#include "lowMSSM_observables.hpp"
#include "lowMSSM_physical.hpp"
#include "lowMSSM_slha_io.hpp"
#include "lowMSSM_model_slha.hpp"

#ifdef ENABLE_TWO_SCALE_SOLVER
#include "lowMSSM_two_scale_model.hpp"
#include "lowMSSM_two_scale_spectrum_generator.hpp"
#endif

#include "array_view.hpp"
#include "bvp_solver_problems_format_mathlink.hpp"
#include "error.hpp"
#include "for_each.hpp"
#include "observable_problems_format_mathlink.hpp"
#include "physical_input.hpp"
#include "problems_format_mathlink.hpp"
#include "slha_io.hpp"
#include "spectrum_generator_settings.hpp"
#include "decays/flexibledecay_settings.hpp"
#include "decays/experimental_constraints.hpp"
#include "standard_model_two_scale_model.hpp"
#include "lowe.h"
#include "lowMSSM_unitarity.hpp"
#include "loop_libraries/loop_library.hpp"

#include <mathlink.h>
#include "mathlink_utils.hpp"
#include <WolframLibrary.h>

#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <sstream>
#include <string>
#include <tuple>
#include <utility>
#include <filesystem>
#include <utility>

#define INPUTPARAMETER(p) input.p
#define MODELPARAMETER(p) model.get_##p()
#define PHYSICALPARAMETER(p) model.get_physical().p
#define OBSERVABLE(o) observables.o

namespace flexiblesusy {
namespace lowMSSM_librarylink {

using Handle = long;

class Redirect_output {
public:
   explicit Redirect_output(MLINK link_)
      : link(link_)
      , buffer()
      , old_cout(std::cout.rdbuf(buffer.rdbuf()))
      , old_cerr(std::cerr.rdbuf(buffer.rdbuf()))
      {}

   ~Redirect_output() {
      std::cout.rdbuf(old_cout);
      std::cerr.rdbuf(old_cerr);
      flush();
   }

private:
   MLINK link;               ///< redirect to this link
   std::stringstream buffer; ///< buffer caching stdout
   std::streambuf* old_cout; ///< original stdout buffer
   std::streambuf* old_cerr; ///< original stderr buffer

   void flush() {
      std::string line;
      while (std::getline(buffer, line)) {
         MLPutFunction(link, "CompoundExpression", 2);
         MLPutFunction(link, "FSlowMSSMMessage", 1);
         MLPutString(link, line.c_str());
      }
   }
};

class EUnknownHandle : public Error {
public:
   explicit EUnknownHandle(Handle hid_) : Error("Unknown handle"), hid(hid_) {}
   virtual ~EUnknownHandle() = default;
   std::string what_detailed() const override {
      return std::string(what()) + ": " + ToString(hid);
   }
   Handle hid;
};

class ENotEnoughFreeHandles : public Error {
public:
   explicit ENotEnoughFreeHandles(std::size_t max_handles_)
      : Error("Maximum number of open handles reached")
      , max_handles(max_handles_) {}
   virtual ~ENotEnoughFreeHandles() = default;
   std::string what_detailed() const override {
      return std::string(what()) + ": "
         + ToString(max_handles) + ".  Please close some handles!";
   }
   std::size_t max_handles;
};

class EWrongNumberOfParameters : public Error {
public:
   EWrongNumberOfParameters(mint pars_, mint expected_)
      : Error("Wrong number of arguments")
      , pars(pars_), expected(expected_) {}
   virtual ~EWrongNumberOfParameters() = default;
   std::string what_detailed() const override {
      return std::string(what()) + ": " + ToString(pars)
         + ".  Expected: " + ToString(expected);
   }
   mint pars, expected;
};

class EInvalidSpectrum : public Error {
public:
   EInvalidSpectrum() : Error("Invalid spectrum") {}
   virtual ~EInvalidSpectrum() = default;
};

class lowMSSM_spectrum {
public:
   virtual ~lowMSSM_spectrum() = default;

   virtual void put_model_spectra(MLINK link) const = 0;

   virtual const Spectrum_generator_problems& get_problems() const = 0;
   virtual void fill_slha_io(lowMSSM_slha_io&, const Spectrum_generator_settings&, const FlexibleDecay_settings&) const = 0;
   virtual double get_model_scale() const = 0;
   virtual const lowMSSM_observables& get_observables() const = 0;
   virtual const lowMSSM_decays& get_decays() const = 0;

   virtual const UnitarityInfiniteS& get_unitarity() const = 0;
   virtual const EffectiveCoupling_list& get_normalized_higgs_effc() const = 0;
   virtual const SignalResult& get_higgssignals_output() const = 0;
   virtual const std::vector<std::tuple<int, double, double, std::string>>& get_higgsbounds_output() const = 0;
   virtual void calculate_spectrum(
      const Spectrum_generator_settings&, const SLHA_io::Modsel&,
      const softsusy::QedQcd&, const lowMSSM_input_parameters&) = 0;
   virtual void calculate_model_observables(
      const softsusy::QedQcd&,
      
      const Physical_input&,
      const Spectrum_generator_settings&) = 0;
   virtual void calculate_model_decays(const softsusy::QedQcd&, const Physical_input&, const FlexibleDecay_settings&) = 0;
   virtual void calculate_normalized_effc(const Physical_input&, const softsusy::QedQcd&, const Spectrum_generator_settings&, const FlexibleDecay_settings&) = 0;
   virtual void calculate_unitarity() = 0;
};

template <typename Solver_type>
class lowMSSM_spectrum_impl : public lowMSSM_spectrum
{
public:
   virtual ~lowMSSM_spectrum_impl() = default;

   virtual void put_model_spectra(MLINK link) const override;

   virtual const Spectrum_generator_problems& get_problems() const override { return problems; }
   virtual void fill_slha_io(lowMSSM_slha_io&, const Spectrum_generator_settings&, const FlexibleDecay_settings&) const override;
   virtual double get_model_scale() const override { return std::get<0>(models).get_scale(); }
   virtual const lowMSSM_observables& get_observables() const override { return observables; }
   virtual const lowMSSM_decays& get_decays() const override { return decays; }

   virtual const UnitarityInfiniteS& get_unitarity() const override { return unitarityData; };
   virtual const EffectiveCoupling_list& get_normalized_higgs_effc() const override { return normalized_higgs_effc; };
   virtual const SignalResult& get_higgssignals_output() const override { return higgssignals; };
   virtual const std::vector<std::tuple<int, double, double, std::string>>& get_higgsbounds_output() const override { return higgsbounds; };
   virtual void calculate_spectrum(
      const Spectrum_generator_settings&, const SLHA_io::Modsel&,
      const softsusy::QedQcd&, const lowMSSM_input_parameters&) override;
   virtual void calculate_model_observables(
      const softsusy::QedQcd&,
      
      const Physical_input&,
      const Spectrum_generator_settings&) override;
   virtual void calculate_model_decays(const softsusy::QedQcd&, const Physical_input&, const FlexibleDecay_settings&) override;
   virtual void calculate_normalized_effc(const Physical_input&, const softsusy::QedQcd&, const Spectrum_generator_settings&, const FlexibleDecay_settings&) override;
   virtual void calculate_unitarity() override;
private:
   std::tuple<lowMSSM<Solver_type>> models{};        ///< running parameters and pole masses
   Spectrum_generator_problems problems{};   ///< spectrum generator problems
   lowMSSM_scales scales{};              ///< scale information
   lowMSSM_observables observables{};    ///< observables
   UnitarityInfiniteS unitarityData = {};    ///< unitarity constraints
   EffectiveCoupling_list normalized_higgs_effc {};
   SignalResult higgssignals {};
   std::vector<std::tuple<int, double, double, std::string>> higgsbounds {};
   lowMSSM_decays decays{};              ///< decays
};

class Model_data {
public:
   Model_data() = default;
   Model_data(const Model_data&) = delete;
   Model_data(Model_data&&) = default;
   ~Model_data() = default;
   Model_data& operator=(const Model_data&) = delete;
   Model_data& operator=(Model_data&&) = default;

   void set_input_parameters(const lowMSSM_input_parameters& input_) { input = input_; }
   void set_physical_input(const Physical_input& p) { physical_input = p; }
   void set_sm_input_parameters(const softsusy::QedQcd& qedqcd_) { qedqcd = qedqcd_; }
   void set_settings(const Spectrum_generator_settings& s) { settings = s; }
   
   void set_fd_settings(const FlexibleDecay_settings& s) { flexibledecay_settings = s; }
   void set_modsel(const SLHA_io::Modsel& m) { modsel = m; }

   const Spectrum_generator_settings& get_settings() const { return settings; }
   const FlexibleDecay_settings& get_fd_settings() const { return flexibledecay_settings; }
   const Physical_input& get_physical_input() { return physical_input; }
   const EffectiveCoupling_list& get_normalized_higgs_effc() const {
      check_spectrum_pointer();
      return spectrum->get_normalized_higgs_effc();
   }
   const SignalResult& get_higgssignals_output() const {
      check_spectrum_pointer();
      return spectrum->get_higgssignals_output();
   }
   const std::vector<std::tuple<int, double, double, std::string>>& get_higgsbounds_output() const {
      check_spectrum_pointer();
      return spectrum->get_higgsbounds_output();
   }

   void put_settings(MLINK link) const;
   void put_sm_input_parameters(MLINK link) const;
   void put_input_parameters(MLINK link) const;
   void put_observables(MLINK link) const;
   void put_slha(MLINK link) const;
   void put_decays(MLINK link) const;

   void put_eff_couplings(MLINK link) const;

   void put_problems(MLINK link) const;
   void put_warnings(MLINK link) const;
   void put_model_spectra(MLINK link) const;
   void put_higgstools_results(MLINK, std::optional<SignalResult> const&, std::vector<std::tuple<int, double, double, std::string>> const&) const;
   void put_unitarity(MLINK link) const;
   void calculate_spectrum();
   void check_spectrum(MLINK link) const;
   void calculate_model_observables();
   void calculate_model_decays();
   void calculate_normalized_effc();
   void calculate_unitarity();
   double get_model_scale() const {
      check_spectrum_pointer();
      return spectrum->get_model_scale();
   }
private:
   lowMSSM_input_parameters input{};                    ///< model input parameters
   Physical_input physical_input{};                         ///< extra non-SLHA physical input
   softsusy::QedQcd qedqcd{};                               ///< SLHA physical input
   Spectrum_generator_settings settings{};                  ///< spectrum generator settings
   FlexibleDecay_settings flexibledecay_settings {};        ///< FlexibleDecay settings
   SLHA_io::Modsel modsel{};                                ///< MODSEL input
   
   std::unique_ptr<lowMSSM_spectrum> spectrum{nullptr}; ///< spectrum information
   EffectiveCoupling_list normalized_higgs_effc {};
   SignalResult higgssignals {};

   lowMSSM_slha_io get_slha_io() const;

   void check_spectrum_pointer() const;
};

/// current handles
using Handle_map = std::map<Handle, Model_data>;
Handle_map handles;

/******************************************************************/

Handle get_new_handle()
{
   static const std::size_t max_handles =
      static_cast<std::size_t>(std::numeric_limits<Handle>::max());

   if (handles.size() >= max_handles)
      throw ENotEnoughFreeHandles(handles.size());

   Handle hid = 0;

   while (handles.find(hid) != handles.end())
      hid++;

   return hid;
}

/******************************************************************/

auto find_handle(Handle hid) -> decltype(handles.find(hid))
{
   const auto handle = handles.find(hid);

   if (handle == handles.end())
      throw EUnknownHandle(hid);

   return handle;
}

/******************************************************************/

Model_data& find_data(Handle hid)
{
   return find_handle(hid)->second;
}

/******************************************************************/

Handle get_handle_from(MLINK link)
{
   Handle hid;
   MLGet(link, &hid);

   return hid;
}

/******************************************************************/

Handle get_handle_from(MArgument arg)
{
   return MArgument_getInteger(arg);
}

/******************************************************************/

long number_of_args(MLINK link, const std::string& head)
{
   long argc;

   if (!MLCheckFunction(link, head.c_str(), &argc))
      std::cerr << "Error: argument is not a " << head << std::endl;

   return argc;
}

/******************************************************************/

bool check_number_of_args(MLINK link, long number_of_arguments,
                          const std::string& function_name)
{
   const auto n_given = number_of_args(link, "List");
   const bool ok = n_given == number_of_arguments;

   if (!ok) {
      std::cerr << "Error: " << function_name << " expects "
                << ToString(number_of_arguments) << " argument ("
                << n_given << " given)." << std::endl;
   }

   return ok;
}

/******************************************************************/

void put_error_output(MLINK link)
{
   MLPutSymbol(link, "$Failed");
}

/******************************************************************/

void put_message(MLINK link,
                 const std::string& function_name,
                 const std::string& message_tag,
                 const std::string& message_str)
{
   MLPutFunction(link, "CompoundExpression", 2);
   MLPutFunction(link, "Message", 2);
   MLPutFunction(link, "MessageName", 2);
   MLPutSymbol(link, function_name.c_str());
   MLPutString(link, message_tag.c_str());
   MLPutString(link, message_str.c_str());
}

/******************************************************************/

void Model_data::check_spectrum_pointer() const
{
   if (!spectrum) {
      throw SetupError("No spectrum generator set! "
                       "Did you run FSlowMSSMCalculateSpectrum[]?");
   }
}

/******************************************************************/

void Model_data::put_settings(MLINK link) const
{
   MLPutFunction(link, "List", Spectrum_generator_settings::NUMBER_OF_OPTIONS);

   MLPutRuleTo(link, settings.get(Spectrum_generator_settings::precision), "precisionGoal");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::max_iterations)), "maxIterations");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::solver)), "solver");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::calculate_sm_masses)), "calculateStandardModelMasses");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::pole_mass_loop_order)), "poleMassLoopOrder");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::ewsb_loop_order)), "ewsbLoopOrder");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::beta_loop_order)), "betaFunctionLoopOrder");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::threshold_corrections_loop_order)), "thresholdCorrectionsLoopOrder");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_2loop_correction_at_as)), "higgs2loopCorrectionAtAs");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_2loop_correction_ab_as)), "higgs2loopCorrectionAbAs");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_2loop_correction_at_at)), "higgs2loopCorrectionAtAt");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_2loop_correction_atau_atau)), "higgs2loopCorrectionAtauAtau");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::force_output)), "forceOutput");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::top_pole_qcd_corrections)), "topPoleQCDCorrections");
   MLPutRuleTo(link, settings.get(Spectrum_generator_settings::beta_zero_threshold), "betaZeroThreshold");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::force_positive_masses)), "forcePositiveMasses");
   MLPutRuleTo(link, settings.get(Spectrum_generator_settings::pole_mass_scale), "poleMassScale");
   MLPutRuleTo(link, settings.get(Spectrum_generator_settings::eft_pole_mass_scale), "eftPoleMassScale");
   MLPutRuleTo(link, settings.get(Spectrum_generator_settings::eft_matching_scale), "eftMatchingScale");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::eft_matching_loop_order_up)), "eftMatchingLoopOrderUp");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::eft_matching_loop_order_down)), "eftMatchingLoopOrderDown");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::eft_higgs_index)), "eftHiggsIndex");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::calculate_bsm_masses)), "calculateBSMMasses");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::threshold_corrections)), "thresholdCorrections");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_3loop_ren_scheme_atb_as2)), "higgs3loopCorrectionRenScheme");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_3loop_correction_at_as2)), "higgs3loopCorrectionAtAsAs");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_3loop_correction_ab_as2)), "higgs3loopCorrectionAbAsAs");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_3loop_correction_at2_as)), "higgs3loopCorrectionAtAtAs");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_3loop_correction_at3)), "higgs3loopCorrectionAtAtAt");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::higgs_4loop_correction_at_as3)), "higgs4loopCorrectionAtAsAsAs");
   MLPutRuleTo(link, static_cast<int>(settings.get(Spectrum_generator_settings::loop_library)), "loopLibrary");
   MLPutRuleTo(link, settings.get(Spectrum_generator_settings::calculate_amm), "calculateAMM");
   MLPutRuleTo(link, modsel.parameter_output_scale, "parameterOutputScale");

   MLEndPacket(link);
}

/******************************************************************/

void Model_data::put_sm_input_parameters(MLINK link) const
{
   MLPutFunction(link, "List",softsusy::NUMBER_OF_LOW_ENERGY_INPUT_PARAMETERS
                              + Physical_input::NUMBER_OF_INPUT_PARAMETERS);

   MLPutRuleTo(link, qedqcd.displayAlphaEmInput(), "alphaEmMZ");
   MLPutRuleTo(link, qedqcd.displayFermiConstant(), "GF");
   MLPutRuleTo(link, qedqcd.displayAlphaSInput(), "alphaSMZ");
   MLPutRuleTo(link, qedqcd.displayPoleMZ(), "MZ");
   MLPutRuleTo(link, qedqcd.displayMbMb(), "mbmb");
   MLPutRuleTo(link, qedqcd.displayPoleMt(), "Mt");
   MLPutRuleTo(link, qedqcd.displayPoleMtau(), "Mtau");
   MLPutRuleTo(link, qedqcd.displayNeutrinoPoleMass(3), "Mv3");
   MLPutRuleTo(link, qedqcd.displayPoleMW(), "MW");
   MLPutRuleTo(link, qedqcd.displayPoleMel(), "Me");
   MLPutRuleTo(link, qedqcd.displayNeutrinoPoleMass(1), "Mv1");
   MLPutRuleTo(link, qedqcd.displayPoleMmuon(), "Mm");
   MLPutRuleTo(link, qedqcd.displayNeutrinoPoleMass(2), "Mv2");
   MLPutRuleTo(link, qedqcd.displayMd2GeV(), "md2GeV");
   MLPutRuleTo(link, qedqcd.displayMu2GeV(), "mu2GeV");
   MLPutRuleTo(link, qedqcd.displayMs2GeV(), "ms2GeV");
   MLPutRuleTo(link, qedqcd.displayMcMc(), "mcmc");

   const flexiblesusy::CKM_parameters ckm(qedqcd.displayCKM());
   MLPutRuleTo(link, ckm.theta_12, "CKMTheta12");
   MLPutRuleTo(link, ckm.theta_13, "CKMTheta13");
   MLPutRuleTo(link, ckm.theta_23, "CKMTheta23");
   MLPutRuleTo(link, ckm.delta   , "CKMDelta");

   const flexiblesusy::PMNS_parameters pmns(qedqcd.displayPMNS());
   MLPutRuleTo(link, pmns.theta_12, "PMNSTheta12");
   MLPutRuleTo(link, pmns.theta_13, "PMNSTheta13");
   MLPutRuleTo(link, pmns.theta_23, "PMNSTheta23");
   MLPutRuleTo(link, pmns.delta   , "PMNSDelta");
   MLPutRuleTo(link, pmns.alpha_1 , "PMNSAlpha1");
   MLPutRuleTo(link, pmns.alpha_2 , "PMNSAlpha2");

   MLPutRuleTo(link, physical_input.get(Physical_input::alpha_em_0), "alphaEm0");
   MLPutRuleTo(link, physical_input.get(Physical_input::mh_pole), "Mh");

   MLEndPacket(link);
}

/******************************************************************/

void Model_data::put_input_parameters(MLINK link) const
{
   MLPutFunction(link, "List", 14);

   MLPutRuleTo(link, INPUTPARAMETER(TanBeta), "TanBeta");
   MLPutRuleTo(link, INPUTPARAMETER(MuInput), "MuInput");
   MLPutRuleTo(link, INPUTPARAMETER(TYdInput), "TYdInput");
   MLPutRuleTo(link, INPUTPARAMETER(TYeInput), "TYeInput");
   MLPutRuleTo(link, INPUTPARAMETER(TYuInput), "TYuInput");
   MLPutRuleTo(link, INPUTPARAMETER(BMuInput), "BMuInput");
   MLPutRuleTo(link, INPUTPARAMETER(mq2Input), "mq2Input");
   MLPutRuleTo(link, INPUTPARAMETER(ml2Input), "ml2Input");
   MLPutRuleTo(link, INPUTPARAMETER(md2Input), "md2Input");
   MLPutRuleTo(link, INPUTPARAMETER(mu2Input), "mu2Input");
   MLPutRuleTo(link, INPUTPARAMETER(me2Input), "me2Input");
   MLPutRuleTo(link, INPUTPARAMETER(MassBInput), "MassBInput");
   MLPutRuleTo(link, INPUTPARAMETER(MassWBInput), "MassWBInput");
   MLPutRuleTo(link, INPUTPARAMETER(MassGInput), "MassGInput");


   MLEndPacket(link);
}

/******************************************************************/

void Model_data::put_problems(MLINK link) const
{
   check_spectrum_pointer();
   const auto problems = spectrum->get_problems();
   const auto models = problems.get_model_problems();
   const auto n_models = models.size();
   const auto solvers = problems.get_bvp_solver_problems();
   const auto n_solvers = solvers.size();
   const auto observables = spectrum->get_observables().problems;

   MLPutFunction(link, "List", n_models + n_solvers + 1);

   for (const auto& m: models) {
      MLPutRule(link, m.get_model_name());
      mathlink_format_problems(link, m);
   }

   for (const auto& m: solvers) {
      MLPutRule(link, m.get_solver_name());
      mathlink_format_problems(link, m);
   }

   MLPutRule(link, "Observables");
   mathlink_format_problems(link, observables);

   MLEndPacket(link);
}

/******************************************************************/

void Model_data::put_warnings(MLINK link) const
{
   check_spectrum_pointer();
   const auto problems = spectrum->get_problems();
   const auto models = problems.get_model_problems();
   const auto n_models = models.size();
   const auto solvers = problems.get_bvp_solver_problems();
   const auto n_solvers = solvers.size();

   MLPutFunction(link, "List", n_models + n_solvers);

   for (const auto& m: models) {
      MLPutRule(link, m.get_model_name());
      mathlink_format_warnings(link, m);
   }

   for (const auto& m: solvers) {
      MLPutRule(link, m.get_solver_name());
      mathlink_format_problems(link, m);
   }

   MLEndPacket(link);
}

/******************************************************************/

lowMSSM_slha_io Model_data::get_slha_io() const
{
   check_spectrum_pointer();
   lowMSSM_slha_io slha_io;

   slha_io.set_settings(settings);
   slha_io.set_sminputs(qedqcd);
   slha_io.set_physical_input(physical_input);
   slha_io.set_modsel(modsel);
   slha_io.set_FlexibleDecay_settings(flexibledecay_settings);
   slha_io.set_input(input);
   
   slha_io.set_print_imaginary_parts_of_majorana_mixings(
      settings.get(Spectrum_generator_settings::force_positive_masses));

   spectrum->fill_slha_io(slha_io, settings, flexibledecay_settings);

   return slha_io;
}

/******************************************************************/

void Model_data::put_slha(MLINK link) const
{
   const auto slha_io = get_slha_io();
   std::ostringstream ostr;

   slha_io.write_to_stream(ostr);

   MLPutString(link, ostr.str().c_str());
   MLEndPacket(link);
}

/******************************************************************/

template <typename Solver_type>
void put_spectrum(const standard_model::StandardModel<Solver_type>& model, MLINK link)
{
   MLPutRule(link, standard_model_info::model_name);
   MLPutFunction(link, "List", 46);

   MLPutRuleTo(link, MODELPARAMETER(MVG), "VG", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MHp), "Hp", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFv), "Fv", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MAh), "Ah", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(Mhh), "hh", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFd), "Fd", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFu), "Fu", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFe), "Fe", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MVWp), "VWp", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MVP), "VP", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MVZ), "VZ", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(Vd), "Vd");
   MLPutRuleTo(link, MODELPARAMETER(Ud), "Ud");
   MLPutRuleTo(link, MODELPARAMETER(Vu), "Vu");
   MLPutRuleTo(link, MODELPARAMETER(Uu), "Uu");
   MLPutRuleTo(link, MODELPARAMETER(Ve), "Ve");
   MLPutRuleTo(link, MODELPARAMETER(Ue), "Ue");
   MLPutRuleTo(link, MODELPARAMETER(ZZ), "ZZ");
   MLPutRuleTo(link, PHYSICALPARAMETER(MVG), "VG", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MHp), "Hp", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFv), "Fv", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MAh), "Ah", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Mhh), "hh", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFd), "Fd", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFu), "Fu", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFe), "Fe", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MVWp), "VWp", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MVP), "VP", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MVZ), "VZ", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Vd), "Vd", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Ud), "Ud", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Vu), "Vu", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Uu), "Uu", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Ve), "Ve", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Ue), "Ue", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZZ), "ZZ", {"Pole"});
   MLPutRuleTo(link, MODELPARAMETER(g1), "g1");
   MLPutRuleTo(link, MODELPARAMETER(g2), "g2");
   MLPutRuleTo(link, MODELPARAMETER(g3), "g3");
   MLPutRuleTo(link, MODELPARAMETER(Lambdax), "\u03bb");
   MLPutRuleTo(link, MODELPARAMETER(Yu), "Yu");
   MLPutRuleTo(link, MODELPARAMETER(Yd), "Yd");
   MLPutRuleTo(link, MODELPARAMETER(Ye), "Ye");
   MLPutRuleTo(link, MODELPARAMETER(mu2), "mu2");
   MLPutRuleTo(link, MODELPARAMETER(v), "v");
   MLPutRuleTo(link, MODELPARAMETER(scale), "SCALE");
}

/******************************************************************/

void put_spectrum(const lowMSSM_slha& model, MLINK link)
{
   MLPutRule(link, lowMSSM_info::model_name);
   MLPutFunction(link, "List", 94);

   MLPutRuleTo(link, MODELPARAMETER(MVG), "VG", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MGlu), "Glu", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFv), "Fv", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MSd), "Sd", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MSv), "Sv", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MSu), "Su", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MSe), "Se", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(Mhh), "hh", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MAh), "Ah", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MHpm), "Hpm", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MChi), "Chi", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MCha), "Cha", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFe), "Fe", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFd), "Fd", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MFu), "Fu", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MVWm), "VWm", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MVP), "VP", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(MVZ), "VZ", {"M"});
   MLPutRuleTo(link, MODELPARAMETER(ZD), "ZD");
   MLPutRuleTo(link, MODELPARAMETER(ZV), "ZV");
   MLPutRuleTo(link, MODELPARAMETER(ZU), "ZU");
   MLPutRuleTo(link, MODELPARAMETER(ZE), "ZE");
   MLPutRuleTo(link, MODELPARAMETER(ZH), "ZH");
   MLPutRuleTo(link, MODELPARAMETER(ZA), "ZA");
   MLPutRuleTo(link, MODELPARAMETER(ZP), "ZP");
   MLPutRuleTo(link, MODELPARAMETER(ZN), "ZN");
   MLPutRuleTo(link, MODELPARAMETER(UM), "UM");
   MLPutRuleTo(link, MODELPARAMETER(UP), "UP");
   MLPutRuleTo(link, MODELPARAMETER(ZEL), "ZEL");
   MLPutRuleTo(link, MODELPARAMETER(ZER), "ZER");
   MLPutRuleTo(link, MODELPARAMETER(ZDL), "ZDL");
   MLPutRuleTo(link, MODELPARAMETER(ZDR), "ZDR");
   MLPutRuleTo(link, MODELPARAMETER(ZUL), "ZUL");
   MLPutRuleTo(link, MODELPARAMETER(ZUR), "ZUR");
   MLPutRuleTo(link, MODELPARAMETER(ZZ), "ZZ");
   MLPutRuleTo(link, PHYSICALPARAMETER(MVG), "VG", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MGlu), "Glu", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFv), "Fv", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MSd), "Sd", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MSv), "Sv", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MSu), "Su", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MSe), "Se", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(Mhh), "hh", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MAh), "Ah", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MHpm), "Hpm", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MChi), "Chi", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MCha), "Cha", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFe), "Fe", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFd), "Fd", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MFu), "Fu", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MVWm), "VWm", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MVP), "VP", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(MVZ), "VZ", {"Pole", "M"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZD), "ZD", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZV), "ZV", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZU), "ZU", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZE), "ZE", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZH), "ZH", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZA), "ZA", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZP), "ZP", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZN), "ZN", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(UM), "UM", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(UP), "UP", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZEL), "ZEL", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZER), "ZER", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZDL), "ZDL", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZDR), "ZDR", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZUL), "ZUL", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZUR), "ZUR", {"Pole"});
   MLPutRuleTo(link, PHYSICALPARAMETER(ZZ), "ZZ", {"Pole"});
   MLPutRuleTo(link, MODELPARAMETER(Yd), "Yd");
   MLPutRuleTo(link, MODELPARAMETER(Ye), "Ye");
   MLPutRuleTo(link, MODELPARAMETER(Yu), "Yu");
   MLPutRuleTo(link, MODELPARAMETER(Mu), "\u03bc");
   MLPutRuleTo(link, MODELPARAMETER(g1), "g1");
   MLPutRuleTo(link, MODELPARAMETER(g2), "g2");
   MLPutRuleTo(link, MODELPARAMETER(g3), "g3");
   MLPutRuleTo(link, MODELPARAMETER(vd), "vd");
   MLPutRuleTo(link, MODELPARAMETER(vu), "vu");
   MLPutRuleTo(link, MODELPARAMETER(TYd), "Yd", {"T"});
   MLPutRuleTo(link, MODELPARAMETER(TYe), "Ye", {"T"});
   MLPutRuleTo(link, MODELPARAMETER(TYu), "Yu", {"T"});
   MLPutRuleTo(link, MODELPARAMETER(BMu), "\u03bc", {"B"});
   MLPutRuleTo(link, MODELPARAMETER(mq2), "mq2");
   MLPutRuleTo(link, MODELPARAMETER(ml2), "ml2");
   MLPutRuleTo(link, MODELPARAMETER(mHd2), "mHd2");
   MLPutRuleTo(link, MODELPARAMETER(mHu2), "mHu2");
   MLPutRuleTo(link, MODELPARAMETER(md2), "md2");
   MLPutRuleTo(link, MODELPARAMETER(mu2), "mu2");
   MLPutRuleTo(link, MODELPARAMETER(me2), "me2");
   MLPutRuleTo(link, MODELPARAMETER(MassB), "MassB");
   MLPutRuleTo(link, MODELPARAMETER(MassWB), "MassWB");
   MLPutRuleTo(link, MODELPARAMETER(MassG), "MassG");
   MLPutRuleTo(link, MODELPARAMETER(scale), "SCALE");

}

/******************************************************************/

template<typename... Ts>
void put_spectra(const std::tuple<Ts...>& models, MLINK link)
{
   MLPutFunction(link, "List", std::tuple_size<std::tuple<Ts...>>::value);

   const auto ps = [link] (const auto& model) { put_spectrum(model, link); };
   for_each_in_tuple(models, ps);

   MLEndPacket(link);
}

/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::put_model_spectra(MLINK link) const
{
   put_spectra(models, link);
}

/******************************************************************/

void Model_data::put_model_spectra(MLINK link) const
{
   check_spectrum_pointer();
   spectrum->put_model_spectra(link);
}

/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::calculate_spectrum(
   const Spectrum_generator_settings& settings,
   const SLHA_io::Modsel& modsel,
   const softsusy::QedQcd& qedqcd,
   const lowMSSM_input_parameters& input
)
{
   lowMSSM_spectrum_generator<Solver_type> spectrum_generator;
   spectrum_generator.set_settings(settings);
   spectrum_generator.set_parameter_output_scale(modsel.parameter_output_scale);
   spectrum_generator.run(qedqcd, input);

   models = spectrum_generator.get_models_slha();
   problems = spectrum_generator.get_problems();
   scales.HighScale = spectrum_generator.get_high_scale();
   scales.SUSYScale = spectrum_generator.get_susy_scale();
   scales.LowScale  = spectrum_generator.get_low_scale();
   scales.pole_mass_scale = spectrum_generator.get_pole_mass_scale();
}

/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::calculate_model_observables(
   const softsusy::QedQcd& qedqcd,
   
   const Physical_input& physical_input,
   const Spectrum_generator_settings& settings)
{
   observables = calculate_observables(
      std::get<0>(models),
      qedqcd,
      
      physical_input,
      settings,
      scales.pole_mass_scale);
}

/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::calculate_model_decays(
   const softsusy::QedQcd& qedqcd, const Physical_input& physical_input, const FlexibleDecay_settings& flexibledecay_settings)
{
   decays = lowMSSM_decays(std::get<0>(models), qedqcd, physical_input, flexibledecay_settings);
   decays.calculate_decays();
}


/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::calculate_normalized_effc(
   const Physical_input& physical_input, const softsusy::QedQcd& qedqcd, const Spectrum_generator_settings& settings, const FlexibleDecay_settings& flexibledecay_settings)
{
   normalized_higgs_effc = get_normalized_effective_couplings(decays.get_neutral_higgs_effc(), physical_input, qedqcd, settings, flexibledecay_settings);
}

/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::calculate_unitarity() {
   unitarityData = lowMSSM_unitarity::max_scattering_eigenvalue_infinite_s(std::get<0>(models));
}

/******************************************************************/

template <typename Solver_type>
void lowMSSM_spectrum_impl<Solver_type>::fill_slha_io(lowMSSM_slha_io& slha_io,
       const Spectrum_generator_settings& settings, const FlexibleDecay_settings& flexibledecay_settings) const
{
   const auto& problems = std::get<0>(models).get_problems();
   const auto force_output = std::get<0>(models).do_force_output();

   slha_io.set_spinfo(problems);
   if (!problems.have_problem() || force_output) {
      slha_io.set_spectrum(models);
      slha_io.set_extra(std::get<0>(models), scales, observables, settings);
   }

   slha_io.set_unitarity_infinite_s(settings, unitarityData);
   const auto& decays_problems = decays.get_problems();
   const bool loop_library_for_decays =
      (Loop_library::get_type() == Loop_library::Library::Collier) ||
      (Loop_library::get_type() == Loop_library::Library::Looptools);
   if ((!decays_problems.have_problem() && loop_library_for_decays) || force_output) {
      slha_io.set_dcinfo(decays_problems);
      slha_io.set_decays(decays.get_decay_table(), flexibledecay_settings);
      if (flexibledecay_settings.get(FlexibleDecay_settings::print_effc_block)) {
         slha_io.set_effectivecouplings_block(decays.get_effhiggscouplings_block_input());
      }
      if (flexibledecay_settings.get(FlexibleDecay_settings::calculate_normalized_effc)) {
         slha_io.set_normalized_effectivecouplings_block(get_normalized_higgs_effc());
         slha_io.set_imnormalized_effectivecouplings_block(get_normalized_higgs_effc());
      }
      if (flexibledecay_settings.get(FlexibleDecay_settings::call_higgstools)) {
         const SignalResult& hs = get_higgssignals_output();
         slha_io.set_hs_or_lilith("HIGGSSIGNALS", hs.ndof, hs.chi2BSM, hs.chi2SM, hs.mhRef, hs.pval);
      }
      if (flexibledecay_settings.get(FlexibleDecay_settings::call_lilith)) {
         const std::vector<std::tuple<int, double, double, std::string>>& hb = get_higgsbounds_output();
         slha_io.set_higgsbounds(hb);
      }
   }
}

/******************************************************************/

void Model_data::put_observables(MLINK link) const
{
   check_spectrum_pointer();
   lowMSSM_observables observables = spectrum->get_observables();

   MLPutFunction(link, "List", 1);
   MLPutRule(link, lowMSSM_info::model_name);
   MLPutFunction(link, "List", 1);

   MLPutRuleTo(link, OBSERVABLE(amm_Fe_1), 2, {"FlexibleSUSYObservable`AMM", "Fe"});


   MLEndPacket(link);
}

/******************************************************************/

void Model_data::put_decays(MLINK link) const
{
   check_spectrum_pointer();
   lowMSSM_decays decays = spectrum->get_decays();
   const auto& decay_table = decays.get_decay_table();
   const auto number_of_decays = decay_table.size();

   MLPutFunction(link, "List", 1);
   MLPutRule(link, lowMSSM_info::model_name);
   MLPutFunction(link, "List", number_of_decays);

   auto is_invalid_decay = [&] (const auto& decays_list, const auto& decay) {
      return !(decays_list.get_total_width() > 0.)
             || this->get_fd_settings().get(FlexibleDecay_settings::min_br_to_print) > decay.second.get_width()/decays_list.get_total_width();
   };

   for (const auto& decays_list : decay_table) {
      const auto pid = decays_list.get_particle_id();
      int n_decays = 0;
      for (const auto& decay : decays_list) {
         if (is_invalid_decay(decays_list, decay)) {
            continue;
         }
         n_decays++;
      }
      const auto multiplet_and_index_pair = lowMSSM_info::get_multiplet_and_index_from_pdg(pid);
      if (multiplet_and_index_pair.second) {
         MLPutFunction(link, "Rule", 2);
         MLPutFunction(link, multiplet_and_index_pair.first.c_str(), 1);
         MLPutInteger(link, multiplet_and_index_pair.second.value());
      }
      else {
         MLPutRule(link, multiplet_and_index_pair.first.c_str());
      }
      MLPutFunction(link, "List", 3);
      MLPut(link, pid);
      MLPut(link, decays_list.get_total_width());
      MLPutFunction(link, "List", n_decays);

      for (const auto& decay : decays_list) {
         if (is_invalid_decay(decays_list, decay)) {
            continue;
         }
         const auto& final_states = decay.second.get_final_state_particle_ids();
         MLPutFunction(link, "List", 3);
         MLPut(link, pid);
         MLPutFunction(link, "List", final_states.size());
         for (const auto id : final_states) {
            MLPut(link, id);
         }
         MLPut(link, decay.second.get_width());
      }
   }

   MLEndPacket(link);
}


/******************************************************************/

void Model_data::put_eff_couplings(MLINK link) const
{
   check_spectrum_pointer();
   auto const& effc = get_normalized_higgs_effc();

   const auto number_of_states = effc.size();
   MLPutFunction(link, "List", 1);
   MLPutRule(link, lowMSSM_info::model_name);
   MLPutFunction(link, "List", number_of_states);

   for (const auto& d : effc) {
      const auto multiplet_and_index_pair = lowMSSM_info::get_multiplet_and_index_from_pdg(d.pdgid);
      if (multiplet_and_index_pair.second) {
         MLPutFunction(link, "Rule", 2);
         MLPutFunction(link, multiplet_and_index_pair.first.c_str(), 1);
         MLPutInteger(link, multiplet_and_index_pair.second.value());
      }
      else {
         MLPutRule(link, multiplet_and_index_pair.first.c_str());
      }
      MLPutFunction(link, "List", 2);
      MLPut(link, d.pdgid);
      MLPutFunction(link, "List", 14);

      std::array<std::pair<std::pair<int, int>, double>, 5> bosonChannel {
         std::pair<std::pair<int, int>, double> {{-24, 24}, d.WW.second},
         std::pair<std::pair<int, int>, double> {{23, 23}, d.ZZ.second},
         std::pair<std::pair<int, int>, double> {{22, 23}, d.Zgam.second},
         std::pair<std::pair<int, int>, double> {{21, 21}, d.gg.second},
         std::pair<std::pair<int, int>, double> {{22, 22}, d.gamgam.second}
      };
      for (const auto& el : bosonChannel) {
         MLPutFunction(link, "List", 3);
         MLPut(link, d.pdgid);
         MLPutFunction(link, "List", 2);
         MLPut(link, el.first.first);
         MLPut(link, el.first.second);
         MLPut(link, el.second);
      }
      std::array<std::pair<int, std::complex<double>>, 9> fermionChannel {
         std::pair<int, std::complex<double>> {1, d.dd.second},
         std::pair<int, std::complex<double>> {2, d.uu.second},
         std::pair<int, std::complex<double>> {3, d.ss.second},
         std::pair<int, std::complex<double>> {4, d.cc.second},
         std::pair<int, std::complex<double>> {5, d.bb.second},
         std::pair<int, std::complex<double>> {6, d.tt.second},
         std::pair<int, std::complex<double>> {11, d.ee.second},
         std::pair<int, std::complex<double>> {13, d.mumu.second},
         std::pair<int, std::complex<double>> {15, d.tautau.second}
      };
      for (const auto& el : fermionChannel) {
         MLPutFunction(link, "List", 3);
         MLPut(link, d.pdgid);
         MLPutFunction(link, "List", 2);
         MLPut(link, -el.first);
         MLPut(link, el.first);
         MLPut(link, el.second);
      }
   }

   MLEndPacket(link);
}


#ifdef ENABLE_HIGGSTOOLS
void Model_data::put_higgstools_results(MLINK link, std::optional<SignalResult> const& hs, std::vector<std::tuple<int, double, double, std::string>> const& hb) const
{
   MLPutFunction(link, "List", 1);
   MLPutRule(link, "lowMSSM");
   MLPutFunction(link, "List", 2);
   if (hs.has_value()) {
      SignalResult hs_ = hs.value();
      MLPutFunction(link, "List", 4);
      MLPutRuleTo(link, static_cast<int>(hs_.ndof), "ndof");
      MLPutRuleTo(link, hs_.chi2BSM, "chi2");
      MLPutRuleTo(link, hs_.chi2SM, "chi2SM");
      MLPutRuleTo(link, hs_.pval, "pval");
   }
   else {
      MLPutFunction(link, "List", 0);
   }
   MLPutFunction(link, "List", hb.size());
   for (const auto& el : hb) {
      MLPutFunction(link, "List", 4);
      MLPutRuleTo(link, std::get<0>(el), "pdgid");
      MLPutRuleTo(link, std::get<1>(el), "obsRatio");
      MLPutRuleTo(link, std::get<2>(el), "expRatio");
      MLPutFunction(link, "Rule", 2);
      MLPutString(link, "bestAnalysis");
      MLPutString(link, std::get<3>(el).c_str());
   }
   MLEndPacket(link);
}
#endif

/******************************************************************/

void Model_data::put_unitarity(MLINK link) const
{
   check_spectrum_pointer();
   const UnitarityInfiniteS unitarityData = spectrum->get_unitarity();
   MLPutFunction(link, "List", 1);
   MLPutRule(link, "lowMSSM");
   MLPutFunction(link, "List", 3);
   MLPutRuleTo(link, unitarityData.allowed, "FlexibleSUSYUnitarity`Allowed");
   MLPutRuleTo(link, unitarityData.renScale, "FlexibleSUSYUnitarity`RenormalizationScale");
   MLPutRuleTo(link, unitarityData.maxAbsReEigenval, "FlexibleSUSYUnitarity`MaxAbsReEigen");
   MLEndPacket(link);
}

/******************************************************************/

void Model_data::check_spectrum(MLINK link) const
{
   check_spectrum_pointer();
   const auto& problems = spectrum->get_problems();

   for (const auto& s: problems.get_problem_strings())
      put_message(link, "FSlowMSSMCalculateSpectrum", "error", s);

   for (const auto& s: problems.get_warning_strings())
      put_message(link, "FSlowMSSMCalculateSpectrum", "warning", s);

   if (problems.have_problem() &&
       !settings.get(Spectrum_generator_settings::force_output))
      throw EInvalidSpectrum();
}

/******************************************************************/

void Model_data::calculate_spectrum()
{
   const int solver_type = static_cast<int>(settings.get(
                                               Spectrum_generator_settings::solver));
   switch (solver_type) {
   case 0:
#ifdef ENABLE_TWO_SCALE_SOLVER
   case 1:
      spectrum.reset(new lowMSSM_spectrum_impl<Two_scale>());
      spectrum->calculate_spectrum(settings, modsel, qedqcd, input);
      if (!spectrum->get_problems().have_problem() || solver_type != 0) break;
      [[fallthrough]];
#endif

   default:
      if (solver_type != 0) {
         throw SetupError("invalid solver type");
      }
   }
}

/******************************************************************/

void Model_data::calculate_model_observables()
{
   check_spectrum_pointer();
   spectrum->calculate_model_observables(qedqcd,
      
      physical_input,
      settings);
}

/******************************************************************/

void Model_data::calculate_model_decays()
{
   check_spectrum_pointer();
   const bool loop_library_for_decays =
      (Loop_library::get_type() == Loop_library::Library::Collier) ||
      (Loop_library::get_type() == Loop_library::Library::Looptools);
   if (flexibledecay_settings.get(FlexibleDecay_settings::calculate_decays)) {
      if (loop_library_for_decays) {
         spectrum->calculate_model_decays(qedqcd, physical_input, flexibledecay_settings);
      }
      else if (!loop_library_for_decays) {
         WARNING("Decay module requires a dedicated loop library. Configure FlexibleSUSY with Collier or LoopTools and set appropriately flag 31 in Block FlexibleSUSY of the LesHouches input.");
      }
   }
}


/******************************************************************/

void Model_data::calculate_normalized_effc()
{
   check_spectrum_pointer();
   const bool loop_library_for_decays =
      (Loop_library::get_type() == Loop_library::Library::Collier) ||
      (Loop_library::get_type() == Loop_library::Library::Looptools);
   if (flexibledecay_settings.get(FlexibleDecay_settings::calculate_decays)) {
      if (loop_library_for_decays) {
         spectrum->calculate_normalized_effc(physical_input, qedqcd, settings, flexibledecay_settings);
      }
      else if (!loop_library_for_decays) {
         WARNING("Decay module requires a dedicated loop library. Configure FlexibleSUSY with Collier or LoopTools and set appropriately flag 31 in Block FlexibleSUSY of the LesHouches input.");
      }
   }
}

/******************************************************************/

void Model_data::calculate_unitarity()
{
   check_spectrum_pointer();
   spectrum->calculate_unitarity();
}

/******************************************************************/

template <typename Element_t>
Model_data make_data(const Dynamic_array_view<Element_t>& pars)
{
   using Index_t = typename Dynamic_array_view<Element_t>::Index_t;

   const Index_t n_settings = Spectrum_generator_settings::NUMBER_OF_OPTIONS,
      n_sm_parameters = softsusy::NUMBER_OF_LOW_ENERGY_INPUT_PARAMETERS
                        + Physical_input::NUMBER_OF_INPUT_PARAMETERS,
      n_input_pars = 78;
   const Index_t n_fd_settings = 9;
   const Index_t n_total = n_settings + n_sm_parameters + n_input_pars + n_fd_settings;

   if (pars.size() != n_total)
      throw EWrongNumberOfParameters(pars.size(), n_total);

   Index_t c = 0; // counter

   Spectrum_generator_settings settings;
   settings.set(Spectrum_generator_settings::precision, pars[c++]);
   settings.set(Spectrum_generator_settings::max_iterations, pars[c++]);
   settings.set(Spectrum_generator_settings::solver, pars[c++]);
   settings.set(Spectrum_generator_settings::calculate_sm_masses, pars[c++]);
   settings.set(Spectrum_generator_settings::pole_mass_loop_order, pars[c++]);
   settings.set(Spectrum_generator_settings::ewsb_loop_order, pars[c++]);
   settings.set(Spectrum_generator_settings::beta_loop_order, pars[c++]);
   settings.set(Spectrum_generator_settings::threshold_corrections_loop_order, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_2loop_correction_at_as, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_2loop_correction_ab_as, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_2loop_correction_at_at, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_2loop_correction_atau_atau, pars[c++]);
   settings.set(Spectrum_generator_settings::force_output, pars[c++]);
   settings.set(Spectrum_generator_settings::top_pole_qcd_corrections, pars[c++]);
   settings.set(Spectrum_generator_settings::beta_zero_threshold, pars[c++]);
   settings.set(Spectrum_generator_settings::force_positive_masses, pars[c++]);
   settings.set(Spectrum_generator_settings::pole_mass_scale, pars[c++]);
   settings.set(Spectrum_generator_settings::eft_pole_mass_scale, pars[c++]);
   settings.set(Spectrum_generator_settings::eft_matching_scale, pars[c++]);
   settings.set(Spectrum_generator_settings::eft_matching_loop_order_up, pars[c++]);
   settings.set(Spectrum_generator_settings::eft_matching_loop_order_down, pars[c++]);
   settings.set(Spectrum_generator_settings::eft_higgs_index, pars[c++]);
   settings.set(Spectrum_generator_settings::calculate_bsm_masses, pars[c++]);
   settings.set(Spectrum_generator_settings::threshold_corrections, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_3loop_ren_scheme_atb_as2, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_3loop_correction_at_as2, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_3loop_correction_ab_as2, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_3loop_correction_at2_as, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_3loop_correction_at3, pars[c++]);
   settings.set(Spectrum_generator_settings::higgs_4loop_correction_at_as3, pars[c++]);
   settings.set(Spectrum_generator_settings::loop_library, pars[c++]);
   settings.set(Spectrum_generator_settings::calculate_amm, pars[c++]);

   SLHA_io::Modsel modsel;
   modsel.parameter_output_scale = pars[c++];

   softsusy::QedQcd qedqcd;
   qedqcd.setAlpha(softsusy::ALPHA, pars[c]);
   qedqcd.setAlphaEmInput(pars[c++]);
   qedqcd.setFermiConstant(pars[c++]);
   qedqcd.setAlpha(softsusy::ALPHAS, pars[c]);
   qedqcd.setAlphaSInput(pars[c++]);
   qedqcd.setPoleMZ(pars[c]);
   qedqcd.set_scale(pars[c++]);
   qedqcd.setMass(softsusy::mBottom, pars[c]);
   qedqcd.setMbMb(pars[c++]);
   qedqcd.setPoleMt(pars[c++]);
   qedqcd.setMass(softsusy::mTau, pars[c]);
   qedqcd.setPoleMtau(pars[c++]);
   qedqcd.setNeutrinoPoleMass(3, pars[c++]);
   qedqcd.setPoleMW(pars[c++]);
   qedqcd.setMass(softsusy::mElectron, pars[c]);
   qedqcd.setPoleMel(pars[c++]);
   qedqcd.setNeutrinoPoleMass(1, pars[c++]);
   qedqcd.setMass(softsusy::mMuon, pars[c]);
   qedqcd.setPoleMmuon(pars[c++]);
   qedqcd.setNeutrinoPoleMass(2, pars[c++]);
   qedqcd.setMass(softsusy::mDown, pars[c]);
   qedqcd.setMd2GeV(pars[c++]);
   qedqcd.setMass(softsusy::mUp, pars[c]);
   qedqcd.setMu2GeV(pars[c++]);
   qedqcd.setMass(softsusy::mStrange, pars[c]);
   qedqcd.setMs2GeV(pars[c++]);
   qedqcd.setMass(softsusy::mCharm, pars[c]);
   qedqcd.setMcMc(pars[c++]);

   {
      flexiblesusy::CKM_parameters ckm;
      ckm.theta_12 = pars[c++];
      ckm.theta_13 = pars[c++];
      ckm.theta_23 = pars[c++];
      ckm.delta    = pars[c++];
      qedqcd.setCKM(ckm);
   }

   {
      flexiblesusy::PMNS_parameters pmns;
      pmns.theta_12 = pars[c++];
      pmns.theta_13 = pars[c++];
      pmns.theta_23 = pars[c++];
      pmns.delta    = pars[c++];
      pmns.alpha_1  = pars[c++];
      pmns.alpha_2  = pars[c++];
      qedqcd.setPMNS(pmns);
   }

   
   

   Physical_input physical_input;
   physical_input.set(Physical_input::alpha_em_0, pars[c++]);
   physical_input.set(Physical_input::mh_pole, pars[c++]);

   lowMSSM_input_parameters input;
   INPUTPARAMETER(TanBeta) = pars[c++];
   INPUTPARAMETER(MuInput) = pars[c++];
   INPUTPARAMETER(TYdInput(0,0)) = pars[c++];
   INPUTPARAMETER(TYdInput(0,1)) = pars[c++];
   INPUTPARAMETER(TYdInput(0,2)) = pars[c++];
   INPUTPARAMETER(TYdInput(1,0)) = pars[c++];
   INPUTPARAMETER(TYdInput(1,1)) = pars[c++];
   INPUTPARAMETER(TYdInput(1,2)) = pars[c++];
   INPUTPARAMETER(TYdInput(2,0)) = pars[c++];
   INPUTPARAMETER(TYdInput(2,1)) = pars[c++];
   INPUTPARAMETER(TYdInput(2,2)) = pars[c++];
   INPUTPARAMETER(TYeInput(0,0)) = pars[c++];
   INPUTPARAMETER(TYeInput(0,1)) = pars[c++];
   INPUTPARAMETER(TYeInput(0,2)) = pars[c++];
   INPUTPARAMETER(TYeInput(1,0)) = pars[c++];
   INPUTPARAMETER(TYeInput(1,1)) = pars[c++];
   INPUTPARAMETER(TYeInput(1,2)) = pars[c++];
   INPUTPARAMETER(TYeInput(2,0)) = pars[c++];
   INPUTPARAMETER(TYeInput(2,1)) = pars[c++];
   INPUTPARAMETER(TYeInput(2,2)) = pars[c++];
   INPUTPARAMETER(TYuInput(0,0)) = pars[c++];
   INPUTPARAMETER(TYuInput(0,1)) = pars[c++];
   INPUTPARAMETER(TYuInput(0,2)) = pars[c++];
   INPUTPARAMETER(TYuInput(1,0)) = pars[c++];
   INPUTPARAMETER(TYuInput(1,1)) = pars[c++];
   INPUTPARAMETER(TYuInput(1,2)) = pars[c++];
   INPUTPARAMETER(TYuInput(2,0)) = pars[c++];
   INPUTPARAMETER(TYuInput(2,1)) = pars[c++];
   INPUTPARAMETER(TYuInput(2,2)) = pars[c++];
   INPUTPARAMETER(BMuInput) = pars[c++];
   INPUTPARAMETER(mq2Input(0,0)) = pars[c++];
   INPUTPARAMETER(mq2Input(0,1)) = pars[c++];
   INPUTPARAMETER(mq2Input(0,2)) = pars[c++];
   INPUTPARAMETER(mq2Input(1,0)) = pars[c++];
   INPUTPARAMETER(mq2Input(1,1)) = pars[c++];
   INPUTPARAMETER(mq2Input(1,2)) = pars[c++];
   INPUTPARAMETER(mq2Input(2,0)) = pars[c++];
   INPUTPARAMETER(mq2Input(2,1)) = pars[c++];
   INPUTPARAMETER(mq2Input(2,2)) = pars[c++];
   INPUTPARAMETER(ml2Input(0,0)) = pars[c++];
   INPUTPARAMETER(ml2Input(0,1)) = pars[c++];
   INPUTPARAMETER(ml2Input(0,2)) = pars[c++];
   INPUTPARAMETER(ml2Input(1,0)) = pars[c++];
   INPUTPARAMETER(ml2Input(1,1)) = pars[c++];
   INPUTPARAMETER(ml2Input(1,2)) = pars[c++];
   INPUTPARAMETER(ml2Input(2,0)) = pars[c++];
   INPUTPARAMETER(ml2Input(2,1)) = pars[c++];
   INPUTPARAMETER(ml2Input(2,2)) = pars[c++];
   INPUTPARAMETER(md2Input(0,0)) = pars[c++];
   INPUTPARAMETER(md2Input(0,1)) = pars[c++];
   INPUTPARAMETER(md2Input(0,2)) = pars[c++];
   INPUTPARAMETER(md2Input(1,0)) = pars[c++];
   INPUTPARAMETER(md2Input(1,1)) = pars[c++];
   INPUTPARAMETER(md2Input(1,2)) = pars[c++];
   INPUTPARAMETER(md2Input(2,0)) = pars[c++];
   INPUTPARAMETER(md2Input(2,1)) = pars[c++];
   INPUTPARAMETER(md2Input(2,2)) = pars[c++];
   INPUTPARAMETER(mu2Input(0,0)) = pars[c++];
   INPUTPARAMETER(mu2Input(0,1)) = pars[c++];
   INPUTPARAMETER(mu2Input(0,2)) = pars[c++];
   INPUTPARAMETER(mu2Input(1,0)) = pars[c++];
   INPUTPARAMETER(mu2Input(1,1)) = pars[c++];
   INPUTPARAMETER(mu2Input(1,2)) = pars[c++];
   INPUTPARAMETER(mu2Input(2,0)) = pars[c++];
   INPUTPARAMETER(mu2Input(2,1)) = pars[c++];
   INPUTPARAMETER(mu2Input(2,2)) = pars[c++];
   INPUTPARAMETER(me2Input(0,0)) = pars[c++];
   INPUTPARAMETER(me2Input(0,1)) = pars[c++];
   INPUTPARAMETER(me2Input(0,2)) = pars[c++];
   INPUTPARAMETER(me2Input(1,0)) = pars[c++];
   INPUTPARAMETER(me2Input(1,1)) = pars[c++];
   INPUTPARAMETER(me2Input(1,2)) = pars[c++];
   INPUTPARAMETER(me2Input(2,0)) = pars[c++];
   INPUTPARAMETER(me2Input(2,1)) = pars[c++];
   INPUTPARAMETER(me2Input(2,2)) = pars[c++];
   INPUTPARAMETER(MassBInput) = pars[c++];
   INPUTPARAMETER(MassWBInput) = pars[c++];
   INPUTPARAMETER(MassGInput) = pars[c++];

   FlexibleDecay_settings flexibledecay_settings;
   flexibledecay_settings.set(FlexibleDecay_settings::min_br_to_print, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::include_higher_order_corrections, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::use_Thomson_alpha_in_Phigamgam_and_PhigamZ, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::offshell_VV_decays, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::print_effc_block, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::calculate_normalized_effc, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::call_higgstools, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::call_lilith, pars[c++]);
   flexibledecay_settings.set(FlexibleDecay_settings::use_pole_higgs_mixings, pars[c++]);

   Model_data data;
   data.set_settings(settings);
   data.set_modsel(modsel);
   data.set_sm_input_parameters(qedqcd);
   data.set_physical_input(physical_input);
   data.set_input_parameters(input);
   
   data.set_fd_settings(flexibledecay_settings);

   return data;
}

} // namespace lowMSSM_librarylink
} // namespace flexiblesusy

extern "C" {

/******************************************************************/

DLLEXPORT mint WolframLibrary_getVersion()
{
   return WolframLibraryVersion;
}

/******************************************************************/

DLLEXPORT int WolframLibrary_initialize(WolframLibraryData /* libData */)
{
   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMGetSettings(WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMGetSettings"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      find_data(hid).put_settings(link);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMGetSMInputParameters(WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMGetSMInputParameters"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      find_data(hid).put_sm_input_parameters(link);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMGetInputParameters(WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMGetInputParameters"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      find_data(hid).put_input_parameters(link);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMOpenHandle(
   WolframLibraryData libData, mint Argc, MArgument* Args, MArgument Res)
{
   using namespace flexiblesusy;
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (Argc != 1)
      return LIBRARY_TYPE_ERROR;

   MTensor pars = MArgument_getMTensor(Args[0]);

   if (libData->MTensor_getType(pars) != MType_Real ||
       libData->MTensor_getRank(pars) != 1)
      return LIBRARY_TYPE_ERROR;

   try {
      auto data = make_data(make_dynamic_array_view(
                          libData->MTensor_getRealData(pars),
                          libData->MTensor_getDimensions(pars)[0]));

      const auto hid = get_new_handle();

      handles.insert(std::make_pair(hid, std::move(data)));

      MArgument_setInteger(Res, hid);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      return LIBRARY_FUNCTION_ERROR;
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMCloseHandle(
   WolframLibraryData /* libData */, mint Argc, MArgument* Args, MArgument /* Res */)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (Argc != 1)
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(Args[0]);
   const auto handle = handles.find(hid);

   if (handle != handles.end())
      handles.erase(handle);

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMSet(
   WolframLibraryData libData, mint Argc, MArgument* Args, MArgument /* Res */)
{
   using namespace flexiblesusy;
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (Argc != 2)
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(Args[0]);
   MTensor pars = MArgument_getMTensor(Args[1]);

   if (libData->MTensor_getType(pars) != MType_Real ||
       libData->MTensor_getRank(pars) != 1)
      return LIBRARY_TYPE_ERROR;

   try {
      find_data(hid) =
         make_data(make_dynamic_array_view(
                      libData->MTensor_getRealData(pars),
                      libData->MTensor_getDimensions(pars)[0]));
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      return LIBRARY_FUNCTION_ERROR;
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMGetProblems(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMGetProblems"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      find_data(hid).put_problems(link);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMToSLHA(WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMToSLHA"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      find_data(hid).put_slha(link);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMGetWarnings(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMGetWarnings"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      find_data(hid).put_warnings(link);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMCalculateSpectrum(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMCalculateSpectrum"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      auto& data = find_data(hid);

      {
         Redirect_output crd(link);
         data.calculate_spectrum();
      }

      data.check_spectrum(link);
      data.put_model_spectra(link);
   } catch (const flexiblesusy::Error&) {
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMCalculateObservables(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMCalculateObservables"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      auto& data = find_data(hid);

      if (data.get_model_scale() == 0.) {
         put_message(link,
            "FSlowMSSMCalculateObservables", "warning",
            "Renormalization scale is 0.  Did you run "
            "FSlowMSSMCalculateSpectrum[]?");
      }

      {
         Redirect_output crd(link);
         data.calculate_model_observables();
         auto setting = data.get_settings();
         setting.set(flexiblesusy::Spectrum_generator_settings::calculate_observables, 1.0);
         data.set_settings(setting);
      }

      data.put_observables(link);
   } catch (const flexiblesusy::Error& e) {
      put_message(link, "FSlowMSSMCalculateObservables", "error", e.what_detailed());
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

/******************************************************************/

DLLEXPORT int FSlowMSSMCalculateDecays(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMCalculateDecays"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      auto& data = find_data(hid);

      if (data.get_model_scale() == 0.) {
         put_message(link,
            "FSlowMSSMCalculateDecays", "warning",
            "Renormalization scale is 0.  Did you run "
            "FSlowMSSMCalculateSpectrum[]?");
      }

      {
         Redirect_output crd(link);
         auto settings = data.get_settings();
         auto fdSettings = data.get_fd_settings();
         if (settings.get(flexiblesusy::Spectrum_generator_settings::calculate_sm_masses) == 0 ||
            settings.get(flexiblesusy::Spectrum_generator_settings::calculate_bsm_masses) == 0) {
            put_message(link,
               "FSSMCalculateDecays", "warning", "Need SM and BSM masses. Setting flags FlexlibleSUSY[3] = FlexlibleSUSY[23] = 1.");
            settings.set(flexiblesusy::Spectrum_generator_settings::calculate_sm_masses, 1.0);
            settings.set(flexiblesusy::Spectrum_generator_settings::calculate_bsm_masses, 1.0);
            data.set_settings(settings);
            fdSettings.set(flexiblesusy::FlexibleDecay_settings::calculate_normalized_effc, 1.0);
            data.set_fd_settings(fdSettings);
            data.calculate_spectrum();
         }
         data.calculate_model_decays();
      }

      data.put_decays(link);
   } catch (const flexiblesusy::Error& e) {
      put_message(link, "FSlowMSSMCalculateDecays", "error", e.what());
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}


/******************************************************************/

DLLEXPORT int FSlowMSSMCalculateNormalizedEffectiveCouplings(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMCalculateNormalizedEffectiveCouplings"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      auto& data = find_data(hid);
      data.calculate_normalized_effc();
      data.put_eff_couplings(link);
   } catch (const flexiblesusy::Error& e) {
      put_message(link, "FSlowMSSMCalculateNormalizedEffectiveCouplings", "error", e.what());
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}


#ifdef ENABLE_LILITH
DLLEXPORT int FSlowMSSMCallLilith(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 2, "FSlowMSSMCallLilith"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   const char* llDbFile = "";
   MLGetString(link, &llDbFile);
   if (!std::filesystem::exists(llDbFile)) {
      put_message(link, "FSlowMSSMCallLilith", "error", std::string(llDbFile) + " is not a valid path");
      put_error_output(link);
      return LIBRARY_NO_ERROR;
   }

   try {
      auto& data = find_data(hid);
      std::optional<flexiblesusy::SignalResult> ll =
         call_lilith(data.get_normalized_higgs_effc(), data.get_physical_input(), llDbFile);
   } catch (const flexiblesusy::Error& e) {
      put_message(link, "FSlowMSSMCallLilith", "error", e.what());
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}
#endif

#ifdef ENABLE_HIGGSTOOLS
DLLEXPORT int FSlowMSSMCallHiggsTools(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 3, "FSlowMSSMCallHiggsTools"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   const char* hbDatabasePath = "";
   MLGetString(link, &hbDatabasePath);
   const char* hsDatabasePath = "";
   MLGetString(link, &hsDatabasePath);

   if (!std::filesystem::exists(hsDatabasePath) && !std::filesystem::exists(hbDatabasePath)) {
      put_message(link, "FSlowMSSMCallHiggsTools", "error", std::string(hsDatabasePath) + " and " + std::string(hbDatabasePath) + " are not valid paths");
      put_error_output(link);
      return LIBRARY_NO_ERROR;
   }

   try {
      auto& data = find_data(hid);
      auto [hs, higgsbounds_v] =
         call_higgstools(data.get_normalized_higgs_effc(), data.get_physical_input(), hsDatabasePath, hbDatabasePath);
      data.put_higgstools_results(link, hs, higgsbounds_v);
   } catch (const flexiblesusy::Error& e) {
      std::cerr << e.what_detailed() << std::endl;
      return LIBRARY_FUNCTION_ERROR;
   }

   return LIBRARY_NO_ERROR;
}
#endif

DLLEXPORT int FSlowMSSMCalculateUnitarity(
   WolframLibraryData /* libData */, MLINK link)
{
   using namespace flexiblesusy::lowMSSM_librarylink;

   if (!check_number_of_args(link, 1, "FSlowMSSMCalculateUnitarity"))
      return LIBRARY_TYPE_ERROR;

   const auto hid = get_handle_from(link);

   try {
      auto& data = find_data(hid);
      data.calculate_unitarity();
      data.put_unitarity(link);
   } catch (const flexiblesusy::Error& e) {
      put_message(link, "FSlowMSSMCalculateUnitarity", "error", e.what());
      put_error_output(link);
   }

   return LIBRARY_NO_ERROR;
}

} // extern "C"
