(* Using the SARAH generated template for parameters.m file for darkLR as a reference*)


ParameterDefinitions = {


(*----------------------------------------------------------------------------------------------------*)
(* ----------- Parameters already present in parameter.m and are required in Doublet LRSM ----------- *)
(*----------------------------------------------------------------------------------------------------*)

{aEWinv,{
     Description -> "inverse weak coupling constant at mZ",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     Value -> 137.035999679,
     LesHouches -> {SMINPUTS, 1},
     LaTeX -> "\\alpha^{-1}",
     OutputName -> aEWinv}},


{xiLR,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {DARKLR, 5},
     LaTeX -> "\\xi_{LR}",
     OutputName -> xiLR}},


{AlphaS,{
     Description -> "Alpha Strong",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     Value -> 0.119,
     LesHouches -> {SMINPUTS, 3},
     LaTeX -> "\\alpha_S",
     OutputName -> aS}},

{betaL,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {DARKLR, 10},
     LaTeX -> "{\\beta}_L",
     OutputName -> betl}},

{betaR,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {DARKLR, 14},
     LaTeX -> "{\\beta}_R",
     OutputName -> betr}},

{e,{
     Description -> "electric charge",
     Dependence -> None,
     DependenceNum -> 2*Sqrt[aEWinv^(-1)]*Sqrt[Pi],
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LaTeX -> "e",
     OutputName -> el}},

{g2,{
     Description -> "Left-Coupling",
     Dependence -> None,
     DependenceNum -> e*Csc[ThetaW],
     DependenceOptional -> e*Csc[ThetaW],
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {gauge, 2},
     LaTeX -> "g_2",
     OutputName -> g2}},

{g3,{
     Description -> "Strong-Coupling",
     Dependence -> None,
     DependenceNum -> 2*Sqrt[AlphaS]*Sqrt[Pi],
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {gauge, 3},
     LaTeX -> "g_3",
     OutputName -> g3}},

{gBL,{
     Description -> "B-L-Coupling", 
     Dependence -> None,         
     DependenceNum -> None,       
     DependenceOptional -> None,     
     DependenceSPheno -> None,
     GUTnormalization -> Sqrt[3/2],
     Real -> True,
     LesHouches -> {gauge, 4},
     LaTeX -> "g_{B}",
     OutputName -> gBL}},

{Gf,{
     Description -> "Fermi's constant",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     Value -> 0.0000116639,
     LesHouches -> {SMINPUTS, 2},
     LaTeX -> "G_f",
     OutputName -> Gf}},

{gR,{
     Description -> "LeftR-Coupling",  
     Dependence -> None,               
     DependenceNum -> None,          
     DependenceOptional -> None,       
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {GAUGE, 5},
     LaTeX -> "g_R",
     OutputName -> gR}},

{lam1,{
     Description -> "SM Higgs Selfcouplings",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {LRINPUT, 1},
     LaTeX -> "\\lambda_{SM}",
     OutputName -> LAM1}},

{lam3,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {LRINPUT, 4},
     LaTeX -> "\\lambda_3",
     OutputName -> LAM3}},

{lamL,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {DARKLR, 6},
     LaTeX -> "{\\lambda}_L",
     OutputName -> laml}},

{lamLR,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {DARKLR, 8},
     LaTeX -> "{\\lambda}_{LR}",
     OutputName -> lamlr}},

{lamR,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {DARKLR, 12},
     LaTeX -> "{\\lambda}_R",
     OutputName -> lamr}},

{mu12,{
     Description -> "SM Mu Parameter",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {MUPARS, 1},
     LaTeX -> "\\mu_{SM}",
     OutputName -> MU12}},

{muL2,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {MUPARS, 6},
     LaTeX -> "\\mu_L",
     OutputName -> mul2}},

{muR2,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {MUPARS, 8},
     LaTeX -> "\\mu_R",
     OutputName -> mur2}},

{PhiW,{
     Dependence -> None,                  
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> ArcCos[Sqrt[Abs[ZW[1, 1]]^2 + Abs[ZW[1, 2]]^2]],
     Real -> True,
     LesHouches -> PhiW,
     LaTeX -> "\\phi_W",
     OutputName -> PhiW}},

{ThetaW,{
     Description -> "Weinberg-Angle",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> ArcSin[Abs[ZZ[2, 1]]],
     Real -> True,
     LesHouches -> ThetaW,
     LaTeX -> "\\Theta_W",
     OutputName -> TW}},

{ThetaBL,{
     Description -> "BL-R mixing angle",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> ArcCos[Abs[ZZ[1, 1]/Cos[ArcSin[Abs[ZZ[2, 1]]]]]],
     Real -> True,
     LesHouches -> ThetaBL,
     LaTeX -> "\\Theta_{BL}",
     OutputName -> TBL}},

{ThetaZZp,{
     Description -> "Z-Z' mixing angle",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> ArcCos[Abs[ZZ[2, 2]/Cos[ArcSin[Abs[ZZ[2, 1]]]]]],
     Real -> True,
     LesHouches -> ThetaZZp,
     LaTeX -> "\\Theta_{ZZ'}",
     OutputName -> TZZp}},


{UC,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> CHMIX,
     LaTeX -> "Z^+",
     OutputName -> UC}},

{Ud,{
     Description -> "Right-Down-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> UDRMIX,
     LaTeX -> "U^d_R",
     OutputName -> ZDR}},

{Ue,{
     Description -> "Right-Lepton-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> UERMIX,
     LaTeX -> "U^e_R",
     OutputName -> ZER}},

{UP,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> AMIX,
     LaTeX -> "Z^{Ah}",
     OutputName -> UP}},

{Uu,{
     Description -> "Right-Up-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> UURMIX,
     LaTeX -> "U^u_R",
     OutputName -> ZUR}},

{v1,{ Description -> "Down-VEV",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {VEV, 1},
     LaTeX -> "v_1",
     OutputName -> v1}},

{v2,{ Description -> "Up-VEV",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {VEV, 2},
     LaTeX -> "v_2",
     OutputName -> v2}},

{Vd,{
     Description -> "Left-Down-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> UDLMIX,
     LaTeX -> "U^d_L",
     OutputName -> ZDL}},

{Ve,{
     Description -> "Left-Lepton-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> UELMIX,
     LaTeX -> "U^e_L",
     OutputName -> ZEL}},

{vHL,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {DARKLR, 30},
     LaTeX -> "v_{H_L}",
     OutputName -> vhl}},

{vHR,{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> {DARKLR, 32},
     LaTeX -> "v_{H_R}",
     OutputName -> vhr}},

{Vu,{
     Description -> "Left-Up-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> UULMIX,
     LaTeX -> "U^u_L",
     OutputName -> ZUL}},

{YDL,{
     Description -> "DeltaL-lLs",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> YDL,
     LaTeX -> "Y_{DL}",
     OutputName -> YDL}},

{YDR,{
     Description -> "DeltaR-lRs",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> YDR,
     LaTeX -> "Y_{DR}",
     OutputName -> YDR}},

{YL1,{
     Description -> "Lepton-Doublet Yukawa One",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> YL1,
     LaTeX -> "Y_{L1}",
     OutputName -> YL1}},

{YQ1,{
     Description -> "Quark-Doublet Yukawa One",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> YQ1,
     LaTeX -> "Y_{Q1}",
     OutputName -> YQ1}},

{YQ2,{
     Description -> "Quark-Doublet Yukawa Two",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> YQ2,
     LaTeX -> "Y_{Q2}",
     OutputName -> YQ2}},

{ZH,{
     Description -> "Scalar-Mixing-Matrix",
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> True,
     LesHouches -> SCALARMIX,
     LaTeX -> "Z^H",
     OutputName -> ZH}},

{ZW,{
     Description -> "W Mixing Matrix",
     Dependence -> {{Cos[PhiW]/Sqrt[2], Cos[PhiW]/Sqrt[2], -(Sin[PhiW]/Sqrt[2]), -(Sin[PhiW]/Sqrt[2])}, {((-I)*Cos[PhiW])/Sqrt[2], (I*Cos[PhiW])/Sqrt[2], (I*Sin[PhiW])/Sqrt[2], ((-I)*Sin[PhiW])/Sqrt[2]}, {Sin[PhiW]/Sqrt[2], Sin[PhiW]/Sqrt[2], Cos[PhiW]/Sqrt[2], Cos[PhiW]/Sqrt[2]}, {((-I)*Sin[PhiW])/Sqrt[2], (I*Sin[PhiW])/Sqrt[2], ((-I)*Cos[PhiW])/Sqrt[2], (I*Cos[PhiW])/Sqrt[2]}},
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> ZWMIX,
     LaTeX -> "Z^{W}",
     OutputName -> ZW}},

{ZZ,{
     Description -> "Photon-Z-Z' Mixing Matrix",                              
     Dependence -> (* {{Cos[ThetaBL] Cos[ThetaW], -Sin[ThetaBL] Sin[ThetaZZp] - 
   Cos[ThetaBL] Cos[ThetaZZp] Sin[ThetaW], -Cos[ThetaZZp] Sin[ThetaBL] +
   Cos[ThetaBL] Sin[ThetaZZp] Sin[ThetaW]}, {Sin[ThetaW],
  Cos[ThetaZZp] Cos[ThetaW], -Cos[ThetaW] Sin[ThetaZZp]}, {Cos[ThetaW] Sin[
    ThetaBL],
  Cos[ThetaBL] Sin[ThetaZZp] - Cos[ThetaZZp] Sin[ThetaBL] Sin[ThetaW],
  Cos[ThetaBL] Cos[ThetaZZp] + Sin[ThetaBL] Sin[ThetaZZp] Sin[ThetaW]}},
  *)None,
     DependenceNum -> None,                                                    
     DependenceSPheno -> None,                                                   
     Real -> True,
     LesHouches -> ZZMIX,
     LaTeX -> "Z^Z",
     OutputName -> ZZ}},

{Mass[VWLm],{
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches -> {DARKLR, 34},
     LaTeX -> "M_{VWLm}",
     OutputName -> Mvwlm}},
     
(*-----------------------------------------------------------------------------------------*)
(* ----------- Parameters added afterwards that are required in Doublet LRSM ----------- *)
(*-----------------------------------------------------------------------------------------*)

{YL2,{ 
     Description -> "Lepton-Doublet Yukawa Two",  
     Dependence -> None,
     DependenceNum -> None,
     DependenceOptional -> None,
     DependenceSPheno -> None,
     Real -> False,
     LesHouches ->  YL2,
     LaTeX -> "Y_{L2}",
     OutputName -> YL2}},
     
{MUS,{			
     OutputName -> MUS,
     LesHouches -> MUS,
     LaTeX -> "M_S"}},

{YRS, { 		
     LaTeX -> "Y_{RS}",
     OutputName -> YRS,
     Real -> False,
     LesHouches -> YRS}},

{PMNS, {LaTeX -> "U^V",        
        Dependence ->  None, 
        Value -> None, 
        LesHouches -> UVMIX,
        OutputName-> UV ,
        LesHouches -> PMNS}}
}
