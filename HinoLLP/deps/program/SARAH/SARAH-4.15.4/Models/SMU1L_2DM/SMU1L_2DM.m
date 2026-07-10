Off[General::spell]

Model`Name = "SMU1L_2DM";
Model`NameLaTeX ="Multipartite Dark Matter in Gauge Theory of Leptons";
Model`Authors = "U. Patel, Avnish";
Model`Date = "2023-07-17";

(*Model Based on the work in arXiv: 2407.06737 *)

(*-------------------------------------------*)
(*   Particle Content                        *)
(*-------------------------------------------*)
(* Global Symmetries *)
Global[[1]] = {Z[2], Z2};

(* Gauge Groups *)

Gauge[[1]]={L,    U[1], Lepton,      gl,False,1};
Gauge[[2]]={B,    U[1], hypercharge, g1,False,1};
Gauge[[3]]={WB,  SU[2], left,        g2, True,1};
Gauge[[4]]={G,   SU[3], color,       g3,False,1};


(*+++++++++++++++ Electric Charge+++++++++++*)
(*                  Q= T3+Y                 *)
(*+++++++++++++++ Electric Charge+++++++++++*)

(* Matter Fields *)

FermionFields[[1]] = {q, 3,  {uL,dL},          0, 1/6,  2,  3, 1};  
FermionFields[[2]] = {l, 3,  {vL,eL},          1,-1/2,  2,  1, 1};
FermionFields[[3]] = {d, 3, conj[dR],          0, 1/3,  1, -3, 1};
FermionFields[[4]] = {u, 3, conj[uR],          0,-2/3,  1, -3, 1};
FermionFields[[5]] = {e, 3, conj[eR],         -1,   1,  1,  1, 1};

(*    Exotic Fermions     *)
FermionFields[[6]]  = {Zta, 1,  ZtL,        -4/3,   0,  1,  1, -1};
FermionFields[[7]]  = {Eta, 1,  EtL,        -1/3,   0,  1,  1, -1};
FermionFields[[8]]  = {Chi1,1, conj[ChR1],  -2/3,   0,  1,  1, -1};
FermionFields[[9]]  = {Chi2,1, conj[ChR2],  -2/3,   0,  1,  1, -1};


FermionFields[[10]] = {Rho, 1,    RhL,       -3/2,    0,  1,  1, -1};

FermionFields[[11]] = {PsiL, 1, {pspL,ps0L},  3/2,  1/2,  2,  1, -1};
FermionFields[[12]] = {PsiR, 1, {conj[pspR],
				 conj[ps0R]}, 3/2, -1/2, -2,  1, -1};

FermionFields[[13]] = {SGL, 1, {{sg0/Sqrt[2], sgp},
				{sgm,-sg0/Sqrt[2]}}, -3/2, 0, 3,  1, -1};


(*   Scalars   *)
ScalarFields[[1]] =  {H,    1,   {Hp,H0},      0,  1/2,  2,  1,  1};
ScalarFields[[2]] =  {Phi1, 1,      phi1,      1,    0,  1,  1,  1};
ScalarFields[[3]] =  {Phi2, 1,      phi2,      2,    0,  1,  1,  1};

        
(*----------------------------------------------*)
(*   DEFINITION                                 *)
(*----------------------------------------------*)


NameOfStates={GaugeES,EWSB};

(* ----- Before EWSB ----- *)

DEFINITION[GaugeES][LagrangianInput]= {
  {LagHC,    {AddHC->True}},
  {LagNoHC, {AddHC->False}},
  {LagNoHCn,{AddHC->False}},
  {LagHCn,  {AddHC->True}}
};

LagHC   = -( Yd conj[H].d.q + Ye conj[H].e.l + Yu u.q.H
	    + mu12 conj[Phi2].Phi1.Phi1);

LagNoHC = - mu2 conj[H].H - 1/2 Lm conj[H].H.conj[H].H;


LagNoHCn = -( mP12 conj[Phi1].Phi1 + 1/2 Lm1 conj[Phi1].Phi1.conj[Phi1].Phi1
	      + mP22 conj[Phi2].Phi2 + 1/2 Lm2 conj[Phi2].Phi2.conj[Phi2].Phi2
	      + 1/2 Lm3 conj[Phi1].Phi1.conj[Phi2].Phi2
	      + 1/2 Lm4 conj[H].H.conj[Phi1].Phi1
	      + 1/2 Lm5 conj[H].H.conj[Phi2].Phi2 );

LagHCn   = -(Y1 H.PsiR.Rho + Y2 conj[H].Rho.PsiL 
	     + Y3 conj[H].SGL.PsiL + Y4 PsiR.SGL.H
	     + Y5 Chi1.Eta.Phi1  + Y6 Chi1.Zta.Phi2
	     + Y5a Chi2.Eta.Phi1 + Y6a Chi2.Zta.Phi2
	     + MPS PsiR.PsiL.conj[Phi1].conj[Phi2]
	     + MRH Rho.Rho.Phi1.Phi2
	     + MSG SGL.SGL.Phi1.Phi2);

(* + Y5 conj[H].PsiL.SGL*)

(* Delta[lef1,lef2] Delta[lef2b,lef3] *)

(* Gauge Sector *)

DEFINITION[EWSB][GaugeSector] ={ 
               {{VB,VWB[3],VL},{VP,VZ,VZP},ZZ},
	       {{VWB[1],VWB[2]},{VWp,conj[VWp]},ZW} };

(* ----- VEVs ---- *)

DEFINITION[EWSB][VEVs]= {
  {H0,     {v,  1/Sqrt[2]}, {Ah0, I/Sqrt[2]},{hh0, 1/Sqrt[2]}},
  {phi1,   {v1, 1/Sqrt[2]}, {Ah1, I/Sqrt[2]},{hh1, 1/Sqrt[2]}},
  {phi2,   {v2, 1/Sqrt[2]}, {Ah2, I/Sqrt[2]},{hh2, 1/Sqrt[2]}}
};
 

DEFINITION[EWSB][MatterSector]=   
  { {{hh0,hh1,hh2},{hh,ZH}},
    {{Ah0,Ah1,Ah2},{Ah,ZA}},
    {{{dL}, {conj[dR]}}, {{DL,Vd}, {DR,Ud}}},
    {{{uL}, {conj[uR]}}, {{UL,Vu}, {UR,Uu}}},
    {{{eL}, {conj[eR]}}, {{EL,Ve}, {ER,Ue}}},
    {{ps0L,conj[ps0R],sg0,RhL},{XAL,ZLA}},
    {{{pspL,sgp},{conj[pspR],sgm}},{{CL,Vc},{CR,Uc}}},
    {{{ZtL,EtL},{conj[ChR1],conj[ChR2]}},{{XL,ZL}, {XR,ZR}}}   (*i think it should be {conj[ChR2],conj[ChR1]}*)
  };  


(*------------------------------------------------------*)
(* Dirac-Spinors *)
(*------------------------------------------------------*)



DEFINITION[EWSB][DiracSpinors]={
 Fd  ->{DL,conj[DR]},
 Fe  ->{EL,conj[ER]},
 Fu  ->{UL,conj[UR]},
 Fv  ->{vL,0},
 Fx0 ->{XL,conj[XR]},
 Fy0 ->{XAL,conj[XAL]},
 Fc  ->{CL,conj[CR]}
};

DEFINITION[EWSB][GaugeES]={
 Fd1 ->{FdL, 0},
 Fd2 ->{0, FdR},
 Fu1 ->{Fu1, 0},
 Fu2 ->{0, Fu2},
 Fe1 ->{Fe1, 0},
 Fe2 ->{0, Fe2}
};
