(* ::Package:: *)

OnlyLowEnergySPheno = True;

MINPAR={{1, gRinput},
        {3, vHRinput},
        {4, vHLinput},
        {6, TanBeta},
        {7, muL2INPUT},
        {8, muR2INPUT},
        {10, lam1INPUT},
        {11, lam3INPUT},
        {23, lamLINPUT},
        {24, lamRINPUT},
        {25, lamLRINPUT},
        {26, betaLINPUT},
        {27, betaRINPUT},
        {30, xiLRINPUT}
        };


ParametersToSolveTadpoles = {mu12, lam3, muL2, muR2};

DEFINITION[MatchingConditions]= {
 {g3, g3SM},
 {g2, g2SM},
 {gR, gRinput},
 {gBL, (g1SM*gR)/Sqrt[-g1SM^2 + gR^2]},
 {vHR, vHRinput},
 {vHL, vHLinput},
 {v2, TanBeta*Sqrt[vSM^2 - vHL^2]/Sqrt[1 + TanBeta^2]},
 {v1, v2/TanBeta},
 {YQ1, Transpose[YuSM]*vSM/v2},
 {YL1, Transpose[YeSM]*vSM/v2}
 };


BoundaryLowScaleInput={
 {muL2,muL2INPUT},
 {muR2,muR2INPUT},
 {lam1, lam1INPUT},
 {lam3, lam3INPUT},
 {lamL, lamLINPUT},
 {lamR, lamRINPUT},
 {lamLR, lamLRINPUT},
 {betaL, betaLINPUT},
 {betaR, betaRINPUT},
 {MUS, LHInput[MUS]},
 {YRS, LHInput[YRS]},
 {xiLR, xiLRINPUT}
 };



ListDecayParticles = {Fu,Fe,Fd,hh,Fv,VZ,VZR,Hpm,Ah,VWLm,VWRm};
ListDecayParticles3B = {{Fu,"Fu.f90"},{Fe,"Fe.f90"},{Fd,"Fd.f90"},{Fv,"Fv.f90"}};

(*
This default point works with a renormalization scale of 1 TeV.
Note that this point merely gives a valid spectrum, it does not feature,
e.g., correct Higgs masses.
*)

DefaultInputValues ={gRinput -> 0.5,
        vHRinput -> 5000,
        vHLinput -> 5,
        TanBeta -> 10,
        muL2INPUT -> 100,
        muR2INPUT -> 100,
        lam1INPUT -> 0.13,
        lam3INPUT -> 0.0 ,
        lamLINPUT -> 0.1,
        lamRINPUT -> 0.005,
        lamLRINPUT -> 0.0,
        betaLINPUT -> 0.2,
        betaRINPUT -> 0.0,
        MUSINPUT[a_,a_] -> 1000000,
        YRSINPUT[a_,a_] -> 0.01,
        xiLRINPUT -> 0.0
                     };
                     
(* loop decays not supported for this model *)                     
SetOptions[MakeSPheno, IncludeLoopDecays -> False];
