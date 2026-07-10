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
 * @file cxx_qft/lowMSSM_vertices.cpp
 *
 * This file was generated with FlexibleSUSY 2.9.0 and SARAH 4.15.4 .
 */

#include "lowMSSM_context_base.hpp"
#include "lowMSSM_input_parameters.hpp"
#include "lowMSSM_vertices.hpp"

#include "concatenate.hpp"
#include "wrappers.hpp"

#define INPUTPARAMETER(p) context.model.get_input_parameters().p
#define MODELPARAMETER(p) context.model.get_##p()
#define DERIVEDPARAMETER(p) context.model.p()
#define PHASE(p) context.model.get_##p()

namespace flexiblesusy::lowMSSM_cxx_diagrams::detail {

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = 0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gt1,1)*(ZA(gt2,0)*(ZA(gt3,1)*ZA(gt4,0) + ZA(gt3,0)*ZA(gt4,1)) + ZA(gt2,1)*(ZA(gt3,0)*ZA(gt4,0) - 3*ZA(gt3,1)*ZA(gt4,1))) + ZA(gt1,0)*(ZA(gt2,1)*(ZA(gt3,1)*ZA(gt4,0) + ZA(gt3,0)*ZA(gt4,1)) + ZA(gt2,0)*(-3*ZA(gt3,0)*ZA(gt4,0) + ZA(gt3,1)*ZA(gt4,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1))*(ZH(gt3,0)*ZH(gt4,0) - ZH(gt3,1)*ZH(gt4,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1))*(vd*ZH(gt3,0) - vu*ZH(gt3,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.25*(ZA(gt1,0)*(Sqr(g2)*ZA(gt2,1)*(ZP(gt3,1)*ZP(gt4,0) + ZP(gt3,0)*ZP(gt4,1)) - ZA(gt2,0)*((0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0)*ZP(gt4,0) + (-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1)*ZP(gt4,1))) + ZA(gt1,1)*(Sqr(g2)*ZA(gt2,0)*(ZP(gt3,1)*ZP(gt4,0) + ZP(gt3,0)*ZP(gt4,1)) + ZA(gt2,1)*((0.6*Sqr(g1) - Sqr(g2))*ZP(gt3,0)*ZP(gt4,0) - (0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1)*ZP(gt4,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = 0.05*(-20*(SUM(j3,0,2,Conj(ZD(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yd(j2,j1))*ZD(gt4,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt3,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt4,j3)))*ZA(gt1,0)*ZA(gt2,0) + (Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZD(gt3,j1))*ZD(gt4,j1))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt3,3 + j1))*ZD(gt4,3 + j1))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = 0.05*(-20*(SUM(j3,0,2,Conj(ZE(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(gt4,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt3,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt4,j3)))*ZA(gt1,0)*ZA(gt2,0) - (3*Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZE(gt3,j1))*ZE(gt4,j1))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt3,3 + j1))*ZE(gt4,3 + j1))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = 0.05*((Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZU(gt3,j1))*ZU(gt4,j1))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1)) - 4*(5*(SUM(j3,0,2,Conj(ZU(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yu(j2,j1))*ZU(gt4,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt4,j3)))*ZA(gt1,1)*ZA(gt2,1) + Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt3,3 + j1))*ZU(gt4,3 + j1))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = -0.25*KroneckerDelta(gt3,gt4)*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gt1,0)*ZA(gt2,0) - ZA(gt1,1)*ZA(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*Sqr(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(ZA(gt1,0)*ZA(gt2,0) + ZA(gt1,1)*ZA(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = 0.5*Sqr(g2)*(ZA(gt1,0)*ZA(gt2,0) + ZA(gt1,1)*ZA(gt2,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.25)*Sqr(g2)*(ZA(gt1,1)*ZH(gt2,0) + ZA(gt1,0)*ZH(gt2,1))*(ZP(gt3,1)*ZP(gt4,0) - ZP(gt3,0)*ZP(gt4,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0,-0.5)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(ZA(gt1,0)*ZH(gt2,0) - ZA(gt1,1)*ZH(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0.,-0.35355339059327373)*(2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt4,j3))*ZA(gt1,0)*ZP(gt2,0) - 2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZD(gt4,j3))*ZA(gt1,1)*ZP(gt2,1) + 2*SUM(j3,0,2,Conj(ZU(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yd(j2,j1))*ZD(gt4,3 + j2)))*(ZA(gt1,1)*ZP(gt2,0) - ZA(gt1,0)*ZP(gt2,1)) + Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt3,j1))*ZD(gt4,j1))*(-(ZA(gt1,0)*ZP(gt2,0)) + ZA(gt1,1)*ZP(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0.,-0.35355339059327373)*(2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(gt3,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt4,j3))*ZA(gt1,0)*ZP(gt2,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZV(gt3,j1))*ZE(gt4,j1))*(-(ZA(gt1,0)*ZP(gt2,0)) + ZA(gt1,1)*ZP(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto vu = MODELPARAMETER(vu);
   const auto vd = MODELPARAMETER(vd);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.25)*Sqr(g2)*(vu*ZA(gt1,0) + vd*ZA(gt1,1))*(ZP(gt2,1)*ZP(gt3,0) - ZP(gt2,0)*ZP(gt3,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0.,0.3872983346207417)*g1*g2*Cos(ThetaW)*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0.,-0.3872983346207417)*g1*g2*Sin(ThetaW)*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.5)*g2*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0.,0.35355339059327373)*(2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZU(gt4,j3))*ZA(gt1,0)*ZP(gt3,0) - 2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt4,j3))*ZA(gt1,1)*ZP(gt3,1) + 2*SUM(j3,0,2,Conj(ZD(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yu(j2,j1))*ZU(gt4,3 + j2)))*(ZA(gt1,1)*ZP(gt3,0) - ZA(gt1,0)*ZP(gt3,1)) + Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZU(gt4,j1))*(-(ZA(gt1,0)*ZP(gt3,0)) + ZA(gt1,1)*ZP(gt3,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYd = MODELPARAMETER(TYd);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0.,-0.7071067811865475)*(SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,ZD(gt3,3 + j1)*TYd(j1,j2)))*ZA(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*Conj(TYd(j1,j2)))*ZD(gt3,j2))*ZA(gt1,0) + (Conj(Mu)*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1))) - Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt2,3 + j1)))*ZD(gt3,j2)))*ZA(gt1,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0.,0.35355339059327373)*(2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(gt4,j3))*ZA(gt1,0)*ZP(gt3,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZV(gt4,j1))*(-(ZA(gt1,0)*ZP(gt3,0)) + ZA(gt1,1)*ZP(gt3,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYe = MODELPARAMETER(TYe);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0.,-0.7071067811865475)*(SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,ZE(gt3,3 + j1)*TYe(j1,j2)))*ZA(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*Conj(TYe(j1,j2)))*ZE(gt3,j2))*ZA(gt1,0) + (Conj(Mu)*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1))) - Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt2,3 + j1)))*ZE(gt3,j2)))*ZA(gt1,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYu = MODELPARAMETER(TYu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0.,-0.7071067811865475)*(Conj(Mu)*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)))*ZA(gt1,0) - Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1)))*ZU(gt3,j2))*ZA(gt1,0) + (SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,ZU(gt3,3 + j1)*TYu(j1,j2))) - SUM(j2,0,2,SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2)))*ZU(gt3,j2)))*ZA(gt1,1));

   return {result};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,0.7071067811865475)*g2*(Conj(UM(gt2,1))*Conj(UP(gt1,0))*ZA(gt3,0) + Conj(UM(gt2,0))*Conj(UP(gt1,1))*ZA(gt3,1));

   const std::complex<double> right = std::complex<double>(0.,-0.7071067811865475)*g2*(UM(gt1,1)*UP(gt2,0)*ZA(gt3,0) + UM(gt1,0)*UP(gt2,1)*ZA(gt3,1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,-0.7071067811865475)*SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)))*ZA(gt3,0);

   const std::complex<double> right = std::complex<double>(0.,0.7071067811865475)*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZDL(gt1,j2))*ZA(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,-0.7071067811865475)*SUM(j2,0,2,Conj(ZEL(gt2,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)))*ZA(gt3,0);

   const std::complex<double> right = std::complex<double>(0.,0.7071067811865475)*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZEL(gt1,j2))*ZA(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,-0.7071067811865475)*SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Conj(ZUR(gt1,j1))*Yu(j1,j2)))*ZA(gt3,1);

   const std::complex<double> right = std::complex<double>(0.,0.7071067811865475)*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZUL(gt1,j2))*ZA(gt3,1);

   return {left, right};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto vu = MODELPARAMETER(vu);
   const auto vd = MODELPARAMETER(vd);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.25)*Sqr(g2)*(vu*ZA(gt1,0) + vd*ZA(gt1,1))*(ZP(gt2,1)*ZP(gt3,0) - ZP(gt2,0)*ZP(gt3,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0.,-0.3872983346207417)*g1*g2*Cos(ThetaW)*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0.,0.3872983346207417)*g1*g2*Sin(ThetaW)*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.5)*g2*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto TYd = MODELPARAMETER(TYd);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0.,-0.7071067811865475)*(SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,ZD(gt3,3 + j1)*TYd(j1,j2)))*ZA(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*Conj(TYd(j1,j2)))*ZD(gt3,j2))*ZA(gt1,0) + (Conj(Mu)*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1))) - Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt2,3 + j1)))*ZD(gt3,j2)))*ZA(gt1,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::Se>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto TYe = MODELPARAMETER(TYe);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0.,-0.7071067811865475)*(SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,ZE(gt3,3 + j1)*TYe(j1,j2)))*ZA(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*Conj(TYe(j1,j2)))*ZE(gt3,j2))*ZA(gt1,0) + (Conj(Mu)*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1))) - Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt2,3 + j1)))*ZE(gt3,j2)))*ZA(gt1,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Ah, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::Su>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto TYu = MODELPARAMETER(TYu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0.,-0.7071067811865475)*(Conj(Mu)*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)))*ZA(gt1,0) - Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1)))*ZU(gt3,j2))*ZA(gt1,0) + (SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,ZU(gt3,3 + j1)*TYu(j1,j2))) - SUM(j2,0,2,SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2)))*ZU(gt3,j2)))*ZA(gt1,1));

   return {result};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Fu, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto UM = MODELPARAMETER(UM);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = -(g2*Conj(UM(gt1,0))*SUM(j1,0,2,Conj(ZUL(gt2,j1))*ZD(gt3,j1))) + Conj(UM(gt1,1))*SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)));

   const std::complex<double> right = SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZD(gt3,j2))*UP(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Fv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto UM = MODELPARAMETER(UM);
   const auto ZE = MODELPARAMETER(ZE);

   const std::complex<double> left = IF(gt2 < 3,-(g2*Conj(UM(gt1,0))*ZE(gt3,gt2)),0) + Conj(UM(gt1,1))*SUM(j1,0,2,Ye(j1,gt2)*ZE(gt3,3 + j1));

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Cha, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZP = MODELPARAMETER(ZP);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = 0.5*(Conj(UM(gt2,1))*(1.0954451150103321*g1*Conj(ZN(gt1,0)) + 1.4142135623730951*g2*Conj(ZN(gt1,1))) - 2*g2*Conj(UM(gt2,0))*Conj(ZN(gt1,2)))*ZP(gt3,0);

   const std::complex<double> right = -0.5*(UP(gt2,1)*(1.0954451150103321*g1*ZN(gt1,0) + 1.4142135623730951*g2*ZN(gt1,1)) + 2*g2*UP(gt2,0)*ZN(gt1,3))*ZP(gt3,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Cha, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto ZN = MODELPARAMETER(ZN);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = -0.5*g2*(2*Conj(UM(gt2,0))*ZN(gt1,1) + 1.4142135623730951*Conj(UM(gt2,1))*ZN(gt1,2));

   const std::complex<double> right = -(g2*Conj(ZN(gt1,1))*UP(gt2,0)) + 0.7071067811865475*g2*Conj(ZN(gt1,3))*UP(gt2,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0,-0.5)*(Conj(ZN(gt1,2))*(0.7745966692414834*g1*Conj(ZN(gt2,0)) - g2*Conj(ZN(gt2,1)))*ZA(gt3,0) - g2*Conj(ZN(gt1,1))*Conj(ZN(gt2,2))*ZA(gt3,0) - 0.7745966692414834*g1*Conj(ZN(gt1,3))*Conj(ZN(gt2,0))*ZA(gt3,1) + g2*Conj(ZN(gt1,3))*Conj(ZN(gt2,1))*ZA(gt3,1) + g2*Conj(ZN(gt1,1))*Conj(ZN(gt2,3))*ZA(gt3,1) + 0.7745966692414834*g1*Conj(ZN(gt1,0))*(Conj(ZN(gt2,2))*ZA(gt3,0) - Conj(ZN(gt2,3))*ZA(gt3,1)));

   const std::complex<double> right = std::complex<double>(0,0.1)*(ZA(gt3,0)*(ZN(gt1,2)*(3.872983346207417*g1*ZN(gt2,0) - 5*g2*ZN(gt2,1)) + (3.872983346207417*g1*ZN(gt1,0) - 5*g2*ZN(gt1,1))*ZN(gt2,2)) - ZA(gt3,1)*(ZN(gt1,3)*(3.872983346207417*g1*ZN(gt2,0) - 5*g2*ZN(gt2,1)) + (3.872983346207417*g1*ZN(gt1,0) - 5*g2*ZN(gt1,1))*ZN(gt2,3)));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = 0.5*(Conj(ZN(gt1,2))*(0.7745966692414834*g1*Conj(ZN(gt2,0)) - g2*Conj(ZN(gt2,1)))*ZH(gt3,0) - g2*Conj(ZN(gt1,1))*Conj(ZN(gt2,2))*ZH(gt3,0) - 0.7745966692414834*g1*Conj(ZN(gt1,3))*Conj(ZN(gt2,0))*ZH(gt3,1) + g2*Conj(ZN(gt1,3))*Conj(ZN(gt2,1))*ZH(gt3,1) + g2*Conj(ZN(gt1,1))*Conj(ZN(gt2,3))*ZH(gt3,1) + 0.7745966692414834*g1*Conj(ZN(gt1,0))*(Conj(ZN(gt2,2))*ZH(gt3,0) - Conj(ZN(gt2,3))*ZH(gt3,1)));

   const std::complex<double> right = 0.1*(ZH(gt3,0)*(ZN(gt1,2)*(3.872983346207417*g1*ZN(gt2,0) - 5*g2*ZN(gt2,1)) + (3.872983346207417*g1*ZN(gt1,0) - 5*g2*ZN(gt1,1))*ZN(gt2,2)) - ZH(gt3,1)*(ZN(gt1,3)*(3.872983346207417*g1*ZN(gt2,0) - 5*g2*ZN(gt2,1)) + (3.872983346207417*g1*ZN(gt1,0) - 5*g2*ZN(gt1,1))*ZN(gt2,3)));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.5*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(Conj(ZN(gt2,2))*ZN(gt1,2) - Conj(ZN(gt2,3))*ZN(gt1,3));

   const std::complex<double> right = 0.5*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(Conj(ZN(gt1,2))*ZN(gt2,2) - Conj(ZN(gt1,3))*ZN(gt2,3));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZDR = MODELPARAMETER(ZDR);

   const std::complex<double> left = -0.18257418583505536*g1*Conj(ZN(gt1,0))*SUM(j1,0,2,Conj(ZDL(gt2,j1))*ZD(gt3,j1)) + 0.7071067811865475*g2*Conj(ZN(gt1,1))*SUM(j1,0,2,Conj(ZDL(gt2,j1))*ZD(gt3,j1)) - Conj(ZN(gt1,2))*SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)));

   const std::complex<double> right = -0.3651483716701107*g1*SUM(j1,0,2,ZD(gt3,3 + j1)*ZDR(gt2,j1))*ZN(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZD(gt3,j2))*ZN(gt1,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZER = MODELPARAMETER(ZER);

   const std::complex<double> left = 0.5477225575051661*g1*Conj(ZN(gt1,0))*SUM(j1,0,2,Conj(ZEL(gt2,j1))*ZE(gt3,j1)) + 0.7071067811865475*g2*Conj(ZN(gt1,1))*SUM(j1,0,2,Conj(ZEL(gt2,j1))*ZE(gt3,j1)) - Conj(ZN(gt1,2))*SUM(j2,0,2,Conj(ZEL(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)));

   const std::complex<double> right = -1.0954451150103321*g1*SUM(j1,0,2,ZE(gt3,3 + j1)*ZER(gt2,j1))*ZN(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZE(gt3,j2))*ZN(gt1,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fu, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZUR = MODELPARAMETER(ZUR);

   const std::complex<double> left = -0.18257418583505536*g1*Conj(ZN(gt1,0))*SUM(j1,0,2,Conj(ZUL(gt2,j1))*ZU(gt3,j1)) - 0.7071067811865475*g2*Conj(ZN(gt1,1))*SUM(j1,0,2,Conj(ZUL(gt2,j1))*ZU(gt3,j1)) - Conj(ZN(gt1,3))*SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)));

   const std::complex<double> right = 0.7302967433402214*g1*SUM(j1,0,2,ZU(gt3,3 + j1)*ZUR(gt2,j1))*ZN(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZU(gt3,j2))*ZN(gt1,3);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Fv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZV = MODELPARAMETER(ZV);

   const std::complex<double> left = IF(gt2 < 3,0.5477225575051661*g1*Conj(ZN(gt1,0))*ZV(gt3,gt2),0) + IF(gt2 < 3,-0.7071067811865475*g2*Conj(ZN(gt1,1))*ZV(gt3,gt2),0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Chi, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZER = MODELPARAMETER(ZER);

   const std::complex<double> left = 0.5477225575051661*g1*Conj(ZN(gt1,0))*SUM(j1,0,2,Conj(ZEL(gt2,j1))*ZE(gt3,j1)) + 0.7071067811865475*g2*Conj(ZN(gt1,1))*SUM(j1,0,2,Conj(ZEL(gt2,j1))*ZE(gt3,j1)) - Conj(ZN(gt1,2))*SUM(j2,0,2,Conj(ZEL(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)));

   const std::complex<double> right = -1.0954451150103321*g1*SUM(j1,0,2,ZE(gt3,3 + j1)*ZER(gt2,j1))*ZN(gt1,0) - SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZE(gt3,j2))*ZN(gt1,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.7745966692414834*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   const std::complex<double> right = -0.5*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.7745966692414834*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   const std::complex<double> right = 0.1*KroneckerDelta(gt1,gt2)*(-5*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt3 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto PhaseGlu = PHASE(PhaseGlu);

   const std::complex<double> left = -0.7071067811865475*g3*PhaseGlu*SUM(j1,0,2,Conj(ZDL(gt2,j1))*ZD(gt3,j1));

   const std::complex<double> right = 0.7071067811865475*g3*Conj(PhaseGlu)*SUM(j1,0,2,ZD(gt3,3 + j1)*ZDR(gt2,j1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Fu, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt3 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto PhaseGlu = PHASE(PhaseGlu);

   const std::complex<double> left = -0.7071067811865475*g3*PhaseGlu*SUM(j1,0,2,Conj(ZUL(gt2,j1))*ZU(gt3,j1));

   const std::complex<double> right = 0.7071067811865475*g3*Conj(PhaseGlu)*SUM(j1,0,2,ZU(gt3,3 + j1)*ZUR(gt2,j1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g3 = MODELPARAMETER(g3);
   const auto PhaseGlu = PHASE(PhaseGlu);

   const std::complex<double> left = std::complex<double>(0,1)*g3*AbsSqr(PhaseGlu);

   const std::complex<double> right = std::complex<double>(0,1)*g3*AbsSqr(PhaseGlu);

   return {left, right};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZH(gt1,1)*(ZH(gt2,0)*(ZH(gt3,1)*ZH(gt4,0) + ZH(gt3,0)*ZH(gt4,1)) + ZH(gt2,1)*(ZH(gt3,0)*ZH(gt4,0) - 3*ZH(gt3,1)*ZH(gt4,1))) + ZH(gt1,0)*(ZH(gt2,1)*(ZH(gt3,1)*ZH(gt4,0) + ZH(gt3,0)*ZH(gt4,1)) + ZH(gt2,0)*(-3*ZH(gt3,0)*ZH(gt4,0) + ZH(gt3,1)*ZH(gt4,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vu = MODELPARAMETER(vu);
   const auto vd = MODELPARAMETER(vd);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZH(gt1,1)*(ZH(gt2,0)*(vu*ZH(gt3,0) + vd*ZH(gt3,1)) + ZH(gt2,1)*(vd*ZH(gt3,0) - 3*vu*ZH(gt3,1))) + ZH(gt1,0)*(ZH(gt2,1)*(vu*ZH(gt3,0) + vd*ZH(gt3,1)) + ZH(gt2,0)*(-3*vd*ZH(gt3,0) + vu*ZH(gt3,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.25*(-(ZH(gt1,0)*(Sqr(g2)*ZH(gt2,1)*(ZP(gt3,1)*ZP(gt4,0) + ZP(gt3,0)*ZP(gt4,1)) + ZH(gt2,0)*((0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0)*ZP(gt4,0) + (-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1)*ZP(gt4,1)))) - ZH(gt1,1)*(Sqr(g2)*ZH(gt2,0)*(ZP(gt3,1)*ZP(gt4,0) + ZP(gt3,0)*ZP(gt4,1)) + ZH(gt2,1)*((-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0)*ZP(gt4,0) + (0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1)*ZP(gt4,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*(-20*(SUM(j3,0,2,Conj(ZD(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yd(j2,j1))*ZD(gt4,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt3,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt4,j3)))*ZH(gt1,0)*ZH(gt2,0) + (Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZD(gt3,j1))*ZD(gt4,j1))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt3,3 + j1))*ZD(gt4,3 + j1))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*(-20*(SUM(j3,0,2,Conj(ZE(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(gt4,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt3,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt4,j3)))*ZH(gt1,0)*ZH(gt2,0) - (3*Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZE(gt3,j1))*ZE(gt4,j1))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt3,3 + j1))*ZE(gt4,3 + j1))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*((Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZU(gt3,j1))*ZU(gt4,j1))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1)) - 4*(5*(SUM(j3,0,2,Conj(ZU(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yu(j2,j1))*ZU(gt4,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt4,j3)))*ZH(gt1,1)*ZH(gt2,1) + Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt3,3 + j1))*ZU(gt4,3 + j1))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = -0.25*KroneckerDelta(gt3,gt4)*(0.6*Sqr(g1) + Sqr(g2))*(ZH(gt1,0)*ZH(gt2,0) - ZH(gt1,1)*ZH(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*Sqr(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(ZH(gt1,0)*ZH(gt2,0) + ZH(gt1,1)*ZH(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.5*Sqr(g2)*(ZH(gt1,0)*ZH(gt2,0) + ZH(gt1,1)*ZH(gt2,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -0.35355339059327373*(Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt3,j1))*ZD(gt4,j1))*(ZH(gt1,0)*ZP(gt2,0) + ZH(gt1,1)*ZP(gt2,1)) - 2*(SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt4,j3))*ZH(gt1,0)*ZP(gt2,0) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZD(gt4,j3))*ZH(gt1,1)*ZP(gt2,1) + SUM(j3,0,2,Conj(ZU(gt3,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yd(j2,j1))*ZD(gt4,3 + j2)))*(ZH(gt1,1)*ZP(gt2,0) + ZH(gt1,0)*ZP(gt2,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -0.35355339059327373*(-2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(gt3,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt4,j3))*ZH(gt1,0)*ZP(gt2,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZV(gt3,j1))*ZE(gt4,j1))*(ZH(gt1,0)*ZP(gt2,0) + ZH(gt1,1)*ZP(gt2,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto vu = MODELPARAMETER(vu);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.25*(-(ZH(gt1,0)*(ZP(gt2,0)*(vd*(0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0) + vu*Sqr(g2)*ZP(gt3,1)) + ZP(gt2,1)*(vu*Sqr(g2)*ZP(gt3,0) + vd*(-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1)))) - ZH(gt1,1)*(ZP(gt2,0)*(vu*(-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0) + vd*Sqr(g2)*ZP(gt3,1)) + ZP(gt2,1)*(vd*Sqr(g2)*ZP(gt3,0) + vu*(0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1))));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.3872983346207417*g1*g2*Cos(ThetaW)*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.5*g2*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -0.35355339059327373*(Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZU(gt4,j1))*(ZH(gt1,0)*ZP(gt3,0) + ZH(gt1,1)*ZP(gt3,1)) - 2*(SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZU(gt4,j3))*ZH(gt1,0)*ZP(gt3,0) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt4,j3))*ZH(gt1,1)*ZP(gt3,1) + SUM(j3,0,2,Conj(ZD(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yu(j2,j1))*ZU(gt4,3 + j2)))*(ZH(gt1,1)*ZP(gt3,0) + ZH(gt1,0)*ZP(gt3,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYd = MODELPARAMETER(TYd);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*((Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) - 10*(1.4142135623730951*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,ZD(gt3,3 + j1)*TYd(j1,j2)))*ZH(gt1,0) + 1.4142135623730951*SUM(j2,0,2,SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*Conj(TYd(j1,j2)))*ZD(gt3,j2))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,Conj(ZD(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yd(j2,j1))*ZD(gt3,3 + j2)))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt3,j3))*ZH(gt1,0) - 1.4142135623730951*Conj(Mu)*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)))*ZH(gt1,1) - 1.4142135623730951*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt2,3 + j1)))*ZD(gt3,j2))*ZH(gt1,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -0.35355339059327373*(-2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(gt4,j3))*ZH(gt1,0)*ZP(gt3,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZV(gt4,j1))*(ZH(gt1,0)*ZP(gt3,0) + ZH(gt1,1)*ZP(gt3,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYe = MODELPARAMETER(TYe);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*(-((3*Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt3,j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt3,3 + j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) - 10*(1.4142135623730951*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,ZE(gt3,3 + j1)*TYe(j1,j2)))*ZH(gt1,0) + 1.4142135623730951*SUM(j2,0,2,SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*Conj(TYe(j1,j2)))*ZE(gt3,j2))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,Conj(ZE(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(gt3,3 + j2)))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt3,j3))*ZH(gt1,0) - 1.4142135623730951*Conj(Mu)*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*ZH(gt1,1) - 1.4142135623730951*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt2,3 + j1)))*ZE(gt3,j2))*ZH(gt1,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYu = MODELPARAMETER(TYu);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*((Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) + 10*(1.4142135623730951*Conj(Mu)*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)))*ZH(gt1,0) + 1.4142135623730951*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1)))*ZU(gt3,j2))*ZH(gt1,0) - (1.4142135623730951*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,ZU(gt3,3 + j1)*TYu(j1,j2))) + 1.4142135623730951*SUM(j2,0,2,SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2)))*ZU(gt3,j2)) + 2*vu*(SUM(j3,0,2,Conj(ZU(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yu(j2,j1))*ZU(gt3,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt3,j3))))*ZH(gt1,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = -0.25*KroneckerDelta(gt2,gt3)*(0.6*Sqr(g1) + Sqr(g2))*(vd*ZH(gt1,0) - vu*ZH(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VWm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.5*Sqr(g2)*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*Sqr(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return {result};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*g2*(Conj(UM(gt2,1))*Conj(UP(gt1,0))*ZH(gt3,0) + Conj(UM(gt2,0))*Conj(UP(gt1,1))*ZH(gt3,1));

   const std::complex<double> right = -0.7071067811865475*g2*(UM(gt1,1)*UP(gt2,0)*ZH(gt3,0) + UM(gt1,0)*UP(gt2,1)*ZH(gt3,1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)))*ZH(gt3,0);

   const std::complex<double> right = -0.7071067811865475*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZDL(gt1,j2))*ZH(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*SUM(j2,0,2,Conj(ZEL(gt2,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)))*ZH(gt3,0);

   const std::complex<double> right = -0.7071067811865475*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZEL(gt1,j2))*ZH(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Conj(ZUR(gt1,j1))*Yu(j1,j2)))*ZH(gt3,1);

   const std::complex<double> right = -0.7071067811865475*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZUL(gt1,j2))*ZH(gt3,1);

   return {left, right};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto vu = MODELPARAMETER(vu);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.25*(-(ZH(gt1,0)*(ZP(gt2,0)*(vd*(0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0) + vu*Sqr(g2)*ZP(gt3,1)) + ZP(gt2,1)*(vu*Sqr(g2)*ZP(gt3,0) + vd*(-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1)))) - ZH(gt1,1)*(ZP(gt2,0)*(vu*(-0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0) + vd*Sqr(g2)*ZP(gt3,1)) + ZP(gt2,1)*(vd*Sqr(g2)*ZP(gt3,0) + vu*(0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1))));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.3872983346207417*g1*g2*Cos(ThetaW)*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -0.5*g2*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto TYd = MODELPARAMETER(TYd);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*((Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) - 10*(1.4142135623730951*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,ZD(gt3,3 + j1)*TYd(j1,j2)))*ZH(gt1,0) + 1.4142135623730951*SUM(j2,0,2,SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*Conj(TYd(j1,j2)))*ZD(gt3,j2))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,Conj(ZD(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yd(j2,j1))*ZD(gt3,3 + j2)))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt3,j3))*ZH(gt1,0) - 1.4142135623730951*Conj(Mu)*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)))*ZH(gt1,1) - 1.4142135623730951*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt2,3 + j1)))*ZD(gt3,j2))*ZH(gt1,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::Se>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto TYe = MODELPARAMETER(TYe);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*(-((3*Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt3,j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt3,3 + j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) - 10*(1.4142135623730951*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,ZE(gt3,3 + j1)*TYe(j1,j2)))*ZH(gt1,0) + 1.4142135623730951*SUM(j2,0,2,SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*Conj(TYe(j1,j2)))*ZE(gt3,j2))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,Conj(ZE(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(gt3,3 + j2)))*ZH(gt1,0) + 2*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt3,j3))*ZH(gt1,0) - 1.4142135623730951*Conj(Mu)*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*ZH(gt1,1) - 1.4142135623730951*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt2,3 + j1)))*ZE(gt3,j2))*ZH(gt1,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::Su>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto TYu = MODELPARAMETER(TYu);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.05*((Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)) + 10*(1.4142135623730951*Conj(Mu)*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)))*ZH(gt1,0) + 1.4142135623730951*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1)))*ZU(gt3,j2))*ZH(gt1,0) - (1.4142135623730951*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,ZU(gt3,3 + j1)*TYu(j1,j2))) + 1.4142135623730951*SUM(j2,0,2,SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2)))*ZU(gt3,j2)) + 2*vu*(SUM(j3,0,2,Conj(ZU(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yu(j2,j1))*ZU(gt3,3 + j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt3,j3))))*ZH(gt1,1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::hh, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.5*Sqr(g2)*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(-(ZP(gt1,1)*(-2*ZP(gt2,1)*ZP(gt3,1)*ZP(gt4,1) + ZP(gt2,0)*(ZP(gt3,1)*ZP(gt4,0) + ZP(gt3,0)*ZP(gt4,1)))) + ZP(gt1,0)*(2*ZP(gt2,0)*ZP(gt3,0)*ZP(gt4,0) - ZP(gt2,1)*(ZP(gt3,1)*ZP(gt4,0) + ZP(gt3,0)*ZP(gt4,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.05*((Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt4,j1))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt4,3 + j1))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1)) - 20*(SUM(j3,0,2,Conj(ZD(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yd(j2,j1))*ZD(gt4,3 + j2)))*ZP(gt1,0)*ZP(gt3,0) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZD(gt4,j3))*ZP(gt1,1)*ZP(gt3,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.05*(-20*SUM(j3,0,2,Conj(ZE(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(gt4,3 + j2)))*ZP(gt1,0)*ZP(gt3,0) - (3*Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt4,j1))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt4,3 + j1))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.05*((Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt4,j1))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1)) - 4*(Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt4,3 + j1))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1)) + 5*(SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZU(gt4,j3))*ZP(gt1,0)*ZP(gt3,0) + SUM(j3,0,2,Conj(ZU(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yu(j2,j1))*ZU(gt4,3 + j2)))*ZP(gt1,1)*ZP(gt3,1))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYd = MODELPARAMETER(TYd);
   const auto TYu = MODELPARAMETER(TYu);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.25*(-1.4142135623730951*Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZD(gt3,j1))*(vd*ZP(gt1,0) + vu*ZP(gt1,1)) + 2*(2*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,ZD(gt3,3 + j1)*TYd(j1,j2)))*ZP(gt1,0) + 2*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1)))*ZD(gt3,j2))*ZP(gt1,0) + 1.4142135623730951*vu*SUM(j3,0,2,Conj(ZU(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yd(j2,j1))*ZD(gt3,3 + j2)))*ZP(gt1,0) + 1.4142135623730951*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZD(gt3,j3))*ZP(gt1,0) + 2*Conj(Mu)*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)))*ZP(gt1,1) + 2*SUM(j2,0,2,SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2)))*ZD(gt3,j2))*ZP(gt1,1) + 1.4142135623730951*vd*SUM(j3,0,2,Conj(ZU(gt2,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j3,j1))*Yd(j2,j1))*ZD(gt3,3 + j2)))*ZP(gt1,1) + 1.4142135623730951*vu*SUM(j3,0,2,SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZD(gt3,j3))*ZP(gt1,1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = -(SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(gt2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(gt4,j3))*ZP(gt1,0)*ZP(gt3,0)) - 0.05*KroneckerDelta(gt2,gt4)*(3*Sqr(g1) - 5*Sqr(g2))*(ZP(gt1,0)*ZP(gt3,0) - ZP(gt1,1)*ZP(gt3,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYe = MODELPARAMETER(TYe);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = SUM(j2,0,2,Conj(ZV(gt2,j2))*SUM(j1,0,2,ZE(gt3,3 + j1)*TYe(j1,j2)))*ZP(gt1,0) + 0.7071067811865475*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(gt2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(gt3,j3))*ZP(gt1,0) + Conj(Mu)*SUM(j2,0,2,Conj(ZV(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*ZP(gt1,1) - 0.35355339059327373*Sqr(g2)*SUM(j1,0,2,Conj(ZV(gt2,j1))*ZE(gt3,j1))*(vd*ZP(gt1,0) + vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*Sqr(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.05*(7.745966692414834*g1*g2*Cos(2*ThetaW) + Sin(2*ThetaW)*(-3*Sqr(g1) + 5*Sqr(g2)))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*Sqr(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.5*Sqr(g2)*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.3872983346207417*g1*g2*Cos(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.008333333333333333*(-(Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt4,j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt3,j2))) - 15*Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt4,j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt3,j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt4,j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt3,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt4,3 + j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt3,j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt4,3 + j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt3,j2)) - 30*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt4,j1))*(SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt3,j2)) - SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt3,3 + j2))) + 30*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt4,3 + j1))*(SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt3,j2)) - SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt3,3 + j2))) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt4,j1))*SUM(j2,0,2,Conj(ZD(gt2,3 + j2))*ZD(gt3,3 + j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt4,j1))*SUM(j2,0,2,Conj(ZD(gt2,3 + j2))*ZD(gt3,3 + j2)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt4,3 + j1))*SUM(j2,0,2,Conj(ZD(gt2,3 + j2))*ZD(gt3,3 + j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt4,3 + j1))*SUM(j2,0,2,Conj(ZD(gt2,3 + j2))*ZD(gt3,3 + j2)) - Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt4,j2)) - 15*Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt4,j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt4,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt4,j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt4,j2)) - 30*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt4,j2)) + 30*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZD(gt2,j2))*ZD(gt4,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt4,3 + j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt2,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt4,3 + j2)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt4,3 + j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt4,3 + j2)) + 30*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt2,3 + j2))*ZD(gt4,3 + j2)) - 30*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZD(gt2,3 + j2))*ZD(gt4,3 + j2)) - 120*SUM(j2,0,2,Conj(ZD(gt1,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt4,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Yd(j3,j4))*Conj(ZD(gt2,3 + j3)))*ZD(gt3,j4)) - 120*SUM(j2,0,2,Conj(ZD(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Yd(j3,j4))*Conj(ZD(gt1,3 + j3)))*ZD(gt4,j4)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.025*(-2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt4,3 + j1))*(SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt3,j2)) + 2*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt3,3 + j2))) + SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt4,j1))*((Sqr(g1) - 5*Sqr(g2))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt3,j2)) + 2*Sqr(g1)*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt3,3 + j2))) + Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt4,j2)) - 5*Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt4,j2)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt4,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt2,3 + j2))*ZE(gt4,3 + j2)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZE(gt2,3 + j2))*ZE(gt4,3 + j2)) - 40*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt4,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Yd(j3,j4))*Conj(ZD(gt1,3 + j3)))*ZD(gt3,j4)) - 40*SUM(j2,0,2,Conj(ZD(gt1,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt2,3 + j3)))*ZE(gt4,j4)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.008333333333333333*(-(SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt4,j1))*((Sqr(g1) - 15*Sqr(g2) - 10*Sqr(g3))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt3,j2)) + 2*(Sqr(g1) + 5*Sqr(g3))*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt3,3 + j2)))) + 2*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt4,3 + j1))*((2*Sqr(g1) - 5*Sqr(g3))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZD(gt3,j2)) + (4*Sqr(g1) + 5*Sqr(g3))*SUM(j2,0,2,Conj(ZD(gt1,3 + j2))*ZD(gt3,3 + j2))) - Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) + 15*Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) + 4*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)) + 8*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.05*KroneckerDelta(gt2,gt4)*((Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt3,j1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt3,3 + j1)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);

   const std::complex<double> result = 0.25*(-(Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt4,j1))*SUM(j2,0,2,Conj(ZV(gt2,j2))*ZE(gt3,j2))) - Sqr(g2)*SUM(j1,0,2,Conj(ZV(gt2,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZD(gt1,j2))*ZU(gt4,j2)) - 4*SUM(j2,0,2,Conj(ZV(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Yd(j3,j4))*Conj(ZD(gt1,3 + j3)))*ZU(gt4,j4)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYd = MODELPARAMETER(TYd);
   const auto TYu = MODELPARAMETER(TYu);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.25*(-1.4142135623730951*Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt3,j1))*(vd*ZP(gt2,0) + vu*ZP(gt2,1)) + 2*(2*Conj(Mu)*SUM(j2,0,2,Conj(ZD(gt1,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)))*ZP(gt2,0) + 2*SUM(j2,0,2,SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*Conj(TYd(j1,j2)))*ZU(gt3,j2))*ZP(gt2,0) + 1.4142135623730951*vu*SUM(j3,0,2,Conj(ZD(gt1,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yu(j2,j1))*ZU(gt3,3 + j2)))*ZP(gt2,0) + 1.4142135623730951*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt1,j2))*SUM(j1,0,2,Conj(Yd(j1,j3))*Yd(j1,j2)))*ZU(gt3,j3))*ZP(gt2,0) + 2*SUM(j2,0,2,Conj(ZD(gt1,j2))*SUM(j1,0,2,ZU(gt3,3 + j1)*TYu(j1,j2)))*ZP(gt2,1) + 2*Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt1,3 + j1)))*ZU(gt3,j2))*ZP(gt2,1) + 1.4142135623730951*vd*SUM(j3,0,2,Conj(ZD(gt1,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j3,j1))*Yu(j2,j1))*ZU(gt3,3 + j2)))*ZP(gt2,1) + 1.4142135623730951*vu*SUM(j3,0,2,SUM(j2,0,2,Conj(ZD(gt1,j2))*SUM(j1,0,2,Conj(Yu(j1,j3))*Yu(j1,j2)))*ZU(gt3,j3))*ZP(gt2,1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> result = 0.25*KroneckerDelta(gt1,gt2)*Sqr(g3);

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.16666666666666666*g3*((0.7745966692414834*g1*Cos(ThetaW) - 3*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) - 1.5491933384829668*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.16666666666666666*g3*(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) + 0.2581988897471611*g1*g3*Sin(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> result = -0.5*g3*KroneckerDelta(gt1,gt2);

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.05555555555555555*(Sqr(0.7745966692414834*g1*Cos(ThetaW) - 3*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) + 2.4*Sqr(g1)*Sqr(Cos(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.016666666666666666*(-((7.745966692414834*g1*g2*Cos(2*ThetaW) + Sin(2*ThetaW)*(Sqr(g1) - 15*Sqr(g2)))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1))) - 4*Sin(2*ThetaW)*Sqr(g1)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.03333333333333333*(3.872983346207417*g1*Cos(ThetaW) - 15*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) + 0.2581988897471611*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.05555555555555555*(Sqr(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) + 2.4*Sqr(g1)*Sqr(Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.16666666666666666*(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) - 0.2581988897471611*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.5*Sqr(g2)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = 0.7071067811865475*g2*g3*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.18257418583505536*g1*g2*Cos(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.18257418583505536*g1*g2*Sin(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt2,j1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);

   const std::complex<double> result = 0.025*(-3*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt4,j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt3,j2)) - 5*Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt4,j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt3,j2)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt4,3 + j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt3,j2)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt4,3 + j1))*(SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt3,j2)) - 2*SUM(j2,0,2,Conj(ZE(gt1,3 + j2))*ZE(gt3,3 + j2))) + SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt4,j1))*(-((3*Sqr(g1) + 5*Sqr(g2))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt3,j2))) + 6*Sqr(g1)*SUM(j2,0,2,Conj(ZE(gt1,3 + j2))*ZE(gt3,3 + j2))) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt4,j1))*SUM(j2,0,2,Conj(ZE(gt2,3 + j2))*ZE(gt3,3 + j2)) - 12*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt4,3 + j1))*SUM(j2,0,2,Conj(ZE(gt2,3 + j2))*ZE(gt3,3 + j2)) - 3*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt4,j2)) - 5*Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt4,j2)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt3,3 + j1))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt4,j2)) - 3*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt4,j2)) - 5*Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt4,j2)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt3,3 + j1))*SUM(j2,0,2,Conj(ZE(gt2,j2))*ZE(gt4,j2)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt1,3 + j2))*ZE(gt4,3 + j2)) - 12*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt2,3 + j1))*ZE(gt3,3 + j1))*SUM(j2,0,2,Conj(ZE(gt1,3 + j2))*ZE(gt4,3 + j2)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt2,3 + j2))*ZE(gt4,3 + j2)) - 12*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt3,3 + j1))*SUM(j2,0,2,Conj(ZE(gt2,3 + j2))*ZE(gt4,3 + j2)) - 40*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt4,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt1,3 + j3)))*ZE(gt3,j4)) - 40*SUM(j2,0,2,Conj(ZE(gt1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt4,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt2,3 + j3)))*ZE(gt3,j4)) - 40*SUM(j2,0,2,Conj(ZE(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt1,3 + j3)))*ZE(gt4,j4)) - 40*SUM(j2,0,2,Conj(ZE(gt1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt2,3 + j3)))*ZE(gt4,j4)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.25*(-(Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt4,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZD(gt3,j2))) - Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZD(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZV(gt4,j2)) - 4*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yd(j1,j2)*ZD(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt1,3 + j3)))*ZV(gt4,j4)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZE = MODELPARAMETER(ZE);

   const std::complex<double> result = 0.025*(-4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt4,3 + j1))*(SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt3,j2)) - 2*SUM(j2,0,2,Conj(ZE(gt1,3 + j2))*ZE(gt3,3 + j2))) + SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt4,j1))*((Sqr(g1) + 5*Sqr(g2))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZE(gt3,j2)) - 2*Sqr(g1)*SUM(j2,0,2,Conj(ZE(gt1,3 + j2))*ZE(gt3,3 + j2))) + Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) + 5*Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)) + 8*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);

   const std::complex<double> result = 0.05*(KroneckerDelta(gt2,gt4)*((-3*Sqr(g1) + 5*Sqr(g2))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt3,j1)) + 6*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt3,3 + j1))) - 5*(Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt4,j1))*SUM(j2,0,2,Conj(ZV(gt2,j2))*ZE(gt3,j2)) + Sqr(g2)*SUM(j1,0,2,Conj(ZV(gt2,j1))*ZE(gt3,j1))*SUM(j2,0,2,Conj(ZE(gt1,j2))*ZV(gt4,j2)) + 4*SUM(j2,0,2,Conj(ZV(gt2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(gt1,3 + j3)))*ZV(gt4,j4))));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto TYe = MODELPARAMETER(TYe);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Mu = MODELPARAMETER(Mu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = SUM(j2,0,2,SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*Conj(TYe(j1,j2)))*ZV(gt3,j2))*ZP(gt2,0) + 0.7071067811865475*vd*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(gt1,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(gt3,j3))*ZP(gt2,0) + Mu*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt1,3 + j1)))*ZV(gt3,j2))*ZP(gt2,1) - 0.35355339059327373*Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt3,j1))*(vd*ZP(gt2,0) + vu*ZP(gt2,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(Sqr(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) + 2.4*Sqr(g1)*Sqr(Cos(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.05*((7.745966692414834*g1*g2*Cos(2*ThetaW) + Sin(2*ThetaW)*(-3*Sqr(g1) + 5*Sqr(g2)))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) - 12*Sin(2*ThetaW)*Sqr(g1)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) + 0.7745966692414834*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(Sqr(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) + 2.4*Sqr(g1)*Sqr(Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) - 0.7745966692414834*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);

   const std::complex<double> result = 0.5*Sqr(g2)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.5477225575051661*g1*g2*Cos(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5477225575051661*g1*g2*Sin(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt2,j1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = 0.008333333333333333*(-(Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt4,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt3,j2))) - 15*Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt4,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt3,j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt4,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt3,j2)) + 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt4,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt3,j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt4,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt3,j2)) - 30*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt4,j1))*(SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt3,j2)) - SUM(j2,0,2,Conj(ZU(gt1,3 + j2))*ZU(gt3,3 + j2))) + 30*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt4,3 + j1))*(SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt3,j2)) - SUM(j2,0,2,Conj(ZU(gt1,3 + j2))*ZU(gt3,3 + j2))) + 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt4,j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt3,3 + j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt4,j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt3,3 + j2)) - 16*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt4,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt3,3 + j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt4,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt3,3 + j2)) - Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt4,j2)) - 15*Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt4,j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt4,j2)) + 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt4,j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt1,j2))*ZU(gt4,j2)) - 30*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) + 30*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,j2))*ZU(gt4,j2)) + 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt1,3 + j2))*ZU(gt4,3 + j2)) - 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt2,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt1,3 + j2))*ZU(gt4,3 + j2)) - 16*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt1,3 + j2))*ZU(gt4,3 + j2)) + 10*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt1,3 + j2))*ZU(gt4,3 + j2)) + 30*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt3,j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)) - 30*Sqr(g3)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt3,3 + j1))*SUM(j2,0,2,Conj(ZU(gt2,3 + j2))*ZU(gt4,3 + j2)) - 120*SUM(j2,0,2,Conj(ZU(gt1,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt4,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Yu(j3,j4))*Conj(ZU(gt2,3 + j3)))*ZU(gt3,j4)) - 120*SUM(j2,0,2,Conj(ZU(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Yu(j3,j4))*Conj(ZU(gt1,3 + j3)))*ZU(gt4,j4)));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = 0.05*KroneckerDelta(gt2,gt4)*((Sqr(g1) - 5*Sqr(g2))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt3,j1)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt3,3 + j1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = 0.7071067811865475*g2*g3*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZD(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.18257418583505536*g1*g2*Cos(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZD(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.18257418583505536*g1*g2*Sin(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZD(gt2,j1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZD = MODELPARAMETER(ZD);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZD(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> result = 0.25*KroneckerDelta(gt1,gt2)*Sqr(g3);

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.16666666666666666*g3*((0.7745966692414834*g1*Cos(ThetaW) + 3*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) + 3.0983866769659336*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.16666666666666666*g3*((3*g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) - 3.0983866769659336*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> result = -0.5*g3*KroneckerDelta(gt1,gt2);

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.05555555555555555*(Sqr(0.7745966692414834*g1*Cos(ThetaW) + 3*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) + 9.6*Sqr(g1)*Sqr(Cos(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.016666666666666666*((7.745966692414834*g1*g2*Cos(2*ThetaW) - Sin(2*ThetaW)*(Sqr(g1) - 15*Sqr(g2)))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) - 16*Sin(2*ThetaW)*Sqr(g1)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.16666666666666666*(0.7745966692414834*g1*Cos(ThetaW) + 3*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) - 0.5163977794943222*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.05555555555555555*(Sqr(-3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) + 9.6*Sqr(g1)*Sqr(Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.03333333333333333*((-15*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) + 15.491933384829668*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = 0.5*Sqr(g2)*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 4>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const int gt4 = indices[3];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);

   const std::complex<double> result = -0.25*(KroneckerDelta(gt1,gt4)*KroneckerDelta(gt2,gt3) + KroneckerDelta(gt1,gt3)*KroneckerDelta(gt2,gt4))*(0.6*Sqr(g1) + Sqr(g2));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.5477225575051661*g1*g2*Cos(ThetaW)*SUM(j1,0,2,Conj(ZV(gt1,j1))*ZE(gt2,j1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5477225575051661*g1*g2*Sin(ThetaW)*SUM(j1,0,2,Conj(ZV(gt1,j1))*ZE(gt2,j1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZE = MODELPARAMETER(ZE);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZV(gt1,j1))*ZE(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt3681 = indices[0];
   const int gt3682 = indices[1];

   const std::complex<double> result = 0;

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*KroneckerDelta(gt1,gt2)*Sqr(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 0;
   int subtrahend_index = 1;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.5*KroneckerDelta(gt1,gt2)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);

   const std::complex<double> result = 0.5*KroneckerDelta(gt1,gt2)*Sqr(g2);

   return {result};
}

cxx_diagrams::TripleVectorVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VG, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> result = std::complex<double>(0,-1)*g3;

   return {result, cxx_diagrams::TripleVectorVertex::odd_permutation{}};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Cha, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto UP = MODELPARAMETER(UP);
   const auto UM = MODELPARAMETER(UM);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -(g2*Conj(UP(gt1,0))*Sin(ThetaW)*UP(gt2,0)) - 0.5*Conj(UP(gt1,1))*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*UP(gt2,1);

   const std::complex<double> right = -(g2*Conj(UM(gt2,0))*Sin(ThetaW)*UM(gt1,0)) - 0.5*Conj(UM(gt2,1))*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.2581988897471611*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   const std::complex<double> right = 0.16666666666666666*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) - 3*g2*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.7745966692414834*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   const std::complex<double> right = -0.5*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Fu, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.5163977794943222*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   const std::complex<double> right = 0.16666666666666666*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) + 3*g2*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.03333333333333333*(3.872983346207417*g1*Cos(ThetaW) - 15*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) + 0.2581988897471611*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) + 0.7745966692414834*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.16666666666666666*(0.7745966692414834*g1*Cos(ThetaW) + 3*g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) - 0.5163977794943222*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::TripleVectorVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Sin(ThetaW);

   return {result, cxx_diagrams::TripleVectorVertex::odd_permutation{}};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VP, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.5*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW));

   const std::complex<double> right = 0.7745966692414834*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   return {left, right};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0,-0.5)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(ZA(gt1,0)*ZH(gt2,0) - ZA(gt1,1)*ZH(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Cha, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto UP = MODELPARAMETER(UP);
   const auto UM = MODELPARAMETER(UM);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -(g2*Conj(UP(gt1,0))*Cos(ThetaW)*UP(gt2,0)) + 0.1*Conj(UP(gt1,1))*(-5*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW))*UP(gt2,1);

   const std::complex<double> right = -(g2*Conj(UM(gt2,0))*Cos(ThetaW)*UM(gt1,0)) + 0.1*Conj(UM(gt2,1))*(-5*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Chi>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.5*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(Conj(ZN(gt2,2))*ZN(gt1,2) - Conj(ZN(gt2,3))*ZN(gt1,3));

   const std::complex<double> right = 0.5*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(Conj(ZN(gt1,2))*ZN(gt2,2) - Conj(ZN(gt1,3))*ZN(gt2,3));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.2581988897471611*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   const std::complex<double> right = -0.16666666666666666*KroneckerDelta(gt1,gt2)*(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.7745966692414834*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   const std::complex<double> right = 0.1*KroneckerDelta(gt1,gt2)*(-5*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Fu, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.5163977794943222*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   const std::complex<double> right = 0.16666666666666666*KroneckerDelta(gt1,gt2)*(3*g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW));

   return {left, right};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = std::complex<double>(0,-0.5)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(ZA(gt1,0)*ZH(gt2,0) - ZA(gt1,1)*ZH(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3690 = indices[0];

   const std::complex<double> result = 0;

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*Sqr(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Hpm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.16666666666666666*(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) - 0.2581988897471611*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) - 0.7745966692414834*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Su, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.03333333333333333*((-15*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) + 15.491933384829668*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::Sv, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.5*KroneckerDelta(gt1,gt2)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = g2*Conj(UM(gt2,0))*Cos(ThetaW)*UM(gt1,0) + 0.5*Conj(UM(gt2,1))*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*UM(gt1,1);

   const std::complex<double> right = g2*Conj(UP(gt1,0))*Cos(ThetaW)*UP(gt2,0) + 0.5*Conj(UP(gt1,1))*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*UP(gt2,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.5*KroneckerDelta(gt1,gt2)*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW));

   const std::complex<double> right = -0.7745966692414834*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   return {left, right};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sd>::type, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.16666666666666666*(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZD(gt2,j1)) - 0.2581988897471611*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZD(gt1,3 + j1))*ZD(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::Se>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) - 0.7745966692414834*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::Su>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.03333333333333333*((-15*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW))*SUM(j1,0,2,Conj(ZU(gt1,j1))*ZU(gt2,j1)) + 15.491933384829668*g1*Sin(ThetaW)*SUM(j1,0,2,Conj(ZU(gt1,3 + j1))*ZU(gt2,3 + j1)));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<lowMSSM_cxx_diagrams::fields::VZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, lowMSSM_cxx_diagrams::fields::Sv>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.5*KroneckerDelta(gt1,gt2)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,0.7071067811865475)*g2*(Conj(UM(gt2,1))*Conj(UP(gt1,0))*ZA(gt3,0) + Conj(UM(gt2,0))*Conj(UP(gt1,1))*ZA(gt3,1));

   const std::complex<double> right = std::complex<double>(0.,-0.7071067811865475)*g2*(UM(gt1,1)*UP(gt2,0)*ZA(gt3,0) + UM(gt1,0)*UP(gt2,1)*ZA(gt3,1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*g2*(Conj(UM(gt2,1))*Conj(UP(gt1,0))*ZH(gt3,0) + Conj(UM(gt2,0))*Conj(UP(gt1,1))*ZH(gt3,1));

   const std::complex<double> right = -0.7071067811865475*g2*(UM(gt1,1)*UP(gt2,0)*ZH(gt3,0) + UM(gt1,0)*UP(gt2,1)*ZH(gt3,1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = g2*Conj(UM(gt2,0))*Sin(ThetaW)*UM(gt1,0) + 0.5*Conj(UM(gt2,1))*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*UM(gt1,1);

   const std::complex<double> right = g2*Conj(UP(gt1,0))*Sin(ThetaW)*UP(gt2,0) + 0.5*Conj(UP(gt1,1))*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*UP(gt2,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = g2*Conj(UM(gt2,0))*Cos(ThetaW)*UM(gt1,0) + 0.5*Conj(UM(gt2,1))*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*UM(gt1,1);

   const std::complex<double> right = g2*Conj(UP(gt1,0))*Cos(ThetaW)*UP(gt2,0) + 0.5*Conj(UP(gt1,1))*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*UP(gt2,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto UP = MODELPARAMETER(UP);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZP = MODELPARAMETER(ZP);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = -0.5*(Conj(UP(gt1,1))*(1.0954451150103321*g1*Conj(ZN(gt2,0)) + 1.4142135623730951*g2*Conj(ZN(gt2,1))) + 2*g2*Conj(UP(gt1,0))*Conj(ZN(gt2,3)))*ZP(gt3,1);

   const std::complex<double> right = 0.5*(UM(gt1,1)*(1.0954451150103321*g1*ZN(gt2,0) + 1.4142135623730951*g2*ZN(gt2,1)) - 2*g2*UM(gt1,0)*ZN(gt2,2))*ZP(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZN = MODELPARAMETER(ZN);
   const auto UM = MODELPARAMETER(UM);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = -0.5*g2*(2*Conj(ZN(gt2,1))*UM(gt1,0) + 1.4142135623730951*Conj(ZN(gt2,2))*UM(gt1,1));

   const std::complex<double> right = -(g2*Conj(UP(gt1,0))*ZN(gt2,1)) + 0.7071067811865475*g2*Conj(UP(gt1,1))*ZN(gt2,3);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto UP = MODELPARAMETER(UP);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = -(g2*Conj(UP(gt1,0))*SUM(j1,0,2,Conj(ZDL(gt2,j1))*ZU(gt3,j1))) + Conj(UP(gt1,1))*SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Yu(j1,j2)*ZU(gt3,3 + j1)));

   const std::complex<double> right = SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZU(gt3,j2))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto UP = MODELPARAMETER(UP);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZER = MODELPARAMETER(ZER);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = -(g2*Conj(UP(gt1,0))*SUM(j1,0,2,Conj(ZEL(gt2,j1))*ZV(gt3,j1)));

   const std::complex<double> right = SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZV(gt3,j2))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto UP = MODELPARAMETER(UP);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = Conj(UP(gt1,1))*SUM(j2,0,2,Conj(ZD(gt3,j2))*SUM(j1,0,2,Conj(ZUR(gt2,j1))*Yu(j1,j2)));

   const std::complex<double> right = -(g2*SUM(j1,0,2,Conj(ZD(gt3,j1))*ZUL(gt2,j1))*UM(gt1,0)) + SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt3,3 + j1)))*ZUL(gt2,j2))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Se>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZE = MODELPARAMETER(ZE);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = 0;

   const std::complex<double> right = IF(gt2 < 3,-(g2*Conj(ZE(gt3,gt2))*UM(gt1,0)),0) + SUM(j1,0,2,Conj(Ye(j1,gt2))*Conj(ZE(gt3,3 + j1)))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Su>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto UM = MODELPARAMETER(UM);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = Conj(UM(gt2,1))*SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)));

   const std::complex<double> right = -(g2*SUM(j1,0,2,Conj(ZU(gt3,j1))*ZDL(gt1,j1))*UP(gt2,0)) + SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt3,3 + j1)))*ZDL(gt1,j2))*UP(gt2,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZDL = MODELPARAMETER(ZDL);

   const std::complex<double> left = -0.3651483716701107*g1*Conj(ZN(gt2,0))*SUM(j1,0,2,Conj(ZD(gt3,3 + j1))*Conj(ZDR(gt1,j1))) - Conj(ZN(gt2,2))*SUM(j2,0,2,Conj(ZD(gt3,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)));

   const std::complex<double> right = SUM(j1,0,2,Conj(ZD(gt3,j1))*ZDL(gt1,j1))*(-0.18257418583505536*g1*ZN(gt2,0) + 0.7071067811865475*g2*ZN(gt2,1)) - SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*Conj(ZD(gt3,3 + j1)))*ZDL(gt1,j2))*ZN(gt2,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,-0.7071067811865475)*SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)))*ZA(gt3,0);

   const std::complex<double> right = std::complex<double>(0.,0.7071067811865475)*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZDL(gt1,j2))*ZA(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)))*ZH(gt3,0);

   const std::complex<double> right = -0.7071067811865475*SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZDL(gt1,j2))*ZH(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> left = -0.5*g3*KroneckerDelta(gt1,gt2);

   const std::complex<double> right = -0.5*g3*KroneckerDelta(gt1,gt2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.16666666666666666*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) - 3*g2*Sin(ThetaW));

   const std::complex<double> right = 0.2581988897471611*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fd, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.16666666666666666*KroneckerDelta(gt1,gt2)*(3*g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   const std::complex<double> right = -0.2581988897471611*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZDL = MODELPARAMETER(ZDL);

   const std::complex<double> left = SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Conj(ZDR(gt1,j1))*Yd(j1,j2)))*ZP(gt3,0);

   const std::complex<double> right = SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZDL(gt1,j2))*ZP(gt3,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZDL = MODELPARAMETER(ZDL);

   const std::complex<double> left = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZUL(gt2,j1))*ZDL(gt1,j1));

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fd>::type, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto PhaseGlu = PHASE(PhaseGlu);

   const std::complex<double> left = 0.7071067811865475*g3*PhaseGlu*SUM(j1,0,2,Conj(ZD(gt3,3 + j1))*Conj(ZDR(gt1,j1)));

   const std::complex<double> right = -0.7071067811865475*g3*Conj(PhaseGlu)*SUM(j1,0,2,Conj(ZD(gt3,j1))*ZDL(gt1,j1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Sv>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto UM = MODELPARAMETER(UM);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = Conj(UM(gt2,1))*SUM(j2,0,2,Conj(ZV(gt3,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)));

   const std::complex<double> right = -(g2*SUM(j1,0,2,Conj(ZV(gt3,j1))*ZEL(gt1,j1))*UP(gt2,0));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Se>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZEL = MODELPARAMETER(ZEL);

   const std::complex<double> left = -1.0954451150103321*g1*Conj(ZN(gt2,0))*SUM(j1,0,2,Conj(ZE(gt3,3 + j1))*Conj(ZER(gt1,j1))) - Conj(ZN(gt2,2))*SUM(j2,0,2,Conj(ZE(gt3,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)));

   const std::complex<double> right = 0.7071067811865475*SUM(j1,0,2,Conj(ZE(gt3,j1))*ZEL(gt1,j1))*(0.7745966692414834*g1*ZN(gt2,0) + g2*ZN(gt2,1)) - SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt3,3 + j1)))*ZEL(gt1,j2))*ZN(gt2,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,-0.7071067811865475)*SUM(j2,0,2,Conj(ZEL(gt2,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)))*ZA(gt3,0);

   const std::complex<double> right = std::complex<double>(0.,0.7071067811865475)*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZEL(gt1,j2))*ZA(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*SUM(j2,0,2,Conj(ZEL(gt2,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)))*ZH(gt3,0);

   const std::complex<double> right = -0.7071067811865475*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZEL(gt1,j2))*ZH(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.5*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW));

   const std::complex<double> right = 0.7745966692414834*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fe, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.5*KroneckerDelta(gt1,gt2)*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW));

   const std::complex<double> right = -0.7745966692414834*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fv, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> left = SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,gt2))*ZP(gt3,0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Fv, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZEL = MODELPARAMETER(ZEL);

   const std::complex<double> left = IF(gt2 < 3,-0.7071067811865475*g2*ZEL(gt1,gt2),0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Fv>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> left = SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,gt2))*ZP(gt3,0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::Chi>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZEL = MODELPARAMETER(ZEL);

   const std::complex<double> left = -1.0954451150103321*g1*Conj(ZN(gt2,0))*SUM(j1,0,2,Conj(ZE(gt3,3 + j1))*Conj(ZER(gt1,j1))) - Conj(ZN(gt2,2))*SUM(j2,0,2,Conj(ZE(gt3,j2))*SUM(j1,0,2,Conj(ZER(gt1,j1))*Ye(j1,j2)));

   const std::complex<double> right = 0.7071067811865475*SUM(j1,0,2,Conj(ZE(gt3,j1))*ZEL(gt1,j1))*(0.7745966692414834*g1*ZN(gt2,0) + g2*ZN(gt2,1)) - SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*Conj(ZE(gt3,3 + j1)))*ZEL(gt1,j2))*ZN(gt2,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fe>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::Fv>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZEL = MODELPARAMETER(ZEL);

   const std::complex<double> left = IF(gt2 < 3,-0.7071067811865475*g2*ZEL(gt1,gt2),0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Su>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZN = MODELPARAMETER(ZN);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZUL = MODELPARAMETER(ZUL);

   const std::complex<double> left = 0.7302967433402214*g1*Conj(ZN(gt2,0))*SUM(j1,0,2,Conj(ZU(gt3,3 + j1))*Conj(ZUR(gt1,j1))) - Conj(ZN(gt2,3))*SUM(j2,0,2,Conj(ZU(gt3,j2))*SUM(j1,0,2,Conj(ZUR(gt1,j1))*Yu(j1,j2)));

   const std::complex<double> right = SUM(j1,0,2,Conj(ZU(gt3,j1))*ZUL(gt1,j1))*(-0.18257418583505536*g1*ZN(gt2,0) - 0.7071067811865475*g2*ZN(gt2,1)) - SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*Conj(ZU(gt3,3 + j1)))*ZUL(gt1,j2))*ZN(gt2,3);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ZDR = MODELPARAMETER(ZDR);
   const auto ZUL = MODELPARAMETER(ZUL);

   const std::complex<double> left = SUM(j2,0,2,Conj(ZDL(gt2,j2))*SUM(j1,0,2,Conj(ZUR(gt1,j1))*Yu(j1,j2)))*ZP(gt3,1);

   const std::complex<double> right = SUM(j2,0,2,SUM(j1,0,2,Conj(Yd(j1,j2))*ZDR(gt2,j1))*ZUL(gt1,j2))*ZP(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZDL = MODELPARAMETER(ZDL);
   const auto ZUL = MODELPARAMETER(ZUL);

   const std::complex<double> left = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZDL(gt2,j1))*ZUL(gt1,j1));

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> left = std::complex<double>(0.,-0.7071067811865475)*SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Conj(ZUR(gt1,j1))*Yu(j1,j2)))*ZA(gt3,1);

   const std::complex<double> right = std::complex<double>(0.,0.7071067811865475)*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZUL(gt1,j2))*ZA(gt3,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Yu = MODELPARAMETER(Yu);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> left = -0.7071067811865475*SUM(j2,0,2,Conj(ZUL(gt2,j2))*SUM(j1,0,2,Conj(ZUR(gt1,j1))*Yu(j1,j2)))*ZH(gt3,1);

   const std::complex<double> right = -0.7071067811865475*SUM(j2,0,2,SUM(j1,0,2,Conj(Yu(j1,j2))*ZUR(gt2,j1))*ZUL(gt1,j2))*ZH(gt3,1);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> left = -0.5*g3*KroneckerDelta(gt1,gt2);

   const std::complex<double> right = -0.5*g3*KroneckerDelta(gt1,gt2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.16666666666666666*KroneckerDelta(gt1,gt2)*(0.7745966692414834*g1*Cos(ThetaW) + 3*g2*Sin(ThetaW));

   const std::complex<double> right = -0.5163977794943222*g1*Cos(ThetaW)*KroneckerDelta(gt1,gt2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Fu, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = 0.03333333333333333*KroneckerDelta(gt1,gt2)*(-15*g2*Cos(ThetaW) + 3.872983346207417*g1*Sin(ThetaW));

   const std::complex<double> right = 0.5163977794943222*g1*KroneckerDelta(gt1,gt2)*Sin(ThetaW);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fu>::type, lowMSSM_cxx_diagrams::fields::Glu, lowMSSM_cxx_diagrams::fields::Su>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const auto g3 = MODELPARAMETER(g3);
   const auto ZU = MODELPARAMETER(ZU);
   const auto ZUR = MODELPARAMETER(ZUR);
   const auto ZUL = MODELPARAMETER(ZUL);
   const auto PhaseGlu = PHASE(PhaseGlu);

   const std::complex<double> left = 0.7071067811865475*g3*PhaseGlu*SUM(j1,0,2,Conj(ZU(gt3,3 + j1))*Conj(ZUR(gt1,j1)));

   const std::complex<double> right = -0.7071067811865475*g3*Conj(PhaseGlu)*SUM(j1,0,2,Conj(ZU(gt3,j1))*ZUL(gt1,j1));

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Sv>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZN = MODELPARAMETER(ZN);

   const std::complex<double> left = 0;

   const std::complex<double> right = IF(gt1 < 3,0.5477225575051661*g1*Conj(ZV(gt3,gt1))*ZN(gt2,0),0) + IF(gt1 < 3,-0.7071067811865475*g2*Conj(ZV(gt3,gt1))*ZN(gt2,1),0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const int gt3 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> left = 0;

   const std::complex<double> right = SUM(j1,0,2,Conj(Ye(j1,gt1))*ZER(gt2,j1))*ZP(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Fe, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZEL = MODELPARAMETER(ZEL);

   const std::complex<double> left = IF(gt1 < 3,-0.7071067811865475*g2*Conj(ZEL(gt2,gt1)),0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, lowMSSM_cxx_diagrams::fields::Fv, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> left = -0.5*KroneckerDelta(gt1,gt2)*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW));

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt3 = indices[1];
   const int gt2 = indices[2];
   const auto Ye = MODELPARAMETER(Ye);
   const auto ZER = MODELPARAMETER(ZER);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> left = 0;

   const std::complex<double> right = SUM(j1,0,2,Conj(Ye(j1,gt1))*ZER(gt2,j1))*ZP(gt3,0);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Fv>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZEL = MODELPARAMETER(ZEL);

   const std::complex<double> left = IF(gt1 < 3,-0.7071067811865475*g2*Conj(ZEL(gt2,gt1)),0);

   const std::complex<double> right = 0;

   return {left, right};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gG>::type, lowMSSM_cxx_diagrams::fields::gG, lowMSSM_cxx_diagrams::fields::VG>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g3 = MODELPARAMETER(g3);

   const std::complex<double> result = std::complex<double>(0,-1)*g3;

   return {result, 1};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gP>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Sin(ThetaW));

   return {result, 1};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gP>::type, lowMSSM_cxx_diagrams::fields::gWm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Sin(ThetaW);

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gP, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.25*g2*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*(vd*ZP(gt3,0) - vu*ZP(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gP, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Sin(ThetaW));

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0,0.25)*Sqr(g2)*(vd*ZA(gt3,0) - vu*ZA(gt3,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = -0.25*Sqr(g2)*(vd*ZH(gt3,0) + vu*ZH(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Sin(ThetaW);

   return {result, 1};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Cos(ThetaW);

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.25*g2*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZP(gt3,0) - vu*ZP(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWmC>::type, lowMSSM_cxx_diagrams::fields::gZ, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Cos(ThetaW));

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gP, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.25*g2*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*(vd*ZP(gt3,0) - vu*ZP(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Sin(ThetaW);

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gWm, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZA = MODELPARAMETER(ZA);

   const std::complex<double> result = std::complex<double>(0,-0.25)*Sqr(g2)*(vd*ZA(gt3,0) - vu*ZA(gt3,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gWm, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = -0.25*Sqr(g2)*(vd*ZH(gt3,0) + vu*ZH(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gWm, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Sin(ThetaW));

   return {result, 1};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Cos(ThetaW));

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gZ, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.25*g2*(g2*Cos(ThetaW) - 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZP(gt3,0) - vu*ZP(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gWm>::type, lowMSSM_cxx_diagrams::fields::gZ, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Cos(ThetaW);

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gZ>::type, lowMSSM_cxx_diagrams::fields::gP, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.025*(7.745966692414834*g1*g2*Cos(2*ThetaW) + Sin(2*ThetaW)*(3*Sqr(g1) - 5*Sqr(g2)))*(vd*ZH(gt3,0) + vu*ZH(gt3,1));

   return {result};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gZ>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.25*g2*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZP(gt3,0) - vu*ZP(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gZ>::type, lowMSSM_cxx_diagrams::fields::gWmC, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Cos(ThetaW));

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gZ>::type, lowMSSM_cxx_diagrams::fields::gWm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.25*g2*(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZP(gt3,0) - vu*ZP(gt3,1));

   return {result};
}

cxx_diagrams::MomentumVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gZ>::type, lowMSSM_cxx_diagrams::fields::gWm, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Cos(ThetaW);

   return {result, 1};
}

cxx_diagrams::ScalarVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::gZ>::type, lowMSSM_cxx_diagrams::fields::gZ, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto g1 = MODELPARAMETER(g1);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.25*Sqr(g2*Cos(ThetaW) + 0.7745966692414834*g1*Sin(ThetaW))*(vd*ZH(gt3,0) + vu*ZH(gt3,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 0;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*(ZP(gt1,0)*ZP(gt2,0) + ZP(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.3872983346207417*g1*g2*Cos(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.3872983346207417*g1*g2*Cos(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Hpm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Se>::type, lowMSSM_cxx_diagrams::fields::Se, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 0;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.5*(0.7745966692414834*g1*Cos(ThetaW) + g2*Sin(ThetaW))*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZE(gt2,j1)) + 0.7745966692414834*g1*Cos(ThetaW)*SUM(j1,0,2,Conj(ZE(gt1,3 + j1))*ZE(gt2,3 + j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, typename lowMSSM_cxx_diagrams::fields::bar<lowMSSM_cxx_diagrams::fields::Cha>::type, lowMSSM_cxx_diagrams::fields::Fe>::evaluate(
   const std::array<int, 3>& indices, const context_base& context)
{
   const int gt3 = indices[0];
   const int gt1 = indices[1];
   const int gt2 = indices[2];
   const auto g2 = MODELPARAMETER(g2);
   const auto Ye = MODELPARAMETER(Ye);
   const auto UP = MODELPARAMETER(UP);
   const auto ZEL = MODELPARAMETER(ZEL);
   const auto ZV = MODELPARAMETER(ZV);
   const auto ZER = MODELPARAMETER(ZER);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = -(g2*Conj(UP(gt1,0))*SUM(j1,0,2,Conj(ZEL(gt2,j1))*ZV(gt3,j1)));

   const std::complex<double> right = SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j1,j2))*ZER(gt2,j1))*ZV(gt3,j2))*UM(gt1,1);

   return {left, right};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Ah, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.5)*g2*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Cha, lowMSSM_cxx_diagrams::fields::Chi>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZN = MODELPARAMETER(ZN);
   const auto UP = MODELPARAMETER(UP);
   const auto UM = MODELPARAMETER(UM);

   const std::complex<double> left = g2*Conj(ZN(gt1,1))*UP(gt2,0) - 0.7071067811865475*g2*Conj(ZN(gt1,3))*UP(gt2,1);

   const std::complex<double> right = g2*Conj(UM(gt2,0))*ZN(gt1,1) + 0.7071067811865475*g2*Conj(UM(gt2,1))*ZN(gt1,2);

   return {left, right};
}

cxx_diagrams::ChiralVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Chi, lowMSSM_cxx_diagrams::fields::Cha>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto UM = MODELPARAMETER(UM);
   const auto ZN = MODELPARAMETER(ZN);
   const auto UP = MODELPARAMETER(UP);

   const std::complex<double> left = -0.5*g2*(2*Conj(UM(gt2,0))*ZN(gt1,1) + 1.4142135623730951*Conj(UM(gt2,1))*ZN(gt1,2));

   const std::complex<double> right = -(g2*Conj(ZN(gt1,1))*UP(gt2,0)) + 0.7071067811865475*g2*Conj(ZN(gt1,3))*UP(gt2,1);

   return {left, right};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::Hpm>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.5*g2*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::hh, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZH = MODELPARAMETER(ZH);

   const std::complex<double> result = 0.5*Sqr(g2)*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::Ah>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZA = MODELPARAMETER(ZA);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = std::complex<double>(0,-0.5)*g2*(ZA(gt1,0)*ZP(gt2,0) + ZA(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::hh>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZH = MODELPARAMETER(ZH);
   const auto ZP = MODELPARAMETER(ZP);

   const std::complex<double> result = 0.5*g2*(ZH(gt1,0)*ZP(gt2,0) - ZH(gt1,1)*ZP(gt2,1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::InverseMetricVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -0.3872983346207417*g1*g2*Cos(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::InverseMetricVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Hpm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 1>& indices, const context_base& context)
{
   const int gt1 = indices[0];
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto ZP = MODELPARAMETER(ZP);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = 0.3872983346207417*g1*g2*Sin(ThetaW)*(vd*ZP(gt1,0) - vu*ZP(gt1,1));

   return {result};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Sd, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::Se, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 1;
   int subtrahend_index = 2;

   const int gt1 = indices[0];
   const int gt2 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::QuadrupleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> part1 = Sqr(g2)*Sqr(Sin(ThetaW));

   const std::complex<double> part2 = Sqr(g2)*Sqr(Sin(ThetaW));

   const std::complex<double> part3 = -2*Sqr(g2)*Sqr(Sin(ThetaW));

   return {part1, part2, part3};
}

cxx_diagrams::QuadrupleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> part1 = Cos(ThetaW)*Sin(ThetaW)*Sqr(g2);

   const std::complex<double> part2 = -(Sin(2*ThetaW)*Sqr(g2));

   const std::complex<double> part3 = Cos(ThetaW)*Sin(ThetaW)*Sqr(g2);

   return {part1, part2, part3};
}

cxx_diagrams::TripleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VP, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = g2*Sin(ThetaW);

   return {result, cxx_diagrams::TripleVectorVertex::odd_permutation{}};
}

cxx_diagrams::TripleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VP>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Sin(ThetaW));

   return {result, cxx_diagrams::TripleVectorVertex::odd_permutation{}};
}

cxx_diagrams::QuadrupleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> part1 = -2*Sqr(g2)*Sqr(Cos(ThetaW));

   const std::complex<double> part2 = Sqr(g2)*Sqr(Cos(ThetaW));

   const std::complex<double> part3 = Sqr(g2)*Sqr(Cos(ThetaW));

   return {part1, part2, part3};
}

cxx_diagrams::TripleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VZ>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);
   const auto ThetaW = DERIVEDPARAMETER(ThetaW);

   const std::complex<double> result = -(g2*Cos(ThetaW));

   return {result, cxx_diagrams::TripleVectorVertex::odd_permutation{}};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Su>::type, lowMSSM_cxx_diagrams::fields::Sd>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZD = MODELPARAMETER(ZD);
   const auto ZU = MODELPARAMETER(ZU);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZD(gt1,j1))*ZU(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::MomentumDifferenceVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::Sv>::type, lowMSSM_cxx_diagrams::fields::Se>::evaluate(
   const std::array<int, 2>& indices, const context_base& context)
{
   int minuend_index = 2;
   int subtrahend_index = 1;

   const int gt2 = indices[0];
   const int gt1 = indices[1];
   const auto g2 = MODELPARAMETER(g2);
   const auto ZE = MODELPARAMETER(ZE);
   const auto ZV = MODELPARAMETER(ZV);

   const std::complex<double> result = -0.7071067811865475*g2*SUM(j1,0,2,Conj(ZE(gt1,j1))*ZV(gt2,j1));

   return {result, minuend_index, subtrahend_index};
}

cxx_diagrams::QuadrupleVectorVertex VertexImpl<typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, typename lowMSSM_cxx_diagrams::fields::conj<lowMSSM_cxx_diagrams::fields::VWm>::type, lowMSSM_cxx_diagrams::fields::VWm, lowMSSM_cxx_diagrams::fields::VWm>::evaluate(
   const std::array<int, 0>& indices, const context_base& context)
{
   const auto g2 = MODELPARAMETER(g2);

   const std::complex<double> part1 = 2*Sqr(g2);

   const std::complex<double> part2 = -Sqr(g2);

   const std::complex<double> part3 = -Sqr(g2);

   return {part1, part2, part3};
}

} // namespace flexiblesusy::lowMSSM_cxx_diagrams::detail
