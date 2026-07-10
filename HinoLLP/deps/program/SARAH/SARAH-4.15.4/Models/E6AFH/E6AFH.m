Off[General::spell]

Model`Name = "E6AFH";
Model`NameLaTeX ="E6AFH";
Model`Authors = "M. Goodsell";
Model`Date = "2023-08-29";

SetOptions[MakeAll,IncludeCalcHep->False,IncludeWHIZARD->False];

(*-------------------------------------------*)
(*   Particle Content*)
(*-------------------------------------------*)

(* Global symmetries *)

Global[[1]] = {Z[2],RParity};
RpM = {-1,-1,1};
RpP = {1,1,-1};

(* Vector Superfields *)

Gauge[[1]]={B,   U[1], hypercharge, g1,False,RpM};
Gauge[[2]]={WB, SU[2], left,        g2,True, RpM};
Gauge[[3]]={G,  SU[3], color,       g3,False,RpM};
Gauge[[4]]={Bp,  U[1], Ncharge,    gN,False,RpM};

(* Chiral Superfields *)

SuperFields[[1]] = {q, 3, {uL,  dL},     1/6, 2, 3, -2/5, RpM};  
SuperFields[[2]] = {l, 3, {vL,  eL},    -1/2, 2, 1, -4/5, RpM};
SuperFields[[3]] = {Xd,1, {Xd0, Xdm},   -1/2, 2, 1, -4/5, RpM};
SuperFields[[4]] = {Xu,1, {Xup, Xu0},    1/2, 2, 1,  4/5, RpM};

SuperFields[[5]] = {d, 3, conj[dR],    1/3, 1, -3, -4/5, RpM};
SuperFields[[6]] = {u, 3, conj[uR],   -2/3, 1, -3, -2/5, RpM};
SuperFields[[7]] = {e, 3, conj[eR],      1, 1,  1, -2/5, RpM};
SuperFields[[8]] = {s, 1, sR,     0, 1,  1, -2, RpP};



(* Higgses *)

SuperFields[[9]] = {Hd, 1, {Hd0, Hdm},  -1/2, 2, 1, 6/5, RpP};
SuperFields[[10]] = {Hu, 1, {Hup, Hu0},   1/2, 2, 1, 4/5, RpP};

(* Spectator Higgses -> become like neutrinos *)

SuperFields[[11]] = {H1I, 2, {H1I0, H1Im},  -1/2, 2, 1, 6/5, RpM};
SuperFields[[12]] = {H2I, 2, {H2Ip, H2I0},   1/2, 2, 1, 4/5, RpM};



SuperFields[[13]] = {Dx, 3, DxL,  -1/3, 1, 3, 4/5, RpP};
SuperFields[[14]] = {Dxbar, 3, conj[DxbarR],  1/3, 1, -3, 6/5, RpP};

SuperFields[[15]] = {sp, 1, sP,     0, 1,  1, -2, RpM}; (* Spectator singlets *)
SuperFields[[16]] = {sm, 1, sM,     0, 1,  1, -2, RpM}; (* Spectator singlets *)

SuperFields[[17]] = {phi, 1, Phi, 0, 1, 1, 1, RpM};
SuperFields[[18]] = {phib, 1, PhiB, 0, 1, 1, -1, RpM};


NoU1Mixing=False;
AddMixedSofts = False;

(*------------------------------------------------------*)
(*Z2H exact Superpotential *)
(*------------------------------------------------------*)

SuperPotential = Yu u.q.Hu - Yd d.q.Hd - Ye e.l.Hd + \[Mu] Xu.Xd + \[Lambda] s.Hu.Hd + \[Lambda]12 s.H2I.H1I + \[Kappa] s.Dx.Dxbar +  \[Mu]p phi.phib  + gQL Dx.q.q + gQR Dxbar.d.u+Yx e.Xd.Hd + \[Lambda]5 sm.Hu.H1I + \[Lambda]6 sp.H2I.Hd;



(*
SuperPotential = Yu u.q.Hu - Yd d.q.Hd - Ye e.l.Hd + \[Lambda] s.Hu.Hd + \[Lambda]p sp.Hu.Hd + \[Lambda]12 s.H2I.H1I + \[Lambda]p12 sp.H2I.H1I + \
+ \[Kappa] s.Dx.Dxbar + \[Kappa]p sp.Dx.Dxbar + \[Mu]Pr Hpbar.Hp + gQL Dx.q.q + gQR Dxbar.d.u;
*)
(*-------------------------------------------*)
(* Integrate Out or Delete Particles         *)
(*-------------------------------------------*)

IntegrateOut={};
DeleteParticles={};


(*----------------------------------------------*)
(*   ROTATIONS                                  *)
(*----------------------------------------------*)

NameOfStates={GaugeES, EWSB};

(* ----- Before EWSB ----- *)

(* Gauge Sector *)

DEFINITION[EWSB][GaugeSector] =
{ 
   {{VB,VWB[3],VBp},{VP,VZ,VZp},ZZ},
  {{VWB[1],VWB[2]},{VWm,conj[VWm]},ZW},
  {{fWB[1],fWB[2],fWB[3]},{fWm,fWp,fW0},ZfW}
};      
          	

(* ----- VEVs ---- *)

DEFINITION[EWSB][VEVs]= 
  { {SHd0, {vd, 1/Sqrt[2]}, {sigmad, \[ImaginaryI]/Sqrt[2]},{phid,1/Sqrt[2]}},
    {SHu0, {vu, 1/Sqrt[2]}, {sigmau, \[ImaginaryI]/Sqrt[2]},{phiu,1/Sqrt[2]}},
    {SsR,  {vs, 1/Sqrt[2]}, {sigmaS, \[ImaginaryI]/Sqrt[2]},{phiS,1/Sqrt[2]}}  
};


 
(* ---- Mixings ---- *)

DEFINITION[EWSB][MatterSector]= 
{    {{{FdL},{conj[FdR]}},{{FDL,ZDL},{FDR,ZDR}}},
     {{{FuL},{conj[FuR]}},{{FUL,ZUL},{FUR,ZUR}}},
     {{SdL, SdR}, {Sd, ZD}},
     {{SvL,SXd0,conj[SXu0]}, {Sv, ZV}},
     {{SuL, SuR}, {Su, ZU}},
     {{phid, phiu, phiS}, {hh, ZH}},
     {{sigmad, sigmau, sigmaS}, {Ah, ZA}},
     {{SHdm,conj[SHup]},{Hpm,ZP}},
     {{fB, fW0, FHd0, FHu0, FsR, fBp}, {L0, ZN}}, 
     {{{fWm, FHdm}, {fWp, FHup}}, {{Lm,UM}, {Lp,UP}}}, 
     {{SeL,SeR,SXdm,conj[SXup]}, {Se, ZE}},
     {{conj[SsP],SsM,conj[SH1I0],SH2I0,conj[SPhi],SPhiB},{SHI0,ZHI}},
     {{SH1Im,conj[SH2Ip]},{SHIp,ZIP}},
     {{{FH1Im},{FH2Ip}},{{FCL,ZCL},{FCR,ZCR}}},
     {{{FH2I0,FsM,FPhi},{FH1I0,FsP,FPhiB}},{{FPvL, UVL},{FPvR,UVR}}},
     {{SDxL, SDxbarR}, {SDX, ZDX}},
     {{{FeL,FXdm},{conj[FeR],FXup}},{{FEL,ZEL},{FER,ZER}}},
     (*{{{FXd0},{FXu0}},{{FPvL, UVL},{FPvR,UVR}}}, *)
     {{{FDxL},{conj[FDxbarR]}},{{FDXL,ZDXL},{FDXR,ZDXR}}}     
}; 
       
DEFINITION[EWSB][Phases]= 
   {    {fG, PhaseGlu}
}; 

DEFINITION[EWSB][DiracSpinors]={
 Fd -> {FDL, conj[FDR]},
 Fe -> {FEL, conj[FER]},
 Fu -> {FUL, conj[FUR]},
 Fv -> {FvL, 0},
 ChiP -> {FPvL, conj[FPvR]},
 (*ChiI -> {FPIL,conj[FPIR]},*)
    ChaP -> {FCL,conj[FCR]},
    ChiI -> {FXd0,conj[FXu0]},
 Chi -> {L0, conj[L0]},
 Cha -> {Lm, conj[Lp]},
 Glu -> {fG, conj[fG]},
 FDX -> {FDXL, conj[FDXR]}
};	
