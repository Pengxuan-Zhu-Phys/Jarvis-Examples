(* ::Package:: *)

Off[General::spell]

Model`Name = "doubletLR";
Model`NameLaTeX ="Left-Right Symmetric Model with extra sterile neutrino and Higgs sector including a bidoublet and two doublets";
Model`Authors = "U.Patel, P. Sahu";
Model`Date = "2024-03-08";

(* Basen on the model in work: 2310.09337 *)
(* loop decays not supported for this model *)
(* !!! A warning_ message like "Solve::nongen: There may be values of the parameters for which some or all solutions are not valid." while running MakeSpheno[] can be safely ignored. !!!*)

(*-------------------------------------------*)
(*   Particle Content*)
(*-------------------------------------------*)

(* Gauge Groups *)

Gauge[[1]]={B,   U[1], bminl,       gBL,False, 0};
Gauge[[2]]={WL, SU[2], left,        g2,True, 0};
Gauge[[3]]={WR, SU[2], right,       gR,True, 0};
Gauge[[4]]={G,  SU[3], color,       g3,False, 0};


(* Matter Fields: Using Q=T3L+T3R+QBL)*)

FermionFields[[1]] = {QLbar, 3, {conj[uL], conj[dL]},        -1/6, -2,  1, -3};
FermionFields[[2]] = {LLbar, 3, {conj[nuL], conj[eL]},        1/2, -2,  1,  1};
FermionFields[[3]] = {QR,  3, {uR,  dR},                      1/6,  1,  2,  3};
FermionFields[[4]] = {LR,  3, {nuR, eR},                     -1/2,  1,  2,  1};
FermionFields[[5]] = {SL,  3, sL,                     	        0,  1,  1,  1};


ScalarFields[[1]]  = {Phi, 1, {{H0, Hp},{Hm, HPrime0}},         0,  2, -2,  1};
ScalarFields[[4]]  = {HL,      1, {hLp, hL0},                 1/2,  2,  1,  1};
ScalarFields[[5]]  = {HR,      1, {hRp, hR0},                 1/2,  1,  2,  1};


(*----------------------------------------------*)
(*   DEFINITION                                 *)
(*----------------------------------------------*)

NameOfStates={GaugeES, EWSB};

(* ----- Before EWSB ----- *)

DEFINITION[GaugeES][LagrangianInput]= {
	{LagHC, {AddHC->True}},
	{LagNoHC,{AddHC->False}}};


(*Contractions*)

contraction1=Delta[rig1,rig2] Delta[lef2,lef1];
contraction2=Delta[rig1,rig2] Delta[lef2,lef1] Delta[rig3,rig4] Delta[lef4,lef3];
contraction3=epsTensor[lef2,lef1] epsTensor[rig2,rig1] epsTensor[rig4,rig3] epsTensor[lef4,lef3];
(*Contractions end*)


LagNoHC = -( mu12 contraction1 Phi.conj[Phi]
            + muL2 conj[HL].HL + muR2 conj[HR].HR
          + lam1 contraction2 Phi.conj[Phi].Phi.conj[Phi]
          + lam3 contraction3 conj[Phi].conj[Phi].Phi.Phi
          + lamL conj[HL].HL.conj[HL].HL + lamR conj[HR].HR.conj[HR].HR
          + lamLR conj[HL].HL.conj[HR].HR
          + betaL conj[HL].HL.conj[Phi].Phi + betaR conj[HR].HR.conj[Phi].Phi
          );



LagHC = - ( YL1 Phi.LLbar.LR                    
          + YL2 conj[Phi].LLbar.LR  		
          + YQ1 Phi.QLbar.QR 			
          + YQ2 conj[Phi].QLbar.QR 		
          + xiLR HR.Phi.conj[HL]
          + MUS/2 SL.SL				
          + YRS conj[SL].HR.LR
          );


(* Gauge Sector *)
DEFINITION[EWSB][GaugeSector] =
{ {{VB,VWL[3],VWR[3]},{VP,VZ,VZR},ZZ},
  {{VWL[1],VWL[2],VWR[1],VWR[2]},{VWLm,conj[VWLm],VWRm,conj[VWRm]},ZW} };

(* ----- VEVs ---- *)
DEFINITION[EWSB][VEVs]={
{H0,      {v1, 1/Sqrt[2]},
                     {sigmaH10, I/Sqrt[2]},{phiH10, 1/Sqrt[2]}},
{HPrime0, {v2, 1/Sqrt[2]},
                     {sigmaH20, I/Sqrt[2]},{phiH20,1/Sqrt[2]}},
{hL0,     {vHL, 1/Sqrt[2]},
                     {sigmaHL, I/Sqrt[2]},{phiHL, 1/Sqrt[2]}},
{hR0,     {vHR, 1/Sqrt[2]},
                     {sigmaHR, I/Sqrt[2]},{phiHR,1/Sqrt[2]}}
                     };

DEFINITION[EWSB][MatterSector]=
    {
     {{phiH10,phiH20,phiHL,phiHR},{hh,ZH}},           
     {{sigmaH10,sigmaH20,sigmaHL,sigmaHR},{Ah,UP}},     
     {{Hm,conj[Hp],conj[hLp],conj[hRp]},{Hpm,UC}},      
     {{{dL}, {conj[dR]}}, {{DL,Vd}, {DR,Ud}}},           
     {{{uL}, {conj[uR]}}, {{UL,Vu}, {UR,Uu}}},         
     {{{eL}, {conj[eR]}}, {{EL,Ve}, {ER,Ue}}},
     {{nuL, conj[nuR],sL},{FV,PMNS}}                 
     };


(*------------------------------------------------------*)
(* Dirac-Spinors *)
(*------------------------------------------------------*)
DEFINITION[GaugeES][DiracSpinors]={
  Fd1 -> {dL, 0},
  Fd2 -> {0, dR},
  Fu1 -> {uL, 0},
  Fu2 -> {0, uR},
  Fe1 -> {eL, 0},
  Fe2 -> {0, eR},
  Fv1 -> {nuL,0},
  Fv2 -> {0,nuR},
  FS  -> {sL,conj[sL]}       
  };

DEFINITION[EWSB][DiracSpinors]={
 Fd ->{  DL, conj[DR]},
 Fe ->{  EL, conj[ER]},
 Fu ->{  UL, conj[UR]},
 Fv ->{  FV, conj[FV]}
 };
