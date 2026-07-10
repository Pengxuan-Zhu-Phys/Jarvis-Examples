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

#include "lowMSSM_input_parameters.hpp"
#include "lowMSSM_observables.hpp"
#include "lowMSSM_slha_io.hpp"
#include "lowMSSM_spectrum_generator.hpp"
#include "lowMSSM_utilities.hpp"
#include "decays/experimental_constraints.hpp"
#include "decays/lowMSSM_decays.hpp"
#include "decays/flexibledecay_problems.hpp"
#include "lowMSSM_mass_eigenstates_decoupling_scheme.hpp"
#include "loop_libraries/loop_library.hpp"
#include "lowMSSM_unitarity.hpp"

#ifdef ENABLE_TWO_SCALE_SOLVER
#include "lowMSSM_two_scale_spectrum_generator.hpp"
#endif

#include "physical_input.hpp"
#include "spectrum_generator_settings.hpp"
#include "lowe.h"
#include "command_line_options.hpp"

#include <iostream>
#include <cstdlib>

/**
 * @brief Runs the spectrum generator of type \a solver_type
 * @tparam solver_type solver type
 * @param slha_io SLHA input
 * @param spectrum_generator_settings
 * @param slha_output_file output file for SLHA output
 * @param database_output_file output file for SQLite database
 * @param spectrum_file output file for the mass spectrum
 * @param rgflow_file output file for the RG flow
 * @return value of spectrum_generator::get_exit_code()
 */
template <class solver_type>
int run_solver(flexiblesusy::lowMSSM_slha_io& slha_io,
               const flexiblesusy::Spectrum_generator_settings& spectrum_generator_settings,
               const flexiblesusy::FlexibleDecay_settings& flexibledecay_settings,
               const std::string& slha_output_file,
               const std::string& database_output_file,
               const std::string& spectrum_file,
               const std::string& rgflow_file,
               std::string const& higgsbounds_dataset, std::string const& higgssignals_dataset, std::string const& lilith_db)
{
   using namespace flexiblesusy;

   Physical_input physical_input; // extra non-SLHA physical input
   softsusy::QedQcd qedqcd;
   lowMSSM_input_parameters input;
   

   try {
      slha_io.fill(qedqcd);
      slha_io.fill(input);
      slha_io.fill(physical_input);
      
   } catch (const Error& error) {
      ERROR(error.what_detailed());
      return EXIT_FAILURE;
   }

   lowMSSM_spectrum_generator<solver_type> spectrum_generator;
   spectrum_generator.set_settings(spectrum_generator_settings);
   spectrum_generator.set_parameter_output_scale(
      slha_io.get_parameter_output_scale());

   spectrum_generator.run(qedqcd, input);

   auto models = spectrum_generator.get_models_slha();
   const auto& problems = spectrum_generator.get_problems();

   lowMSSM_scales scales;
   scales.HighScale = spectrum_generator.get_high_scale();
   scales.SUSYScale = spectrum_generator.get_susy_scale();
   scales.LowScale  = spectrum_generator.get_low_scale();
   scales.pole_mass_scale = spectrum_generator.get_pole_mass_scale();

   lowMSSM_observables observables;
   lowMSSM_decays decays(std::get<0>(models), qedqcd, physical_input, flexibledecay_settings);
   const bool loop_library_for_decays =
      (Loop_library::get_type() == Loop_library::Library::Collier) ||
      (Loop_library::get_type() == Loop_library::Library::Looptools);

   if (spectrum_generator_settings.get(Spectrum_generator_settings::calculate_observables)) {
      if (spectrum_generator_settings.get(Spectrum_generator_settings::force_output) ||
         !problems.have_problem()) {
         observables = calculate_observables(
            std::get<0>(models),
            qedqcd,
            
            physical_input,
            spectrum_generator_settings,
            scales.pole_mass_scale);
      }
   }

   EffectiveCoupling_list effc {};
   std::optional<SignalResult> hs;
   std::vector<std::tuple<int, double, double, std::string>> higgsbounds_v = {};
   std::optional<SignalResult> lilith;
   if (flexibledecay_settings.get(FlexibleDecay_settings::calculate_decays) &&
        (spectrum_generator_settings.get(Spectrum_generator_settings::force_output) ||
         !problems.have_problem())) {
      if (loop_library_for_decays) {
         decays.calculate_decays();
         effc =
            get_normalized_effective_couplings(decays.get_neutral_higgs_effc(), physical_input, qedqcd, spectrum_generator_settings, flexibledecay_settings);
            try {
               // structured bindings creates new variables - need to use std::tie
               #ifdef ENABLE_HIGGSTOOLS
               if (flexibledecay_settings.get(FlexibleDecay_settings::call_higgstools)) {
                        std::tie(hs, higgsbounds_v) =
                           call_higgstools(effc, physical_input, higgsbounds_dataset, higgssignals_dataset);
               }
               #endif
               #ifdef ENABLE_LILITH
               if (flexibledecay_settings.get(FlexibleDecay_settings::call_lilith)) {
                  lilith = call_lilith(effc, physical_input, lilith_db);
               }
               #endif
            }
            catch (const std::exception& error) {
               ERROR(error.what());
            }
      }
      else if (!loop_library_for_decays) {
         WARNING("Decay module requires a dedicated loop library. Configure FlexibleSUSY with Collier or LoopTools and set appropriately flag 31 in Block FlexibleSUSY of the LesHouches input.");
      }
   }

   const bool show_result = !problems.have_problem() ||
      spectrum_generator_settings.get(Spectrum_generator_settings::force_output);
   // SLHA output
   if (!slha_output_file.empty()) {
      slha_io.set_spinfo(problems);
      slha_io.set_input(input);
      if (show_result) {
         slha_io.set_print_imaginary_parts_of_majorana_mixings(
            spectrum_generator_settings.get(
               Spectrum_generator_settings::force_positive_masses));
         slha_io.set_spectrum(models);
         slha_io.set_extra(std::get<0>(models), scales, observables, spectrum_generator_settings);
         const auto unitarityStruct = lowMSSM_unitarity::max_scattering_eigenvalue_infinite_s(std::get<0>(models));
slha_io.set_unitarity_infinite_s(spectrum_generator_settings, unitarityStruct);
      }

      const bool show_decays = !decays.get_problems().have_problem() ||
         spectrum_generator_settings.get(Spectrum_generator_settings::force_output);

      if (show_decays && flexibledecay_settings.get(FlexibleDecay_settings::calculate_decays) && loop_library_for_decays) {
         slha_io.set_dcinfo(decays.get_problems());
         slha_io.set_decays(decays.get_decay_table(), flexibledecay_settings);
         if (flexibledecay_settings.get(FlexibleDecay_settings::print_effc_block)) {
            slha_io.set_effectivecouplings_block(decays.get_effhiggscouplings_block_input());
         }
         if (flexibledecay_settings.get(FlexibleDecay_settings::calculate_normalized_effc)) {
            slha_io.set_normalized_effectivecouplings_block(effc);
            slha_io.set_imnormalized_effectivecouplings_block(effc);
         }
      #ifdef ENABLE_HIGGSTOOLS
         if (flexibledecay_settings.get(FlexibleDecay_settings::call_higgstools)) {
            if (hs.has_value()) {
               SignalResult hs_ = hs.value();
               slha_io.set_hs_or_lilith("HIGGSSIGNALS", hs_.ndof, hs_.chi2BSM, hs_.chi2SM, hs_.mhRef, hs_.pval);
            }
            if (higgsbounds_v.size() > 0) {
               slha_io.set_higgsbounds(higgsbounds_v);
            }
         }
      #endif
      #ifdef ENABLE_LILITH
         if (flexibledecay_settings.get(FlexibleDecay_settings::call_lilith) && lilith.has_value()) {
            slha_io.set_hs_or_lilith("LILITH", lilith.value().ndof, lilith.value().chi2BSM, lilith.value().chi2SM, lilith.value().mhRef, lilith.value().pval);
         }
      #endif
      }

      slha_io.write_to(slha_output_file);
   }

   if (!database_output_file.empty() && show_result) {
      lowMSSM_database::to_database(
         database_output_file, std::get<0>(models), &qedqcd,
         &physical_input, &observables);
   }

   if (!spectrum_file.empty())
      spectrum_generator.write_spectrum(spectrum_file);

   if (!rgflow_file.empty())
      spectrum_generator.write_running_couplings(rgflow_file);

   return spectrum_generator.get_exit_code();
}

/**
 * @brief Runs the spectrum generator
 *
 * Reads the solver type from \a spectrum_generator_settings and calls
 * run_solver() with the corresponding solver type.
 *
 * @param slha_io SLHA input
 * @param spectrum_generator_settings
 * @param slha_output_file output file for SLHA output
 * @param database_output_file output file for SQLite database
 * @param spectrum_file output file for the mass spectrum
 * @param rgflow_file output file for the RG flow
 * @return return value of run_solver<>()
 */
int run(
   flexiblesusy::lowMSSM_slha_io& slha_io,
   const flexiblesusy::Spectrum_generator_settings& spectrum_generator_settings,
   const flexiblesusy::FlexibleDecay_settings& flexibledecay_settings,
   const std::string& slha_output_file,
   const std::string& database_output_file,
   const std::string& spectrum_file,
   const std::string& rgflow_file,
   std::string const& higgsbounds_dataset, std::string const& higgssignals_dataset, std::string const& lilith_db)
{
   using namespace flexiblesusy;

   int exit_code = 0;
   const int solver_type
      = static_cast<int>(spectrum_generator_settings.get(
                            Spectrum_generator_settings::solver));

   switch (solver_type) {
   case 0:
#ifdef ENABLE_TWO_SCALE_SOLVER
   case 1:
      exit_code = run_solver<Two_scale>(
         slha_io, spectrum_generator_settings, flexibledecay_settings, slha_output_file,
         database_output_file, spectrum_file, rgflow_file, higgsbounds_dataset, higgssignals_dataset, lilith_db);
      if (!exit_code || solver_type != 0) break;
      [[fallthrough]];
#endif

   default:
      if (solver_type != 0) {
         ERROR("unknown solver type: " << solver_type);
         exit_code = -1;
      }
      break;
   }

   return exit_code;
}

int main(int argc, char* argv[])
{
   using namespace flexiblesusy;

   Command_line_options options(argc, argv);
   if (options.must_print_model_info())
      lowMSSM_info::print(std::cout);
   if (options.must_exit())
      return options.status();

   const std::string database_output_file(options.get_database_output_file());
   const std::string rgflow_file(options.get_rgflow_file());
   const std::string slha_input_source(options.get_slha_input_file());
   const std::string slha_output_file(options.get_slha_output_file());
   const std::string spectrum_file(options.get_spectrum_file());
   const std::string higgsbounds_dataset(options.get_higgsbounds_dataset());
   const std::string higgssignals_dataset(options.get_higgssignals_dataset());
   const std::string lilith_db(options.get_lilith_db());
   lowMSSM_slha_io slha_io;
   Spectrum_generator_settings spectrum_generator_settings;
   FlexibleDecay_settings flexibledecay_settings;


   if (slha_input_source.empty()) {
      ERROR("No SLHA input source given!\n"
            "   Please provide one via the option --slha-input-file=");
      return EXIT_FAILURE;
   }

   try {
      slha_io.read_from_source(slha_input_source);
      slha_io.fill(spectrum_generator_settings);
      slha_io.fill(flexibledecay_settings);

   } catch (const Error& error) {
      ERROR(error.what_detailed());
      return EXIT_FAILURE;
   }

   if (spectrum_generator_settings.get(Spectrum_generator_settings::calculate_observables) &&
       !spectrum_generator_settings.get(Spectrum_generator_settings::calculate_bsm_masses)) {
         WARNING("Calculate observables (flag FlexibleSUSY[15] = 1) requires BSM pole masses. Setting FlexibleSUSY[23] = 1.");
         spectrum_generator_settings.set(
            Spectrum_generator_settings::calculate_bsm_masses, 1.0);
   }

   if (flexibledecay_settings.get(FlexibleDecay_settings::calculate_decays)) {
      if (!spectrum_generator_settings.get(Spectrum_generator_settings::calculate_sm_masses)) {
         WARNING("Decay module requires SM pole masses. Setting FlexibleSUSY[3] = 1.");
         spectrum_generator_settings.set(
            Spectrum_generator_settings::calculate_sm_masses, 1.0);
      }
      if (!spectrum_generator_settings.get(Spectrum_generator_settings::calculate_bsm_masses)) {
         WARNING("Decay module requires BSM pole masses. Setting FlexibleSUSY[23] = 1.");
         spectrum_generator_settings.set(
            Spectrum_generator_settings::calculate_bsm_masses, 1.0);
      }
      if (flexibledecay_settings.get(FlexibleDecay_settings::print_effc_block) && lowMSSM_info::is_CP_violating_Higgs_sector) {
         WARNING("Printing of EFFHIGGSCOUPLINGS block is disabled in models with CP-violating Higgs sector");
         flexibledecay_settings.set(FlexibleDecay_settings::print_effc_block, 0.);
      }
   }

   const int exit_code
      = run(slha_io, spectrum_generator_settings, flexibledecay_settings, slha_output_file,
            database_output_file, spectrum_file, rgflow_file, higgsbounds_dataset, higgssignals_dataset, lilith_db);

   return exit_code;
}
