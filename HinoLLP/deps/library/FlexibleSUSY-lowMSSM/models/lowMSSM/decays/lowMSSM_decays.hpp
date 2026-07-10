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


/**
 * @file lowMSSM_decays.hpp
 *
 * @brief contains class for calculating particle decays
 *
 * This file was generated with FlexibleSUSY 2.9.0 and SARAH 4.15.4 .
 */

#ifndef lowMSSM_DECAYS_H
#define lowMSSM_DECAYS_H

#include "config.h"

#include "lowMSSM_decay_table.hpp"
#include "lowMSSM_mass_eigenstates.hpp"
#include "cxx_qft/lowMSSM_qft.hpp"
#include "cxx_qft/lowMSSM_particle_aliases.hpp"

#include "decays/flexibledecay_problems.hpp"
#include "decays/flexibledecay_settings.hpp"
#include "decays/decay_amplitudes.hpp"
#include "decays/decay.hpp"
#include "logger.hpp"
#include "lowe.h"
#include "physical_input.hpp"
#include "wrappers.hpp"

#include <cmath>
#include <vector>

#include "boost/mpl/contains.hpp"
#include <boost/mpl/for_each.hpp>

namespace flexiblesusy {

class lowMSSM_decays {
public:
   lowMSSM_decays() = default;
   lowMSSM_decays(lowMSSM_mass_eigenstates model_, softsusy::QedQcd const& qedqcd_,
         Physical_input const& physical_input_,
         FlexibleDecay_settings const& flexibledecay_settings_)
      : model(model_)
      , qedqcd(qedqcd_)
      , physical_input(physical_input_)
      , flexibledecay_settings(flexibledecay_settings_)
      {}
   lowMSSM_decays(const lowMSSM_decays&) = default;
   lowMSSM_decays(lowMSSM_decays&&) = default;
   ~lowMSSM_decays() = default;
   lowMSSM_decays& operator=(const lowMSSM_decays&) = default;
   lowMSSM_decays& operator=(lowMSSM_decays&&) = default;

   const lowMSSM_decay_table& get_decay_table() const;
   const FlexibleDecay_problems& get_problems() const;

   void clear();
   void clear_problems();
   void calculate_decays();
   EffectiveCoupling_list get_neutral_higgs_effc() const {return neutral_higgs_effc;};
   std::vector<std::tuple<int, int, int, double, std::string>> get_effhiggscouplings_block_input() const {
      return effhiggscouplings_block_input;
   }

   const Decays_list& get_hh_decays(int i) const { return decay_table.
      get_hh_decays(i); }
   const Decays_list& get_Ah_decays(int i) const { return decay_table.
      get_Ah_decays(i); }
   const Decays_list& get_Hpm_decays(int i) const { return decay_table.
      get_Hpm_decays(i); }
   const Decays_list& get_Su_decays(int i) const { return decay_table.
      get_Su_decays(i); }
   const Decays_list& get_Sd_decays(int i) const { return decay_table.
      get_Sd_decays(i); }
   const Decays_list& get_Se_decays(int i) const { return decay_table.
      get_Se_decays(i); }
   const Decays_list& get_Sv_decays(int i) const { return decay_table.
      get_Sv_decays(i); }
   void calculate_hh_decays();
   void calculate_Ah_decays();
   void calculate_Hpm_decays();
   void calculate_Su_decays();
   void calculate_Sd_decays();
   void calculate_Se_decays();
   void calculate_Sv_decays();

   template<typename FieldIn, typename FieldOut1, typename FieldOut2>
   double get_partial_width(
      const lowMSSM_cxx_diagrams::context_base&,
      typename cxx_diagrams::field_indices<FieldIn>::type const&,
      typename cxx_diagrams::field_indices<FieldOut1>::type const&,
      typename cxx_diagrams::field_indices<FieldOut2>::type const&);

   double partial_width_hh_to_SdconjSd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_SvconjSv(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_SuconjSu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_SeconjSe(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_hhhh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_hhAh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_AhAh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_HpmconjHpm(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_hhVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_hh_to_AhVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_hh_to_hhVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_hh_to_AhVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_hh_to_conjHpmVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_hh_to_HpmconjVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_hh_to_VGVG(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_hh_to_VPVP(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_hh_to_VPVZ(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_hh_to_VZVZ(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_hh_to_conjVWmVWm(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_hh_to_GluGlu(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_hh_to_barFvFv(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_ChiChi(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_barChaCha(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_barFeFe(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_barFdFd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_hh_to_barFuFu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_SdconjSd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_SvconjSv(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_SuconjSu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_SeconjSe(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_hhhh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_HpmconjHpm(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_hhVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Ah_to_hhVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Ah_to_conjHpmVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Ah_to_HpmconjVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Ah_to_VGVG(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Ah_to_VPVP(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Ah_to_VPVZ(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Ah_to_VZVZ(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Ah_to_conjVWmVWm(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Ah_to_GluGlu(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Ah_to_barFvFv(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_ChiChi(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_barChaCha(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_barFeFe(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_barFdFd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Ah_to_barFuFu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Hpm_to_SdconjSu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Hpm_to_SeconjSv(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Hpm_to_hhVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Hpm_to_AhVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Hpm_to_VPVWm(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Hpm_to_VZVWm(lowMSSM_mass_eigenstates_interface*, int);
   double partial_width_Hpm_to_ChiCha(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Hpm_to_barFvFe(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Hpm_to_barFuFd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Su_to_SdconjHpm(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Su_to_Suhh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Su_to_SuAh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Su_to_SuVG(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Su_to_SuVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Su_to_SuVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Su_to_SdconjVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Su_to_GluFu(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Su_to_ChiFu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Su_to_barChaFd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sd_to_Sdhh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sd_to_SdAh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sd_to_SuHpm(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sd_to_SdVG(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sd_to_SdVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sd_to_SdVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sd_to_SuVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sd_to_GluFd(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sd_to_ChiFd(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sd_to_ChaFu(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Se_to_SvHpm(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Se_to_Sehh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Se_to_SeAh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Se_to_SeVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Se_to_SeVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Se_to_SvVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Se_to_FvCha(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Se_to_ChiFe(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sv_to_Svhh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sv_to_SvAh(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sv_to_SeconjHpm(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sv_to_SvVP(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sv_to_SvVZ(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sv_to_SeconjVWm(lowMSSM_mass_eigenstates_interface*, int, int);
   double partial_width_Sv_to_FvChi(lowMSSM_mass_eigenstates_interface*, int, int, int);
   double partial_width_Sv_to_barChaFe(lowMSSM_mass_eigenstates_interface*, int, int, int);

private:
   lowMSSM_mass_eigenstates model{};
   softsusy::QedQcd qedqcd{};
   Physical_input physical_input;
   FlexibleDecay_settings flexibledecay_settings {};
   static constexpr bool run_to_decay_particle_scale {true};
   lowMSSM_decay_table decay_table{};
   FlexibleDecay_problems problems{};
   EffectiveCoupling_list neutral_higgs_effc {};

   template<typename FieldIn, typename FieldOut1, typename FieldOut2>
   typename Decay_amplitude_type<FieldIn, FieldOut1, FieldOut2>::type
   calculate_amplitude(
      const lowMSSM_cxx_diagrams::context_base&,
      const typename cxx_diagrams::field_indices<FieldIn>::type&,
      const typename cxx_diagrams::field_indices<FieldOut1>::type&,
      const typename cxx_diagrams::field_indices<FieldOut2>::type&) const;

   template<typename FieldIn, typename FieldOut1, typename FieldOut2>
   double amplitude_squared(lowMSSM_cxx_diagrams::context_base const& context,
                  typename cxx_diagrams::field_indices<FieldIn>::type const& indexIn,
                  typename cxx_diagrams::field_indices<FieldOut1>::type const& indexOut1,
                  typename cxx_diagrams::field_indices<FieldOut2>::type const& indexOut2) const;

   double get_alphas(lowMSSM_cxx_diagrams::context_base const&) const;
   double get_alpha(lowMSSM_cxx_diagrams::context_base const&) const;
   std::vector<std::tuple<int, int, int, double, std::string>> effhiggscouplings_block_input {};
};

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Ah>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VG>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Glu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Glu>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Glu>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Fv>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fv>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Chi>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Cha>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VG>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Glu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Glu>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Glu>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Fv>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fv>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Chi>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Cha>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SVV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Cha>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Cha>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Fe>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fd>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::hh>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Ah>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::VG>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Fu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Glu>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Fd>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::hh>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Ah>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Hpm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::VG>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Su>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Fd>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Glu>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fd>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Fu>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sd>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Cha>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Hpm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Hpm>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::hh>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Ah>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::VWm>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Fv, lowMSSM_cxx_diagrams::fields::Cha>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Cha>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fe>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::hh>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Ah>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&) const;

template<>
Decay_amplitude_SSS lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::VP>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::VZ>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&) const;

template<>
Decay_amplitude_SSV lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Se>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Fv, lowMSSM_cxx_diagrams::fields::Chi>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fv>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Chi>::type&) const;

template<>
Decay_amplitude_SFF lowMSSM_decays::calculate_amplitude<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Fe>(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Sv>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&) const;


template<typename FieldIn, typename FieldOut1, typename FieldOut2>
double
lowMSSM_decays::amplitude_squared(lowMSSM_cxx_diagrams::context_base const& context,
                  typename cxx_diagrams::field_indices<FieldIn>::type const& indexIn,
                  typename cxx_diagrams::field_indices<FieldOut1>::type const& indexOut1,
                  typename cxx_diagrams::field_indices<FieldOut2>::type const& indexOut2) const
{

   const auto mat_elem = calculate_amplitude<FieldIn, FieldOut1, FieldOut2>(
      context, indexIn, indexOut1, indexOut2);
   return mat_elem.square();
}

// generic decay of FieldIn -> FieldOut1 FieldOut2
template<typename FieldIn, typename FieldOut1, typename FieldOut2>
double lowMSSM_decays::get_partial_width(
   const lowMSSM_cxx_diagrams::context_base& context,
   typename cxx_diagrams::field_indices<FieldIn>::type const& indexIn,
   typename cxx_diagrams::field_indices<FieldOut1>::type const& indexOut1,
   typename cxx_diagrams::field_indices<FieldOut2>::type const& indexOut2)
{

   // on-shell masses
   const double mIn = context.physical_mass<FieldIn>(indexIn);
   const double mOut1 = context.physical_mass<FieldOut1>(indexOut1);
   const double mOut2 = context.physical_mass<FieldOut2>(indexOut2);

   // is decay kinematically allowed?
   if(mIn < mOut1 + mOut2) {
      problems.add_warning(
         create_process_string<FieldIn,FieldOut1,FieldOut2>(indexIn, indexOut1, indexOut2)
            + ": Called kinematically forbidden decay."
      );
      return 0.;
   }

   // phase space without symmetry factor
   const double ps = 1./(8.*Pi) * std::sqrt(KallenLambda(1., Sqr(mOut1/mIn), Sqr(mOut2/mIn)));

   // phase space symmetry factor
   const double ps_symmetry =
      final_state_symmetry_factor<FieldOut1, FieldOut2>(indexOut1, indexOut2);

   // color factor
   constexpr double color_factor = squared_color_generator<FieldIn, FieldOut1, FieldOut2>();

   // matrix element squared
   const auto mat_elem_sq = amplitude_squared<FieldIn, FieldOut1, FieldOut2>(
      context, indexIn, indexOut1, indexOut2);

   // flux * phase space factor * symmetry factor * color factor * |matrix element|^2
   const auto partialWidth = 0.5/mIn * ps * ps_symmetry * color_factor * mat_elem_sq;

   // if there are any potential LSPs
   if constexpr (boost::mpl::size<lowMSSM_cxx_diagrams::fields::potentialLSPparticles>::value > 0) {
      // if this is a decay of a CP-even or -odd Higgs to a pair of identical particles (or a particle and its antiparticle)
      if constexpr (
         (std::is_same_v<FieldIn, lowMSSM_cxx_diagrams::fields::Higgs> || std::is_same_v<FieldIn, lowMSSM_cxx_diagrams::fields::PseudoscalarHiggs>) &&
         std::is_same_v<typename FieldOut1::lorentz_conjugate, FieldOut2>
      ) {
         // at this point we know that FieldOut1 == FieldOut2 (if they are real) or FieldOut1 == bar|conj[FieldOut2]
         // and are those particles potential LSPs
         if constexpr (boost::mpl::contains<lowMSSM_cxx_diagrams::fields::potentialLSPparticles, typename cxx_diagrams::remove_lorentz_conjugation<FieldOut1>::type>::type::value) {
            // are final states charge and color neutral
            if constexpr (FieldOut1::electricCharge == 0 && FieldOut1::colorRep == lowMSSM_cxx_diagrams::fields::ParticleColorRep::singlet) {
               const double needInvWidth =
                  static_cast<bool>(flexibledecay_settings.get(FlexibleDecay_settings::call_higgstools)) ||
                  static_cast<bool>(flexibledecay_settings.get(FlexibleDecay_settings::call_lilith));
               if (needInvWidth) {
                  double mLSP = std::numeric_limits<double>::infinity();
                  boost::mpl::for_each<lowMSSM_cxx_diagrams::fields::potentialLSPparticles>(
                     [context,&mLSP](auto arg) {
                        using T = decltype(arg);
                        double current_mass;
                        if constexpr (T::numberOfGenerations == 1) {
                           current_mass = context.physical_mass<T>({});
                        }
                        else {
                           current_mass = context.physical_mass<T>({0});
                        }
                        if (current_mass < mLSP) { mLSP = current_mass; };
                     }
                  );
                  if (mLSP == context.physical_mass<FieldOut1>(indexOut1)) {
                     if constexpr (FieldOut1::numberOfGenerations == 0) {
                        neutral_higgs_effc.set_invisible_width(field_as_string<FieldIn>(indexIn), partialWidth);
                     }
                     else {
                        if (indexOut1.at(0) == 0 && indexOut2.at(0) == 0) {
                           neutral_higgs_effc.set_invisible_width(field_as_string<FieldIn>(indexIn), partialWidth);
                        }
                     }
                  }
               }
            }
         }
      }
   }

   return partialWidth;
}

template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,lowMSSM_cxx_diagrams::fields::VZ,lowMSSM_cxx_diagrams::fields::VZ >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type,lowMSSM_cxx_diagrams::fields::VWm >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VWm>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,lowMSSM_cxx_diagrams::fields::VG,lowMSSM_cxx_diagrams::fields::VG >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,lowMSSM_cxx_diagrams::fields::VP,lowMSSM_cxx_diagrams::fields::VP >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,lowMSSM_cxx_diagrams::fields::VP,lowMSSM_cxx_diagrams::fields::VZ >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type,lowMSSM_cxx_diagrams::fields::Fu >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type,lowMSSM_cxx_diagrams::fields::Fd >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::hh,typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type,lowMSSM_cxx_diagrams::fields::Fe >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::hh>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::Ah,typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type,lowMSSM_cxx_diagrams::fields::Fd >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fd>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::Ah,typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type,lowMSSM_cxx_diagrams::fields::Fu >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fu>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::Ah,lowMSSM_cxx_diagrams::fields::VG,lowMSSM_cxx_diagrams::fields::VG >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VG>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::Ah,lowMSSM_cxx_diagrams::fields::VP,lowMSSM_cxx_diagrams::fields::VP >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::Ah,lowMSSM_cxx_diagrams::fields::VP,lowMSSM_cxx_diagrams::fields::VZ >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VP>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::VZ>::type&);
template <>
double lowMSSM_decays::get_partial_width<lowMSSM_cxx_diagrams::fields::Ah,typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type,lowMSSM_cxx_diagrams::fields::Fe >(const lowMSSM_cxx_diagrams::context_base&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Ah>::type&, const typename cxx_diagrams::field_indices<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type>::type&, const typename cxx_diagrams::field_indices<lowMSSM_cxx_diagrams::fields::Fe>::type&);

} // namespace flexiblesusy

#endif
