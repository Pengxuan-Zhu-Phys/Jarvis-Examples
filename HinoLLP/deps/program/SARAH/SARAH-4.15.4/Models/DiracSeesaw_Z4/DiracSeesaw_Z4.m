(* ::Package:: *)

Off[General::spell]

Model`Name = "DiracSeesaw_Z4";
Model`NameLaTeX = "Dirac Seesaw Model with $Z_4$ symmetry";
Model`Authors = "U. Patel, Z. Ahmed, L. Malhotra";
Model`Date = "2025-02-02";

(*Model Based on the work in arXiv: 2412.12267 *)
(*!!! A warning_ message like "Lagrange::ViolationGlobal: Warning! Global symmetry Z4 not conserved" during model loading can be safely ignored !!!*)

(*-------------------------------------------*)
(*   Particle Content*)
(*-------------------------------------------*)

Global[[1]] = {Z[4], Z4};
Global[[2]] = {U[1], U1L};

(* Charged under global symmetries *)
Z4t = Exp[2*Pi*\[ImaginaryI]/4];

(* Gauge Fields *)

Gauge[[1]] = { B,  U[1], hypercharge, g1, False, 1, 0};
Gauge[[2]] = {WB, SU[2],        left, g2,  True, 1, 0};
Gauge[[3]] = { G, SU[3],       color, g3, False, 1, 0};


(* Fermion Fields *)

FermionFields[[1]] = { q, 3,  {uL, dL},  1/6, 2,  3,  1, 0};  
FermionFields[[2]] = { l, 3,  {vL, eL}, -1/2, 2,  1,  1, 1};
FermionFields[[3]] = { d, 3,  conj[dR],  1/3, 1, -3,  1, 0};
FermionFields[[4]] = { u, 3,  conj[uR], -2/3, 1, -3,  1, 0};
FermionFields[[5]] = { e, 3,  conj[eR],    1, 1,  1,  1, -1};
FermionFields[[6]] = {vR, 3, conj[vR0],	   0, 1,  1, -1, -1};
FermionFields[[7]] = {NL, 3,       NL0,	   0, 1,  1,  1, 1};
FermionFields[[8]] = {fNR, 3, conj[NR0],	   0, 1,  1,  1, -1};

(* Scalar Sector *)

ScalarFields[[1]] = {  H, 1, {Hp, H0},  1/2, 2, 1,   1, 0};
ScalarFields[[2]] = {eta, 1,     eta0, 	  0, 1, 1,  -1, 0};
ScalarFields[[3]] = {rho, 1,     rho0, 	  0, 1, 1, Z4t, 0};
(*----------------------------------------------*)
(*   DEFINITION                                 *)
(*----------------------------------------------*)

NameOfStates={GaugeES, EWSB};

DEFINITION[GaugeES][Additional]= {
	{  LagHC, { AddHC ->  True}},
	{LagNoHC, { AddHC -> False}}
};
            
LagNoHC = -(-muH2 conj[H] . H + lamH/4 conj[H] . H . conj[H] . H +
	    muEta2 eta . eta + lamEta/4 eta . eta . eta . eta - 
	    muRho2 conj[rho] . rho  + lamRho/4 conj[rho] . rho . conj[rho] . rho + 
	    lamHET conj[H] . H . eta . eta + lamHRh conj[H] . H . conj[rho] . rho + lamRT eta . eta . conj[rho] . rho ) ;

LagHC = - ( Yd conj[H].d.q + Ye conj[H].e.l - Yu H.u.q 
	  - YL H.l.fNR + MN NL.fNR + YR NL.eta.vR - 
	  lam1 rho.rho.rho.rho - mu1 eta.rho.rho (*- test H . L . vR*)) ; (*changed + from - to YL*)
			  		  
RealScalars={eta};
(* Gauge Sector *)

DEFINITION[EWSB][GaugeSector] =
{ 
  {{VB,VWB[3]},{VP,VZ},ZZ},
  {{VWB[1],VWB[2]},{VWp,conj[VWp]},ZW}
};     
          	

(* ----- VEVs ---- *)

DEFINITION[EWSB][VEVs]= 
 {    {  H0,    {v, 1/Sqrt[2]}, {sigmaH, I/Sqrt[2]}, {phiH, 1/Sqrt[2]}},
      {rho0, {vrho, 1/Sqrt[2]}, {   chi, I/Sqrt[2]}, {rhoR, 1/Sqrt[2]}},
      {eta0, {veta, 1/Sqrt[2]}, {     0,         0}, {etaR, 1/Sqrt[2]}}
 };

DEFINITION[EWSB][MatterSector]=   
    {{                    {phiH,rhoR,etaR},                {hh,ZH}},
     {                        {sigmaH,chi},                {Ah,ZA}},
     {                  {{dL}, {conj[dR]}},   {{DL,Vd},   {DR,Ud}}},
     {                  {{uL}, {conj[uR]}},   {{UL,Vu},   {UR,Uu}}},
     {                  {{eL}, {conj[eR]}},   {{EL,Ve},   {ER,Ue}}},  
     { {{vL, NL0}, {conj[vR0], conj[NR0]}}, {{NFL,VNF}, {NFR,UNF}}}
    };

(*------------------------------------------------------*)
(* Dirac-Spinors *)
(*------------------------------------------------------*)


DEFINITION[EWSB][GaugeES]={
 Fd1 -> { dL,   0},
 Fd2 -> {  0,  dR},
 Fu1 -> { uL,   0},
 Fu2 -> {  0,  uR},
 Fe1 -> { eL,   0},
 Fe2 -> {  0,  eR},
 Fv  -> { vL,   0},
 FvR -> {  0, vR0},
 FnL -> {NL0,   0},
 FnR -> {  0, NR0}
 }

DEFINITION[EWSB][DiracSpinors]={
 Fd -> {  DL,  conj[DR]},
 Fe -> {  EL,  conj[ER]},
 Fu -> {  UL,  conj[UR]},
 Fv -> { NFL, conj[NFR]}
 };
