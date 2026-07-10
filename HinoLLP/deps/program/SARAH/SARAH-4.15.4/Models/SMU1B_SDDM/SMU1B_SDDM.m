(* ::Package:: *)

Off[General::spell]

Model`Name = "SMU1B_SDDM";
Model`NameLaTeX ="Singlet-doublet Dark Matter in Gauge Theory of Baryons";
Model`Authors = "U. Patel, R.Sahu";
Model`Date = "2022-09-10";

(*Model Based on the work in arXiv: 2408.12424 *)

(*-------------------------------------------*)
(*   Particle Content*)
(*-------------------------------------------*)

(* Global Symmetries *)

Global[[1]] = {Z[2], Z2};

(* Gauge Fields *)

Gauge[[1]]={ B,  U[1], hypercharge, g1,False,1};
Gauge[[2]]={WB, SU[2],        left, g2, True,1};
Gauge[[3]]={ G, SU[3],       color, g3,False,1};
Gauge[[4]]={Bp,  U[1], leptophobic, gX,False,1};


(* Chiral Fields *)

FermionFields[[1]] = {q, 3, {uL, dL},   1/6, 2, 3, 1/3,1};  
FermionFields[[2]] = {l, 3, {vL, eL},  -1/2, 2, 1,   0,1};
FermionFields[[3]] = {d, 3, conj[dR],   1/3, 1,-3,-1/3,1};
FermionFields[[4]] = {u, 3, conj[uR],  -2/3, 1,-3,-1/3,1};
FermionFields[[5]] = {e, 3, conj[eR],     1, 1, 1,   0,1};



ScalarFields[[1]] = {H, 1, {Hp, H0},    1/2, 2,  1,  0,1};
ScalarFields[[2]] = {S, 1,       S0,      0, 1,  1, -3,1};

FermionFields[[7]]  = {PsiL, 1,             {psi1pL,psi10L},   1/2,   2,  1,   -1,-1};
FermionFields[[8]]  = {PsiR, 1, {conj[psi2pR],conj[psi20R]},  -1/2,  -2,  1,  -2,-1};
FermionFields[[9]]  = { XiL, 1,                       xiLp,     1,    1,  1,   2,-1};
FermionFields[[10]] = {ChiL, 1,                      chiL0,      0,    1,  1,   2,-1};
FermionFields[[11]] = { XiR, 1,                 conj[xiRp],    -1,    1,  1,   1, -1};
FermionFields[[12]] = {ChiR, 1,                conj[chiR0],      0,    1,  1,   1,-1};



(*----------------------------------------------*)
(*   DEFINITION                                 *)
(*----------------------------------------------*)

NameOfStates={GaugeES, EWSB};

(* ----- Before EWSB ----- *)

DEFINITION[GaugeES][LagrangianInput]= {
	{LagScalar, {AddHC->False}},
	{LagSMYuk, {AddHC->True}},
    {LagnewYuk, {AddHC->True}} 
};

LagScalar = -(mu2 conj[H] . H + L1 conj[H] . H . conj[H] . H + MS2 conj[S] . S + L3 conj[S] . S . conj[H] . H  + L2 conj[S] . S . conj[S] . S);

LagSMYuk =  -(Yd conj[H] . d . q + Ye conj[H] . e . l + Yu u . q . H);

LagnewYuk = -(Yh1 conj[PsiL] . conj[H] . conj[XiR]+ Yh2 PsiR . conj[H] . XiL + Yh3 conj[PsiL] . H . conj[ChiR] + Yh4 PsiR . H . ChiL + YPsi S . conj[PsiL] . conj[PsiR] + YXi S . XiL . XiR + YChii S . ChiL . ChiR);
			  		  

(* Gauge Sector *)

DEFINITION[EWSB][GaugeSector] =
{ 
  {{VB,VWB[3],VBp},{VP,VZ,VZp},ZZ},
  {{VWB[1],VWB[2]},{VWp,conj[VWp]},ZW}
};
        
(* ----- VEVs ---- *)

DEFINITION[EWSB][VEVs]= 
{    {H0, {vH, 1/Sqrt[2]}, {sigmaH, I/Sqrt[2]}, {phiH, 1/Sqrt[2]}},
     {S0, {vS, 1/Sqrt[2]}, {sigmaS, I/Sqrt[2]}, {phiS, 1/Sqrt[2]}}
};

(*Matter Sector structure taken from https://pure.mpg.de/pubman/faces/ViewItemOverviewPage.jsp?itemId=item_2104876 PDF Pg.No.59, eq 4.50*) 

DEFINITION[EWSB][MatterSector]=   
    {
     {{phiH,phiS},{hh,ZH}},
     {{sigmaH,sigmaS},{Ah,ZA}},  
     {{{dL}, {conj[dR]}}, {{DL,Vd}, {DR,Ud}}},            
     {{{uL}, {conj[uR]}}, {{UL,Vu}, {UR,Uu}}},
     {{{eL}, {conj[eR]}}, {{EL,Ve}, {ER,Ue}}},
     {{{psi1pL,xiLp},{conj[psi2pR],conj[xiRp]}}, {{pp,Zpp},{xxxx,Zx}}},
     {{{chiL0,psi10L},{conj[chiR0],conj[psi20R]}}, {{ccl,Zcl},{ccr,Zcr}}}
};  


(*------------------------------------------------------*)
(* Dirac-Spinors *)
(*------------------------------------------------------*)

DEFINITION[EWSB][DiracSpinors]={
 Fd    ->{  DL, conj[DR]},
 Fe    ->{  EL, conj[ER]},
 Fu    ->{  UL, conj[UR]},
 Fv    ->{  vL, 0},
 Fpx   ->{  pp, conj[xxxx]},
 Fcp   ->{  ccl, conj[ccr]}
};

DEFINITION[EWSB][GaugeES]={
 Fd1 ->{  FdL, 0},
 Fd2 ->{  0, FdR},
 Fu1 ->{  FuL, 0},
 Fu2 ->{  0, FuR},
 Fe1 ->{  FeL, 0},
 Fe2 ->{  0, FeR},
 Fpx1 ->{  Fpx1, 0},
 Fpx2 ->{  0, Fpx2},
 Fcp1 ->{  Fcp1, 0},
 Fcp2 ->{  0, Fcp2} 
 };

