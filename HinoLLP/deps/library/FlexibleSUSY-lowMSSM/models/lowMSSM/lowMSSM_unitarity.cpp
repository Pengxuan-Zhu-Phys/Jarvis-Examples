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
 * @file lowMSSM_unitarity.cpp
 *
 * This file was generated with FlexibleSUSY 2.9.0 and SARAH 4.15.4 .
 */

#include "lowMSSM_unitarity.hpp"
#include "lowMSSM_mass_eigenstates.hpp"
#include "cxx_qft/lowMSSM_fields.hpp"

#include "sum.hpp"
#include "wrappers.hpp"

#include <Eigen/Eigenvalues>

namespace flexiblesusy {
namespace lowMSSM_unitarity {

static constexpr int size = 391;

namespace {

inline
double Sqrt2(int i, int j) {
   // 1/Sqrt[2] or 1
   return i==j ? oneOverSqrt2 : 1;
}

inline
bool is_unitarity_fulfilled(double eigenval) {
   // best eigenvalue <= 1/2 then the point is allowed
   return eigenval <= 0.5;
}

inline
double best_eigenvalue(Eigen::MatrixXcd const& m) {
   // max(|re(eigenvalues(a0))|)
   return m.eigenvalues().unaryExpr(
         [](std::complex<double> const& el) {return std::real(el);}
      ).cwiseAbs().maxCoeff();
}

}

// s -> infinity limit
UnitarityInfiniteS
max_scattering_eigenvalue_infinite_s(lowMSSM_mass_eigenstates const& model) {
   Eigen::MatrixXcd matrix = Eigen::MatrixXcd::Zero(size, size);

   using namespace lowMSSM_cxx_diagrams::fields;

   const auto g1 = model.get_g1();
   const auto g2 = model.get_g2();
   const auto Ye = model.get_Ye();
   const auto ZA = model.get_ZA();
   const auto ZH = model.get_ZH();
   const auto ZP = model.get_ZP();
   const auto ZE = model.get_ZE();
   const auto ZV = model.get_ZV();


   // {Ah, Ah}->{Ah, Ah}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Ah::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Ah::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Ah::numberOfGenerations; ++out2) {
               const std::complex<double> temp = ((Sqr(g1) + Sqr(g2))*Sqrt2(in1,in2)*Sqrt2(
                  out1,out2)*(ZA(in1,1)*(ZA(in2,0)*(ZA(out1,1)*ZA(out2,0) + ZA(out1,0)*ZA(out2
                  ,1)) + ZA(in2,1)*(ZA(out1,0)*ZA(out2,0) - 3*ZA(out1,1)*ZA(out2,1))) + ZA(in1
                  ,0)*(ZA(in2,1)*(ZA(out1,1)*ZA(out2,0) + ZA(out1,0)*ZA(out2,1)) + ZA(in2,0)*(
                  -3*ZA(out1,0)*ZA(out2,0) + ZA(out1,1)*ZA(out2,1)))))/4.;
               matrix.coeffRef(0+in1+in2*Ah::numberOfGenerations, 0+out1+out2*Ah::numberOfGenerations) = temp;
               if (0+in1+in2*Ah::numberOfGenerations != 0+out1+out2*Ah::numberOfGenerations) matrix.coeffRef(0+out1+out2*Ah::numberOfGenerations, 0+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Ah}->{hh, hh}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Ah::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<hh::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*Sqrt2(in1,in2)*
                  Sqrt2(out1,out2)*(ZA(in1,0)*ZA(in2,0) - ZA(in1,1)*ZA(in2,1))*(ZH(out1,0)*ZH(
                  out2,0) - ZH(out1,1)*ZH(out2,1)));
               matrix.coeffRef(0+in1+in2*Ah::numberOfGenerations, 52+out1+out2*hh::numberOfGenerations) = temp;
               if (0+in1+in2*Ah::numberOfGenerations != 52+out1+out2*hh::numberOfGenerations) matrix.coeffRef(52+out1+out2*hh::numberOfGenerations, 0+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Ah}->{Hpm, conj[Hpm]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Ah::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (Sqrt2(in1,in2)*(ZA(in1,0)*(Sqr(g2)*ZA(in2,1)
                  *(ZP(out1,1)*ZP(out2,0) + ZP(out1,0)*ZP(out2,1)) + ZA(in2,0)*(-((Sqr(g1) +
                  Sqr(g2))*ZP(out1,0)*ZP(out2,0)) + (g1 - g2)*(g1 + g2)*ZP(out1,1)*ZP(out2,1))
                  ) + ZA(in1,1)*(Sqr(g2)*ZA(in2,0)*(ZP(out1,1)*ZP(out2,0) + ZP(out1,0)*ZP(out2
                  ,1)) + ZA(in2,1)*((g1 - g2)*(g1 + g2)*ZP(out1,0)*ZP(out2,0) - (Sqr(g1) + Sqr
                  (g2))*ZP(out1,1)*ZP(out2,1)))))/4.;
               matrix.coeffRef(0+in1+in2*Ah::numberOfGenerations, 122+out1+out2*Hpm::numberOfGenerations) = temp;
               if (0+in1+in2*Ah::numberOfGenerations != 122+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(122+out1+out2*Hpm::numberOfGenerations, 0+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Ah}->{Se, conj[Se]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Ah::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*(Sqrt2(in1,in2)*(4*(SUM(j3,0,2,Conj(ZE(
                  out1,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(out2,3 +
                  j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(out1,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*
                  Ye(j1,j2)))*ZE(out2,j3)))*ZA(in1,0)*ZA(in2,0) + (g1 - g2)*(g1 + g2)*SUM(j1,0
                  ,2,Conj(ZE(out1,j1))*ZE(out2,j1))*(ZA(in1,0)*ZA(in2,0) - ZA(in1,1)*ZA(in2,1)
                  ) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,3 + j1))*ZE(out2,3 + j1))*(-(ZA(in1,0)
                  *ZA(in2,0)) + ZA(in1,1)*ZA(in2,1))));
               matrix.coeffRef(0+in1+in2*Ah::numberOfGenerations, 210+out1+out2*Se::numberOfGenerations) = temp;
               if (0+in1+in2*Ah::numberOfGenerations != 210+out1+out2*Se::numberOfGenerations) matrix.coeffRef(210+out1+out2*Se::numberOfGenerations, 0+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Ah}->{Sv, conj[Sv]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Ah::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*Delta(out1,out2)*
                  Sqrt2(in1,in2)*(ZA(in1,0)*ZA(in2,0) - ZA(in1,1)*ZA(in2,1)));
               matrix.coeffRef(0+in1+in2*Ah::numberOfGenerations, 297+out1+out2*Sv::numberOfGenerations) = temp;
               if (0+in1+in2*Ah::numberOfGenerations != 297+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(297+out1+out2*Sv::numberOfGenerations, 0+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, hh}->{Ah, hh}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<hh::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Ah::numberOfGenerations; ++out1) {
            for (int out2=0; out2<hh::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*(ZA(in1,0)*ZA(out1
                  ,0) - ZA(in1,1)*ZA(out1,1))*(ZH(in2,0)*ZH(out2,0) - ZH(in2,1)*ZH(out2,1)));
               matrix.coeffRef(4+in1+in2*Ah::numberOfGenerations, 4+out1+out2*Ah::numberOfGenerations) = temp;
               if (4+in1+in2*Ah::numberOfGenerations != 4+out1+out2*Ah::numberOfGenerations) matrix.coeffRef(4+out1+out2*Ah::numberOfGenerations, 4+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, hh}->{Hpm, conj[Hpm]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<hh::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = std::complex<double>(0,-0.25)*Sqr(g2)*(ZA(in1
                  ,1)*ZH(in2,0) + ZA(in1,0)*ZH(in2,1))*(ZP(out1,1)*ZP(out2,0) - ZP(out1,0)*ZP(
                  out2,1));
               matrix.coeffRef(4+in1+in2*Ah::numberOfGenerations, 122+out1+out2*Hpm::numberOfGenerations) = temp;
               if (4+in1+in2*Ah::numberOfGenerations != 122+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(122+out1+out2*Hpm::numberOfGenerations, 4+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Hpm}->{Ah, conj[Hpm]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Ah::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (ZA(in1,0)*(Sqr(g2)*ZA(out1,1)*(ZP(in2,1)*ZP(
                  out2,0) + ZP(in2,0)*ZP(out2,1)) + ZA(out1,0)*(-((Sqr(g1) + Sqr(g2))*ZP(in2,0
                  )*ZP(out2,0)) + (g1 - g2)*(g1 + g2)*ZP(in2,1)*ZP(out2,1))) + ZA(in1,1)*(Sqr(
                  g2)*ZA(out1,0)*(ZP(in2,1)*ZP(out2,0) + ZP(in2,0)*ZP(out2,1)) + ZA(out1,1)*((
                  g1 - g2)*(g1 + g2)*ZP(in2,0)*ZP(out2,0) - (Sqr(g1) + Sqr(g2))*ZP(in2,1)*ZP(
                  out2,1))))/4.;
               matrix.coeffRef(8+in1+in2*Ah::numberOfGenerations, 30+out1+out2*Ah::numberOfGenerations) = temp;
               if (8+in1+in2*Ah::numberOfGenerations != 30+out1+out2*Ah::numberOfGenerations) matrix.coeffRef(30+out1+out2*Ah::numberOfGenerations, 8+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Hpm}->{hh, conj[Hpm]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = std::complex<double>(0,-0.25)*Sqr(g2)*(ZA(in1
                  ,1)*ZH(out1,0) + ZA(in1,0)*ZH(out1,1))*(ZP(in2,1)*ZP(out2,0) - ZP(in2,0)*ZP(
                  out2,1));
               matrix.coeffRef(8+in1+in2*Ah::numberOfGenerations, 78+out1+out2*hh::numberOfGenerations) = temp;
               if (8+in1+in2*Ah::numberOfGenerations != 78+out1+out2*hh::numberOfGenerations) matrix.coeffRef(78+out1+out2*hh::numberOfGenerations, 8+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Hpm}->{Sv, conj[Se]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (std::complex<double>(0,0.5)*(-2*SUM(j3,0,2,
                  SUM(j2,0,2,Conj(ZV(out1,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(out2,
                  j3))*ZA(in1,0)*ZP(in2,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZV(out1,j1))*ZE(out2,j1))
                  *(ZA(in1,0)*ZP(in2,0) - ZA(in1,1)*ZP(in2,1))))/Sqrt(2);
               matrix.coeffRef(8+in1+in2*Ah::numberOfGenerations, 279+out1+out2*Sv::numberOfGenerations) = temp;
               if (8+in1+in2*Ah::numberOfGenerations != 279+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(279+out1+out2*Sv::numberOfGenerations, 8+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Se}->{Ah, conj[Se]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Ah::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-4*(SUM(j3,0,2,Conj(ZE(in2,3 + j3))*SUM(j2,0
                  ,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(out2,3 + j2))) + SUM(j3,0,2,SUM(
                  j2,0,2,Conj(ZE(in2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(out2,j3)))
                  *ZA(in1,0)*ZA(out1,0) - (g1 - g2)*(g1 + g2)*SUM(j1,0,2,Conj(ZE(in2,j1))*ZE(
                  out2,j1))*(ZA(in1,0)*ZA(out1,0) - ZA(in1,1)*ZA(out1,1)) + 2*Sqr(g1)*SUM(j1,0
                  ,2,Conj(ZE(in2,3 + j1))*ZE(out2,3 + j1))*(ZA(in1,0)*ZA(out1,0) - ZA(in1,1)*
                  ZA(out1,1)))/4.;
               matrix.coeffRef(12+in1+in2*Ah::numberOfGenerations, 34+out1+out2*Ah::numberOfGenerations) = temp;
               if (12+in1+in2*Ah::numberOfGenerations != 34+out1+out2*Ah::numberOfGenerations) matrix.coeffRef(34+out1+out2*Ah::numberOfGenerations, 12+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Se}->{conj[Hpm], conj[Sv]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (std::complex<double>(0,0.5)*(2*SUM(j3,0,2,
                  SUM(j2,0,2,Conj(ZE(in2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(out2,
                  j3))*ZA(in1,0)*ZP(out1,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(in2,j1))*ZV(out2,j1))
                  *(-(ZA(in1,0)*ZP(out1,0)) + ZA(in1,1)*ZP(out1,1))))/Sqrt(2);
               matrix.coeffRef(12+in1+in2*Ah::numberOfGenerations, 322+out1+out2*Hpm::numberOfGenerations) = temp;
               if (12+in1+in2*Ah::numberOfGenerations != 322+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(322+out1+out2*Hpm::numberOfGenerations, 12+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Sv}->{Ah, conj[Sv]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Ah::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*Delta(in2,out2)*(
                  ZA(in1,0)*ZA(out1,0) - ZA(in1,1)*ZA(out1,1)));
               matrix.coeffRef(24+in1+in2*Ah::numberOfGenerations, 46+out1+out2*Ah::numberOfGenerations) = temp;
               if (24+in1+in2*Ah::numberOfGenerations != 46+out1+out2*Ah::numberOfGenerations) matrix.coeffRef(46+out1+out2*Ah::numberOfGenerations, 24+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, Sv}->{Hpm, conj[Se]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (std::complex<double>(0,0.5)*(-2*SUM(j3,0,2,
                  SUM(j2,0,2,Conj(ZV(in2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(out2,
                  j3))*ZA(in1,0)*ZP(out1,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZV(in2,j1))*ZE(out2,j1))
                  *(ZA(in1,0)*ZP(out1,0) - ZA(in1,1)*ZP(out1,1))))/Sqrt(2);
               matrix.coeffRef(24+in1+in2*Ah::numberOfGenerations, 126+out1+out2*Hpm::numberOfGenerations) = temp;
               if (24+in1+in2*Ah::numberOfGenerations != 126+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(126+out1+out2*Hpm::numberOfGenerations, 24+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, conj[Hpm]}->{hh, Hpm}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = std::complex<double>(0,0.25)*Sqr(g2)*(ZA(in1,
                  1)*ZH(out1,0) + ZA(in1,0)*ZH(out1,1))*(ZP(in2,1)*ZP(out2,0) - ZP(in2,0)*ZP(
                  out2,1));
               matrix.coeffRef(30+in1+in2*Ah::numberOfGenerations, 56+out1+out2*hh::numberOfGenerations) = temp;
               if (30+in1+in2*Ah::numberOfGenerations != 56+out1+out2*hh::numberOfGenerations) matrix.coeffRef(56+out1+out2*hh::numberOfGenerations, 30+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, conj[Hpm]}->{Se, conj[Sv]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (std::complex<double>(0,0.5)*(2*SUM(j3,0,2,
                  SUM(j2,0,2,Conj(ZE(out1,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(out2,
                  j3))*ZA(in1,0)*ZP(in2,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(out1,j1))*ZV(out2,j1))
                  *(-(ZA(in1,0)*ZP(in2,0)) + ZA(in1,1)*ZP(in2,1))))/Sqrt(2);
               matrix.coeffRef(30+in1+in2*Ah::numberOfGenerations, 246+out1+out2*Se::numberOfGenerations) = temp;
               if (30+in1+in2*Ah::numberOfGenerations != 246+out1+out2*Se::numberOfGenerations) matrix.coeffRef(246+out1+out2*Se::numberOfGenerations, 30+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, conj[Se]}->{Hpm, Sv}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (std::complex<double>(0,0.5)*(-2*SUM(j3,0,2,
                  SUM(j2,0,2,Conj(ZV(out2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(in2,
                  j3))*ZA(in1,0)*ZP(out1,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZV(out2,j1))*ZE(in2,j1))
                  *(ZA(in1,0)*ZP(out1,0) - ZA(in1,1)*ZP(out1,1))))/Sqrt(2);
               matrix.coeffRef(34+in1+in2*Ah::numberOfGenerations, 116+out1+out2*Hpm::numberOfGenerations) = temp;
               if (34+in1+in2*Ah::numberOfGenerations != 116+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(116+out1+out2*Hpm::numberOfGenerations, 34+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Ah, conj[Sv]}->{Se, conj[Hpm]}
   for (int in1=0; in1<Ah::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (std::complex<double>(0,0.5)*(2*SUM(j3,0,2,
                  SUM(j2,0,2,Conj(ZE(out1,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(in2,
                  j3))*ZA(in1,0)*ZP(out2,0) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(out1,j1))*ZV(in2,j1))
                  *(-(ZA(in1,0)*ZP(out2,0)) + ZA(in1,1)*ZP(out2,1))))/Sqrt(2);
               matrix.coeffRef(46+in1+in2*Ah::numberOfGenerations, 198+out1+out2*Se::numberOfGenerations) = temp;
               if (46+in1+in2*Ah::numberOfGenerations != 198+out1+out2*Se::numberOfGenerations) matrix.coeffRef(198+out1+out2*Se::numberOfGenerations, 46+in1+in2*Ah::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, hh}->{hh, hh}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<hh::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<hh::numberOfGenerations; ++out2) {
               const std::complex<double> temp = ((Sqr(g1) + Sqr(g2))*Sqrt2(in1,in2)*Sqrt2(
                  out1,out2)*(ZH(in1,1)*(ZH(in2,0)*(ZH(out1,1)*ZH(out2,0) + ZH(out1,0)*ZH(out2
                  ,1)) + ZH(in2,1)*(ZH(out1,0)*ZH(out2,0) - 3*ZH(out1,1)*ZH(out2,1))) + ZH(in1
                  ,0)*(ZH(in2,1)*(ZH(out1,1)*ZH(out2,0) + ZH(out1,0)*ZH(out2,1)) + ZH(in2,0)*(
                  -3*ZH(out1,0)*ZH(out2,0) + ZH(out1,1)*ZH(out2,1)))))/4.;
               matrix.coeffRef(52+in1+in2*hh::numberOfGenerations, 52+out1+out2*hh::numberOfGenerations) = temp;
               if (52+in1+in2*hh::numberOfGenerations != 52+out1+out2*hh::numberOfGenerations) matrix.coeffRef(52+out1+out2*hh::numberOfGenerations, 52+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, hh}->{Hpm, conj[Hpm]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<hh::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*(Sqrt2(in1,in2)*(ZH(in1,0)*(Sqr(g2)*ZH(
                  in2,1)*(ZP(out1,1)*ZP(out2,0) + ZP(out1,0)*ZP(out2,1)) + ZH(in2,0)*((Sqr(g1)
                  + Sqr(g2))*ZP(out1,0)*ZP(out2,0) + (-Sqr(g1) + Sqr(g2))*ZP(out1,1)*ZP(out2,1
                  ))) + ZH(in1,1)*(Sqr(g2)*ZH(in2,0)*(ZP(out1,1)*ZP(out2,0) + ZP(out1,0)*ZP(
                  out2,1)) + ZH(in2,1)*((-Sqr(g1) + Sqr(g2))*ZP(out1,0)*ZP(out2,0) + (Sqr(g1)
                  + Sqr(g2))*ZP(out1,1)*ZP(out2,1)))));
               matrix.coeffRef(52+in1+in2*hh::numberOfGenerations, 122+out1+out2*Hpm::numberOfGenerations) = temp;
               if (52+in1+in2*hh::numberOfGenerations != 122+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(122+out1+out2*Hpm::numberOfGenerations, 52+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, hh}->{Se, conj[Se]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<hh::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*(Sqrt2(in1,in2)*(4*(SUM(j3,0,2,Conj(ZE(
                  out1,3 + j3))*SUM(j2,0,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(out2,3 +
                  j2))) + SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(out1,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*
                  Ye(j1,j2)))*ZE(out2,j3)))*ZH(in1,0)*ZH(in2,0) + (g1 - g2)*(g1 + g2)*SUM(j1,0
                  ,2,Conj(ZE(out1,j1))*ZE(out2,j1))*(ZH(in1,0)*ZH(in2,0) - ZH(in1,1)*ZH(in2,1)
                  ) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,3 + j1))*ZE(out2,3 + j1))*(-(ZH(in1,0)
                  *ZH(in2,0)) + ZH(in1,1)*ZH(in2,1))));
               matrix.coeffRef(52+in1+in2*hh::numberOfGenerations, 210+out1+out2*Se::numberOfGenerations) = temp;
               if (52+in1+in2*hh::numberOfGenerations != 210+out1+out2*Se::numberOfGenerations) matrix.coeffRef(210+out1+out2*Se::numberOfGenerations, 52+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, hh}->{Sv, conj[Sv]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<hh::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*Delta(out1,out2)*
                  Sqrt2(in1,in2)*(ZH(in1,0)*ZH(in2,0) - ZH(in1,1)*ZH(in2,1)));
               matrix.coeffRef(52+in1+in2*hh::numberOfGenerations, 297+out1+out2*Sv::numberOfGenerations) = temp;
               if (52+in1+in2*hh::numberOfGenerations != 297+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(297+out1+out2*Sv::numberOfGenerations, 52+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, Hpm}->{hh, conj[Hpm]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-((((Sqr(g1) + Sqr(g2))*ZH(in1,0)*ZH(out1,0)
                  + (-Sqr(g1) + Sqr(g2))*ZH(in1,1)*ZH(out1,1))*ZP(in2,0) + Sqr(g2)*(ZH(in1,1)*
                  ZH(out1,0) + ZH(in1,0)*ZH(out1,1))*ZP(in2,1))*ZP(out2,0)) - (Sqr(g2)*(ZH(in1
                  ,1)*ZH(out1,0) + ZH(in1,0)*ZH(out1,1))*ZP(in2,0) + ((-Sqr(g1) + Sqr(g2))*ZH(
                  in1,0)*ZH(out1,0) + (Sqr(g1) + Sqr(g2))*ZH(in1,1)*ZH(out1,1))*ZP(in2,1))*ZP(
                  out2,1))/4.;
               matrix.coeffRef(56+in1+in2*hh::numberOfGenerations, 78+out1+out2*hh::numberOfGenerations) = temp;
               if (56+in1+in2*hh::numberOfGenerations != 78+out1+out2*hh::numberOfGenerations) matrix.coeffRef(78+out1+out2*hh::numberOfGenerations, 56+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, Hpm}->{Sv, conj[Se]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(out1,j2))*
                  SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(out2,j3))*ZH(in1,0)*ZP(in2,0) -
                  Sqr(g2)*SUM(j1,0,2,Conj(ZV(out1,j1))*ZE(out2,j1))*(ZH(in1,0)*ZP(in2,0) + ZH(
                  in1,1)*ZP(in2,1)))/(2.*Sqrt(2));
               matrix.coeffRef(56+in1+in2*hh::numberOfGenerations, 279+out1+out2*Sv::numberOfGenerations) = temp;
               if (56+in1+in2*hh::numberOfGenerations != 279+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(279+out1+out2*Sv::numberOfGenerations, 56+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, Se}->{hh, conj[Se]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-4*(SUM(j3,0,2,Conj(ZE(in2,3 + j3))*SUM(j2,0
                  ,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(out2,3 + j2))) + SUM(j3,0,2,SUM(
                  j2,0,2,Conj(ZE(in2,j2))*SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(out2,j3)))
                  *ZH(in1,0)*ZH(out1,0) - (g1 - g2)*(g1 + g2)*SUM(j1,0,2,Conj(ZE(in2,j1))*ZE(
                  out2,j1))*(ZH(in1,0)*ZH(out1,0) - ZH(in1,1)*ZH(out1,1)) + 2*Sqr(g1)*SUM(j1,0
                  ,2,Conj(ZE(in2,3 + j1))*ZE(out2,3 + j1))*(ZH(in1,0)*ZH(out1,0) - ZH(in1,1)*
                  ZH(out1,1)))/4.;
               matrix.coeffRef(60+in1+in2*hh::numberOfGenerations, 82+out1+out2*hh::numberOfGenerations) = temp;
               if (60+in1+in2*hh::numberOfGenerations != 82+out1+out2*hh::numberOfGenerations) matrix.coeffRef(82+out1+out2*hh::numberOfGenerations, 60+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, Se}->{conj[Hpm], conj[Sv]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(in2,j2))*SUM
                  (j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(out2,j3))*ZH(in1,0)*ZP(out1,0) - Sqr(
                  g2)*SUM(j1,0,2,Conj(ZE(in2,j1))*ZV(out2,j1))*(ZH(in1,0)*ZP(out1,0) + ZH(in1,
                  1)*ZP(out1,1)))/(2.*Sqrt(2));
               matrix.coeffRef(60+in1+in2*hh::numberOfGenerations, 322+out1+out2*Hpm::numberOfGenerations) = temp;
               if (60+in1+in2*hh::numberOfGenerations != 322+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(322+out1+out2*Hpm::numberOfGenerations, 60+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, Sv}->{hh, conj[Sv]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<hh::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*Delta(in2,out2)*(
                  ZH(in1,0)*ZH(out1,0) - ZH(in1,1)*ZH(out1,1)));
               matrix.coeffRef(72+in1+in2*hh::numberOfGenerations, 94+out1+out2*hh::numberOfGenerations) = temp;
               if (72+in1+in2*hh::numberOfGenerations != 94+out1+out2*hh::numberOfGenerations) matrix.coeffRef(94+out1+out2*hh::numberOfGenerations, 72+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, Sv}->{Hpm, conj[Se]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(in2,j2))*SUM
                  (j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(out2,j3))*ZH(in1,0)*ZP(out1,0) - Sqr(
                  g2)*SUM(j1,0,2,Conj(ZV(in2,j1))*ZE(out2,j1))*(ZH(in1,0)*ZP(out1,0) + ZH(in1,
                  1)*ZP(out1,1)))/(2.*Sqrt(2));
               matrix.coeffRef(72+in1+in2*hh::numberOfGenerations, 126+out1+out2*Hpm::numberOfGenerations) = temp;
               if (72+in1+in2*hh::numberOfGenerations != 126+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(126+out1+out2*Hpm::numberOfGenerations, 72+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, conj[Hpm]}->{Se, conj[Sv]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(out1,j2))*
                  SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(out2,j3))*ZH(in1,0)*ZP(in2,0) -
                  Sqr(g2)*SUM(j1,0,2,Conj(ZE(out1,j1))*ZV(out2,j1))*(ZH(in1,0)*ZP(in2,0) + ZH(
                  in1,1)*ZP(in2,1)))/(2.*Sqrt(2));
               matrix.coeffRef(78+in1+in2*hh::numberOfGenerations, 246+out1+out2*Se::numberOfGenerations) = temp;
               if (78+in1+in2*hh::numberOfGenerations != 246+out1+out2*Se::numberOfGenerations) matrix.coeffRef(246+out1+out2*Se::numberOfGenerations, 78+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, conj[Se]}->{Hpm, Sv}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(out2,j2))*
                  SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZE(in2,j3))*ZH(in1,0)*ZP(out1,0) -
                  Sqr(g2)*SUM(j1,0,2,Conj(ZV(out2,j1))*ZE(in2,j1))*(ZH(in1,0)*ZP(out1,0) + ZH(
                  in1,1)*ZP(out1,1)))/(2.*Sqrt(2));
               matrix.coeffRef(82+in1+in2*hh::numberOfGenerations, 116+out1+out2*Hpm::numberOfGenerations) = temp;
               if (82+in1+in2*hh::numberOfGenerations != 116+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(116+out1+out2*Hpm::numberOfGenerations, 82+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {hh, conj[Sv]}->{Se, conj[Hpm]}
   for (int in1=0; in1<hh::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (2*SUM(j3,0,2,SUM(j2,0,2,Conj(ZE(out1,j2))*
                  SUM(j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(in2,j3))*ZH(in1,0)*ZP(out2,0) -
                  Sqr(g2)*SUM(j1,0,2,Conj(ZE(out1,j1))*ZV(in2,j1))*(ZH(in1,0)*ZP(out2,0) + ZH(
                  in1,1)*ZP(out2,1)))/(2.*Sqrt(2));
               matrix.coeffRef(94+in1+in2*hh::numberOfGenerations, 198+out1+out2*Se::numberOfGenerations) = temp;
               if (94+in1+in2*hh::numberOfGenerations != 198+out1+out2*Se::numberOfGenerations) matrix.coeffRef(198+out1+out2*Se::numberOfGenerations, 94+in1+in2*hh::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, Hpm}->{conj[Hpm], conj[Hpm]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*Sqrt2(in1,in2)*
                  Sqrt2(out1,out2)*(-(ZP(in1,1)*(-2*ZP(in2,1)*ZP(out1,1)*ZP(out2,1) + ZP(in2,0
                  )*(ZP(out1,1)*ZP(out2,0) + ZP(out1,0)*ZP(out2,1)))) + ZP(in1,0)*(2*ZP(in2,0)
                  *ZP(out1,0)*ZP(out2,0) - ZP(in2,1)*(ZP(out1,1)*ZP(out2,0) + ZP(out1,0)*ZP(
                  out2,1)))));
               matrix.coeffRef(100+in1+in2*Hpm::numberOfGenerations, 306+out1+out2*Hpm::numberOfGenerations) = temp;
               if (100+in1+in2*Hpm::numberOfGenerations != 306+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(306+out1+out2*Hpm::numberOfGenerations, 100+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, Se}->{conj[Hpm], conj[Se]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-4*SUM(j3,0,2,Conj(ZE(in2,3 + j3))*SUM(j2,0,
                  2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(out2,3 + j2)))*ZP(in1,0)*ZP(out1,
                  0) - (Sqr(g1) + Sqr(g2))*SUM(j1,0,2,Conj(ZE(in2,j1))*ZE(out2,j1))*(ZP(in1,0)
                  *ZP(out1,0) - ZP(in1,1)*ZP(out1,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in2,3 +
                  j1))*ZE(out2,3 + j1))*(ZP(in1,0)*ZP(out1,0) - ZP(in1,1)*ZP(out1,1)))/4.;
               matrix.coeffRef(104+in1+in2*Hpm::numberOfGenerations, 310+out1+out2*Hpm::numberOfGenerations) = temp;
               if (104+in1+in2*Hpm::numberOfGenerations != 310+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(310+out1+out2*Hpm::numberOfGenerations, 104+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, Sv}->{conj[Hpm], conj[Sv]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -(SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(in2,j2))*SUM(
                  j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(out2,j3))*ZP(in1,0)*ZP(out1,0)) - ((g1
                   - g2)*(g1 + g2)*Delta(in2,out2)*(ZP(in1,0)*ZP(out1,0) - ZP(in1,1)*ZP(out1,1
                  )))/4.;
               matrix.coeffRef(116+in1+in2*Hpm::numberOfGenerations, 322+out1+out2*Hpm::numberOfGenerations) = temp;
               if (116+in1+in2*Hpm::numberOfGenerations != 322+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(322+out1+out2*Hpm::numberOfGenerations, 116+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, conj[Hpm]}->{Hpm, conj[Hpm]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Hpm::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = ((Sqr(g1) + Sqr(g2))*(ZP(in1,1)*(ZP(in2,0)*ZP
                  (out1,0)*ZP(out2,1) + ZP(in2,1)*(ZP(out1,0)*ZP(out2,0) - 2*ZP(out1,1)*ZP(
                  out2,1))) + ZP(in1,0)*(ZP(in2,1)*ZP(out1,1)*ZP(out2,0) + ZP(in2,0)*(-2*ZP(
                  out1,0)*ZP(out2,0) + ZP(out1,1)*ZP(out2,1)))))/4.;
               matrix.coeffRef(122+in1+in2*Hpm::numberOfGenerations, 122+out1+out2*Hpm::numberOfGenerations) = temp;
               if (122+in1+in2*Hpm::numberOfGenerations != 122+out1+out2*Hpm::numberOfGenerations) matrix.coeffRef(122+out1+out2*Hpm::numberOfGenerations, 122+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, conj[Hpm]}->{Se, conj[Se]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-4*SUM(j3,0,2,Conj(ZE(out1,3 + j3))*SUM(j2,0
                  ,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(out2,3 + j2)))*ZP(in1,0)*ZP(in2,
                  0) - (Sqr(g1) + Sqr(g2))*SUM(j1,0,2,Conj(ZE(out1,j1))*ZE(out2,j1))*(ZP(in1,0
                  )*ZP(in2,0) - ZP(in1,1)*ZP(in2,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,3 +
                  j1))*ZE(out2,3 + j1))*(ZP(in1,0)*ZP(in2,0) - ZP(in1,1)*ZP(in2,1)))/4.;
               matrix.coeffRef(122+in1+in2*Hpm::numberOfGenerations, 210+out1+out2*Se::numberOfGenerations) = temp;
               if (122+in1+in2*Hpm::numberOfGenerations != 210+out1+out2*Se::numberOfGenerations) matrix.coeffRef(210+out1+out2*Se::numberOfGenerations, 122+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, conj[Hpm]}->{Sv, conj[Sv]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Hpm::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -(SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(out1,j2))*SUM
                  (j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(out2,j3))*ZP(in1,0)*ZP(in2,0)) - ((g1
                   - g2)*(g1 + g2)*Delta(out1,out2)*(ZP(in1,0)*ZP(in2,0) - ZP(in1,1)*ZP(in2,1)
                  ))/4.;
               matrix.coeffRef(122+in1+in2*Hpm::numberOfGenerations, 297+out1+out2*Sv::numberOfGenerations) = temp;
               if (122+in1+in2*Hpm::numberOfGenerations != 297+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(297+out1+out2*Sv::numberOfGenerations, 122+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, conj[Se]}->{Se, conj[Hpm]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-4*SUM(j3,0,2,Conj(ZE(out1,3 + j3))*SUM(j2,0
                  ,2,SUM(j1,0,2,Conj(Ye(j3,j1))*Ye(j2,j1))*ZE(in2,3 + j2)))*ZP(in1,0)*ZP(out2,
                  0) - (Sqr(g1) + Sqr(g2))*SUM(j1,0,2,Conj(ZE(out1,j1))*ZE(in2,j1))*(ZP(in1,0)
                  *ZP(out2,0) - ZP(in1,1)*ZP(out2,1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,3 +
                  j1))*ZE(in2,3 + j1))*(ZP(in1,0)*ZP(out2,0) - ZP(in1,1)*ZP(out2,1)))/4.;
               matrix.coeffRef(126+in1+in2*Hpm::numberOfGenerations, 198+out1+out2*Se::numberOfGenerations) = temp;
               if (126+in1+in2*Hpm::numberOfGenerations != 198+out1+out2*Se::numberOfGenerations) matrix.coeffRef(198+out1+out2*Se::numberOfGenerations, 126+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Hpm, conj[Sv]}->{Sv, conj[Hpm]}
   for (int in1=0; in1<Hpm::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Hpm::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -(SUM(j3,0,2,SUM(j2,0,2,Conj(ZV(out1,j2))*SUM
                  (j1,0,2,Conj(Ye(j1,j3))*Ye(j1,j2)))*ZV(in2,j3))*ZP(in1,0)*ZP(out2,0)) - ((g1
                   - g2)*(g1 + g2)*Delta(in2,out1)*(ZP(in1,0)*ZP(out2,0) - ZP(in1,1)*ZP(out2,1
                  )))/4.;
               matrix.coeffRef(138+in1+in2*Hpm::numberOfGenerations, 273+out1+out2*Sv::numberOfGenerations) = temp;
               if (138+in1+in2*Hpm::numberOfGenerations != 273+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(273+out1+out2*Sv::numberOfGenerations, 138+in1+in2*Hpm::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Se, Se}->{conj[Se], conj[Se]}
   for (int in1=0; in1<Se::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.125*(Sqrt2(in1,in2)*Sqrt2(out1,out2)*(Sqr(
                  g1)*SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(out2,j1))*SUM(j2,0,2,Conj(ZE(in2,j2))*ZE(
                  out1,j2)) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(out2,j1))*SUM(j2,0,2,Conj
                  (ZE(in2,j2))*ZE(out1,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE(
                  out2,3 + j1))*SUM(j2,0,2,Conj(ZE(in2,j2))*ZE(out1,j2)) - 2*Sqr(g1)*SUM(j1,0,
                  2,Conj(ZE(in2,3 + j1))*ZE(out2,3 + j1))*(SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(out1
                  ,j2)) - 2*SUM(j2,0,2,Conj(ZE(in1,3 + j2))*ZE(out1,3 + j2))) + SUM(j1,0,2,
                  Conj(ZE(in2,j1))*ZE(out2,j1))*((Sqr(g1) + Sqr(g2))*SUM(j2,0,2,Conj(ZE(in1,j2
                  ))*ZE(out1,j2)) - 2*Sqr(g1)*SUM(j2,0,2,Conj(ZE(in1,3 + j2))*ZE(out1,3 + j2))
                  ) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(out2,j1))*SUM(j2,0,2,Conj(ZE(
                  in2,3 + j2))*ZE(out1,3 + j2)) + 4*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE
                  (out2,3 + j1))*SUM(j2,0,2,Conj(ZE(in2,3 + j2))*ZE(out1,3 + j2)) + Sqr(g1)*
                  SUM(j1,0,2,Conj(ZE(in2,j1))*ZE(out1,j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(out2
                  ,j2)) + Sqr(g2)*SUM(j1,0,2,Conj(ZE(in2,j1))*ZE(out1,j1))*SUM(j2,0,2,Conj(ZE(
                  in1,j2))*ZE(out2,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in2,3 + j1))*ZE(out1,3
                  + j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(out2,j2)) + Sqr(g1)*SUM(j1,0,2,Conj(ZE
                  (in1,j1))*ZE(out1,j1))*SUM(j2,0,2,Conj(ZE(in2,j2))*ZE(out2,j2)) + Sqr(g2)*
                  SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(out1,j1))*SUM(j2,0,2,Conj(ZE(in2,j2))*ZE(out2
                  ,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE(out1,3 + j1))*SUM(j2,0,
                  2,Conj(ZE(in2,j2))*ZE(out2,j2)) - 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in2,j1))*ZE(
                  out1,j1))*SUM(j2,0,2,Conj(ZE(in1,3 + j2))*ZE(out2,3 + j2)) + 4*Sqr(g1)*SUM(
                  j1,0,2,Conj(ZE(in2,3 + j1))*ZE(out1,3 + j1))*SUM(j2,0,2,Conj(ZE(in1,3 + j2))
                  *ZE(out2,3 + j2)) - 2*Sqr(g1)*(SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(out1,j1)) - 2*
                  SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE(out1,3 + j1)))*SUM(j2,0,2,Conj(ZE(in2,3 +
                  j2))*ZE(out2,3 + j2)) + 8*(SUM(j2,0,2,Conj(ZE(in2,j2))*SUM(j1,0,2,Ye(j1,j2)*
                  ZE(out2,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(in1,3 + j3))
                  )*ZE(out1,j4)) + SUM(j2,0,2,Conj(ZE(in1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(out2,3
                  + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(in2,3 + j3)))*ZE(out1,
                  j4)) + SUM(j2,0,2,Conj(ZE(in2,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(out1,3 + j1)))*
                  SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(in1,3 + j3)))*ZE(out2,j4)) +
                  SUM(j2,0,2,Conj(ZE(in1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(out1,3 + j1)))*SUM(j4,0,
                  2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(in2,3 + j3)))*ZE(out2,j4)))));
               matrix.coeffRef(144+in1+in2*Se::numberOfGenerations, 328+out1+out2*Se::numberOfGenerations) = temp;
               if (144+in1+in2*Se::numberOfGenerations != 328+out1+out2*Se::numberOfGenerations) matrix.coeffRef(328+out1+out2*Se::numberOfGenerations, 144+in1+in2*Se::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Se, Sv}->{conj[Se], conj[Sv]}
   for (int in1=0; in1<Se::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (Delta(in2,out2)*((-Sqr(g1) + Sqr(g2))*SUM(j1
                  ,0,2,Conj(ZE(in1,j1))*ZE(out1,j1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1
                  ))*ZE(out1,3 + j1))) - Sqr(g2)*(SUM(j1,0,2,Conj(ZE(in1,j1))*ZV(out2,j1))*SUM
                  (j2,0,2,Conj(ZV(in2,j2))*ZE(out1,j2)) + SUM(j1,0,2,Conj(ZV(in2,j1))*ZE(out1,
                  j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZV(out2,j2))) - 4*SUM(j2,0,2,Conj(ZV(in2,j2
                  ))*SUM(j1,0,2,Ye(j1,j2)*ZE(out1,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,
                  j4))*Conj(ZE(in1,3 + j3)))*ZV(out2,j4)))/4.;
               matrix.coeffRef(180+in1+in2*Se::numberOfGenerations, 364+out1+out2*Se::numberOfGenerations) = temp;
               if (180+in1+in2*Se::numberOfGenerations != 364+out1+out2*Se::numberOfGenerations) matrix.coeffRef(364+out1+out2*Se::numberOfGenerations, 180+in1+in2*Se::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Se, conj[Se]}->{Se, conj[Se]}
   for (int in1=0; in1<Se::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Se::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (-(Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(
                  out2,j1))*SUM(j2,0,2,Conj(ZE(out1,j2))*ZE(in2,j2))) - Sqr(g2)*SUM(j1,0,2,
                  Conj(ZE(in1,j1))*ZE(out2,j1))*SUM(j2,0,2,Conj(ZE(out1,j2))*ZE(in2,j2)) + 2*
                  Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE(out2,3 + j1))*SUM(j2,0,2,Conj(ZE(
                  out1,j2))*ZE(in2,j2)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,3 + j1))*ZE(out2,3
                   + j1))*(SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(in2,j2)) - 2*SUM(j2,0,2,Conj(ZE(in1,
                  3 + j2))*ZE(in2,3 + j2))) + SUM(j1,0,2,Conj(ZE(out1,j1))*ZE(out2,j1))*(-((
                  Sqr(g1) + Sqr(g2))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(in2,j2))) + 2*Sqr(g1)*SUM(
                  j2,0,2,Conj(ZE(in1,3 + j2))*ZE(in2,3 + j2))) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(
                  in1,j1))*ZE(out2,j1))*SUM(j2,0,2,Conj(ZE(out1,3 + j2))*ZE(in2,3 + j2)) - 4*
                  Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE(out2,3 + j1))*SUM(j2,0,2,Conj(ZE(
                  out1,3 + j2))*ZE(in2,3 + j2)) - Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,j1))*ZE(in2,
                  j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(out2,j2)) - Sqr(g2)*SUM(j1,0,2,Conj(ZE(
                  out1,j1))*ZE(in2,j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZE(out2,j2)) + 2*Sqr(g1)*
                  SUM(j1,0,2,Conj(ZE(out1,3 + j1))*ZE(in2,3 + j1))*SUM(j2,0,2,Conj(ZE(in1,j2))
                  *ZE(out2,j2)) - Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(in2,j1))*SUM(j2,0,2,
                  Conj(ZE(out1,j2))*ZE(out2,j2)) - Sqr(g2)*SUM(j1,0,2,Conj(ZE(in1,j1))*ZE(in2,
                  j1))*SUM(j2,0,2,Conj(ZE(out1,j2))*ZE(out2,j2)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(
                  ZE(in1,3 + j1))*ZE(in2,3 + j1))*SUM(j2,0,2,Conj(ZE(out1,j2))*ZE(out2,j2)) +
                  2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,j1))*ZE(in2,j1))*SUM(j2,0,2,Conj(ZE(in1,3
                  + j2))*ZE(out2,3 + j2)) - 4*Sqr(g1)*SUM(j1,0,2,Conj(ZE(out1,3 + j1))*ZE(in2,
                  3 + j1))*SUM(j2,0,2,Conj(ZE(in1,3 + j2))*ZE(out2,3 + j2)) + 2*Sqr(g1)*(SUM(
                  j1,0,2,Conj(ZE(in1,j1))*ZE(in2,j1)) - 2*SUM(j1,0,2,Conj(ZE(in1,3 + j1))*ZE(
                  in2,3 + j1)))*SUM(j2,0,2,Conj(ZE(out1,3 + j2))*ZE(out2,3 + j2)) - 8*(SUM(j2,
                  0,2,Conj(ZE(out1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(out2,3 + j1)))*SUM(j4,0,2,SUM(
                  j3,0,2,Conj(Ye(j3,j4))*Conj(ZE(in1,3 + j3)))*ZE(in2,j4)) + SUM(j2,0,2,Conj(
                  ZE(in1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(out2,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,
                  Conj(Ye(j3,j4))*Conj(ZE(out1,3 + j3)))*ZE(in2,j4)) + SUM(j2,0,2,Conj(ZE(out1
                  ,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(in2,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3
                  ,j4))*Conj(ZE(in1,3 + j3)))*ZE(out2,j4)) + SUM(j2,0,2,Conj(ZE(in1,j2))*SUM(
                  j1,0,2,Ye(j1,j2)*ZE(in2,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3,j4))*Conj
                  (ZE(out1,3 + j3)))*ZE(out2,j4))))/8.;
               matrix.coeffRef(210+in1+in2*Se::numberOfGenerations, 210+out1+out2*Se::numberOfGenerations) = temp;
               if (210+in1+in2*Se::numberOfGenerations != 210+out1+out2*Se::numberOfGenerations) matrix.coeffRef(210+out1+out2*Se::numberOfGenerations, 210+in1+in2*Se::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Se, conj[Se]}->{Sv, conj[Sv]}
   for (int in1=0; in1<Se::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Se::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (Delta(out1,out2)*((-Sqr(g1) + Sqr(g2))*SUM(
                  j1,0,2,Conj(ZE(in1,j1))*ZE(in2,j1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 +
                  j1))*ZE(in2,3 + j1))) - Sqr(g2)*(SUM(j1,0,2,Conj(ZE(in1,j1))*ZV(out2,j1))*
                  SUM(j2,0,2,Conj(ZV(out1,j2))*ZE(in2,j2)) + SUM(j1,0,2,Conj(ZV(out1,j1))*ZE(
                  in2,j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZV(out2,j2))) - 4*SUM(j2,0,2,Conj(ZV(
                  out1,j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(in2,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(
                  Ye(j3,j4))*Conj(ZE(in1,3 + j3)))*ZV(out2,j4)))/4.;
               matrix.coeffRef(210+in1+in2*Se::numberOfGenerations, 297+out1+out2*Sv::numberOfGenerations) = temp;
               if (210+in1+in2*Se::numberOfGenerations != 297+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(297+out1+out2*Sv::numberOfGenerations, 210+in1+in2*Se::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Se, conj[Sv]}->{Sv, conj[Se]}
   for (int in1=0; in1<Se::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Se::numberOfGenerations; ++out2) {
               const std::complex<double> temp = (Delta(in2,out1)*((-Sqr(g1) + Sqr(g2))*SUM(j1
                  ,0,2,Conj(ZE(in1,j1))*ZE(out2,j1)) + 2*Sqr(g1)*SUM(j1,0,2,Conj(ZE(in1,3 + j1
                  ))*ZE(out2,3 + j1))) - Sqr(g2)*(SUM(j1,0,2,Conj(ZE(in1,j1))*ZV(in2,j1))*SUM(
                  j2,0,2,Conj(ZV(out1,j2))*ZE(out2,j2)) + SUM(j1,0,2,Conj(ZV(out1,j1))*ZE(out2
                  ,j1))*SUM(j2,0,2,Conj(ZE(in1,j2))*ZV(in2,j2))) - 4*SUM(j2,0,2,Conj(ZV(out1,
                  j2))*SUM(j1,0,2,Ye(j1,j2)*ZE(out2,3 + j1)))*SUM(j4,0,2,SUM(j3,0,2,Conj(Ye(j3
                  ,j4))*Conj(ZE(in1,3 + j3)))*ZV(in2,j4)))/4.;
               matrix.coeffRef(246+in1+in2*Se::numberOfGenerations, 279+out1+out2*Sv::numberOfGenerations) = temp;
               if (246+in1+in2*Se::numberOfGenerations != 279+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(279+out1+out2*Sv::numberOfGenerations, 246+in1+in2*Se::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Sv, Sv}->{conj[Sv], conj[Sv]}
   for (int in1=0; in1<Sv::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*(Delta(in1,out2)*
                  Delta(in2,out1) + Delta(in1,out1)*Delta(in2,out2))*Sqrt2(in1,in2)*Sqrt2(out1
                  ,out2));
               matrix.coeffRef(264+in1+in2*Sv::numberOfGenerations, 382+out1+out2*Sv::numberOfGenerations) = temp;
               if (264+in1+in2*Sv::numberOfGenerations != 382+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(382+out1+out2*Sv::numberOfGenerations, 264+in1+in2*Sv::numberOfGenerations) = temp;
            }
         }
      }
   }

   // {Sv, conj[Sv]}->{Sv, conj[Sv]}
   for (int in1=0; in1<Sv::numberOfGenerations; ++in1) {
      for (int in2=0; in2<Sv::numberOfGenerations; ++in2) {
         for (int out1=0; out1<Sv::numberOfGenerations; ++out1) {
            for (int out2=0; out2<Sv::numberOfGenerations; ++out2) {
               const std::complex<double> temp = -0.25*((Sqr(g1) + Sqr(g2))*(Delta(in1,out2)*
                  Delta(in2,out1) + Delta(in1,in2)*Delta(out1,out2)));
               matrix.coeffRef(297+in1+in2*Sv::numberOfGenerations, 297+out1+out2*Sv::numberOfGenerations) = temp;
               if (297+in1+in2*Sv::numberOfGenerations != 297+out1+out2*Sv::numberOfGenerations) matrix.coeffRef(297+out1+out2*Sv::numberOfGenerations, 297+in1+in2*Sv::numberOfGenerations) = temp;
            }
         }
      }
   }

   // reinstate factor 1/(16*Pi) that was removed from temp values
   matrix = matrix.unaryExpr([](std::complex<double> const& el) { return oneOver16Pi*el; });

   const double best_eigenval = best_eigenvalue(matrix);
   return {is_unitarity_fulfilled(best_eigenval), model.get_scale(), best_eigenval, matrix};
}

} // namespace lowMSSM_unitarity
} // namespace flexiblesusy
