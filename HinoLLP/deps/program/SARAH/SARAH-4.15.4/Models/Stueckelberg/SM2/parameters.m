ParameterDefinitions = { 

{g1,        { Description -> "Hypercharge-Coupling"}},

{g1p,  { LesHouches -> {gauge, 15},
         LaTeX -> "g_{Y B}",
         OutputName -> gYB }},
{gp1,  { LesHouches -> {gauge, 16},
         LaTeX -> "g_{B Y}",
         OutputName -> gBY}},
{gp,       {   Description -> "U(1)' Gauge Coupling"}},

{MZp,       {   Description -> "Z' mass"}},


{g2,        { Description -> "Left-Coupling"}},
{g3,        { Description -> "Strong-Coupling"}},    
{AlphaS,    {Description -> "Alpha Strong"}},	
{e,         { Description -> "electric charge"}},
{Gf,        { Description -> "Fermi's constant"}},
{aEWinv,    { Description -> "inverse weak coupling constant at mZ"}},
 

{Yu,        { Description -> "Up-Yukawa-Coupling"   }},
{Yd,        { Description -> "Down-Yukawa-Coupling"}},
{Ye,        { Description -> "Lepton-Yukawa-Coupling"}},
                                                                           
{\[Lambda],  { Description -> "SM Higgs Selfcouplings"}},
{v,          { Description -> "EW-VEV",
               DependenceNum -> Sqrt[4*Mass[VWm]^2/(g2^2)],
               DependenceSPheno -> None  }},

{vS,         { Description -> "Singlet-VEV"}},

(*{ThetaW,    { Description -> "Weinberg-Angle"}},*)



(* This definition is approximate for this model. We don't need it except for a few places *)
{ThetaW,{ Description -> "Weinberg-Angle",
             LaTeX -> "\\Theta_W",
             Real ->True,
 (*            DependenceNum -> ArcCos[g2/Sqrt[g1^2+g2^2]], *)
             DependenceNum -> ArcSin[Sqrt[1 - Mass[VWm]^2/Mass[VZ]^2]],
             DependenceSPheno -> ArcSin[Abs[ZZ[1,1]]],
 (*            Value -> 0.511621, *)
             OutputName-> TW, 
             LesHouches -> None      }},
{ThetaWp,  { Description -> "Theta'", DependenceNum -> None  }},

(*{ZZ, {Description ->   "Photon-Z-Z' Mixing Matrix"}},*)

{ZZ,{ Description -> "Photon-Z-Z' Mixing Matrix",
      Dependence -> None,
      Real ->True,
      LaTeX -> "Z^{\\gamma Z Z'}",
      LesHouches -> None,
      OutputName -> ZZ }},
(***** Final, correct version, just not for this model ***)

(*
{ZZ,{ Description -> "Photon-Z-Z' Mixing Matrix",
       Dependence -> {{Sin[ThetaW], Cos[ThetaW], 0}, {Cos[ThetaW] Cos[ThetaWp], -Cos[ThetaWp] Sin[ThetaW], Sin[ThetaWp]}, {-Cos[ThetaW] Sin[ThetaWp], Sin[ThetaW] Sin[ThetaWp], Cos[ThetaWp]}},
      Real ->True,
      LaTeX -> "Z^{\\gamma Z Z'}",
      LesHouches -> None,
      OutputName -> ZZ }},

*)

      (*{{Cos[ThetaW], Sin[ThetaW], 0}, {-Cos[ThetaWp] Sin[ThetaW], 
  Cos[ThetaW] Cos[ThetaWp], 
  Sin[ThetaWp]}, {Sin[ThetaW] Sin[ThetaWp], -Cos[ThetaW] Sin[ThetaWp],
   Cos[ThetaWp]}}, *)
      
(*
{ZZ,{ Description -> "Photon-Z-Z' Mixing Matrix",
       Dependence ->   {{Cos[ThetaW] Cos[ThetaWp], -Cos[ThetaWp] Sin[ThetaW], -Sin[ThetaWp]}, {Sin[ThetaW], Cos[ThetaW], 
  0}, {Cos[ThetaW] Sin[ThetaWp], -Sin[ThetaW] Sin[ThetaWp], 
  Cos[ThetaWp]}},
       Real ->True,
       LaTeX -> "Z^{\\gamma Z Z'}",
       LesHouches -> None,
       OutputName -> ZZ }},
*)


{ZW, {Description -> "W Mixing Matrix"}},
 
{mu2,         { Description -> "SM Mu Parameter"}},
{mH2,        { Description -> "SM Higgs Mass Parameter"}},
      
{Vu,        {Description ->"Left-Up-Mixing-Matrix"}},
{Vd,        {Description ->"Left-Down-Mixing-Matrix"}},
{Uu,        {Description ->"Right-Up-Mixing-Matrix"}},
{Ud,        {Description ->"Right-Down-Mixing-Matrix"}}, 
{Ve,        {Description ->"Left-Lepton-Mixing-Matrix"}},
{Ue,        {Description ->"Right-Lepton-Mixing-Matrix"}},

{M2a, {LaTeX -> "m_{2}",
          Real -> True,
          LesHouches->{HMIX,200},
          OutputName ->  M2a}},

{M1a, {LaTeX -> "m_{1}",
          Real -> True,
          LesHouches->{HMIX,11},
          OutputName ->  M1a}},

{M2a2, {LaTeX -> "m^{2}_{2} ",
           Real -> True,
           LesHouches->None,
           OutputName ->  M2a2,
           Dependence->M2a^2}},

{M1a2, {LaTeX -> "m^{2}_{1} ",
           Real -> True,
           LesHouches->None,
           OutputName ->  M1a2,
           Dependence->M1a^2}},

{ZH,        { Description->"Scalar-Mixing-Matrix",
               Dependence -> None,
               DependenceOptional -> None,
               DependenceNum -> None   }},
{ZA,        { Description->"Pseudo-Scalar-Mixing-Matrix",
                Dependence -> None,
               DependenceOptional -> None,
               DependenceNum -> None   }}
 }; 
 

