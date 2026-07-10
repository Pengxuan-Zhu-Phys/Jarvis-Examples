(* ::Package:: *)

ParameterDefinitions = { 

{g1,        {Description -> "Hypercharge-Coupling"}},
{gX1,       {Description -> "Mixed Gauge Coupling 2"}},
{g1X,       {Description -> "Mixed Gauge Coupling 1"}},
{gX,        {Description -> "B-L-Coupling",
		                    OutputName -> gBL}},
(*{MZp,       { Description -> "Z' mass"}},*)
{g2,        { Description -> "Left-Coupling"}},
{g3,        { Description -> "Strong-Coupling"}},    
{AlphaS,    { Description -> "Alpha Strong"}},	
{e,         { Description -> "electric charge"}},
{Gf,        { Description -> "Fermi's constant"}},
{aEWinv,    { Description -> "inverse weak coupling constant at mZ"}},
 

{Yu,        { Description -> "Up-Yukawa-Coupling",
			 DependenceNum ->  Sqrt[2]/vH* {{Mass[Fu,1],0,0},
             									{0, Mass[Fu,2],0},
             									{0, 0, Mass[Fu,3]}}}}, 
             									
{Yd,        { Description -> "Down-Yukawa-Coupling",
			  DependenceNum ->  Sqrt[2]/vH* {{Mass[Fd,1],0,0},
             									{0, Mass[Fd,2],0},
             									{0, 0, Mass[Fd,3]}}}},
             									
{Ye,        { Description -> "Lepton-Yukawa-Coupling",
			  DependenceNum ->  Sqrt[2]/vH* {{Mass[Fe,1],0,0},
             									{0, Mass[Fe,2],0},
             									{0, 0, Mass[Fe,3]}}}}, 
                                                                            
                                                                           
{Mu,         { Description -> "SM Mu Parameter"}},                                        
{\[Lambda],  { Description -> "SM Higgs Selfcouplings"}},
{vH,          { Description -> "EW-VEV",
               DependenceNum -> Sqrt[4*Mass[VWp]^2/(g2^2)],
               DependenceSPheno -> None,
               OutputName -> vvSM}},
{vS,      {  LaTeX -> "s",
             Dependence ->  None, 
             OutputName -> vS,
             Real -> True,
             LesHouches -> {BL,43} }},

{ThetaW,    { Description -> "Weinberg-Angle",
              DependenceNum -> ArcSin[Sqrt[1 - Mass[VWp]^2/Mass[VZ]^2]]  }},
{ThetaWp,  { Description -> "Theta'", DependenceNum -> None  }},

{ZH,        { Description-> "Scalar-Mixing-Matrix", 
               Dependence -> None,
               DependenceOptional -> None,
               DependenceNum -> None   }},
{ZA,        { Description-> "Pseudo-Scalar-Mixing-Matrix", 
                Dependence -> None,
               DependenceOptional -> None,
               DependenceNum -> None   }},

{ZZ, {Description ->   "Photon-Z-Z' Mixing Matrix"}},
{ZW, { 
     Description -> "W Mixing Matrix", 
     Dependence -> {{1/Sqrt[2], 1/Sqrt[2]}, {I/Sqrt[2], (-I)/Sqrt[2]}}, 
     DependenceNum -> None, 
     DependenceOptional -> None, 
     DependenceSPheno -> None, 
     Real -> False, 
     LaTeX -> "Z^{W}", 
     OutputName -> ZW}}, 
 
 {Yh1,{ 
     (*Real -> False,*) 
     LesHouches -> Yh1, 
     LaTeX -> "Y_{h_1}", 
     OutputName -> yh1}},
      
{Yh2,{ 
     (*Real -> False,*) 
     LesHouches -> Yh2, 
     LaTeX -> "Y_{h_2}", 
     OutputName -> yh2}},   
{Yh3,{ 
     (*Real -> False,*) 
     LesHouches -> Yh3, 
     LaTeX -> "Y_{h_3}", 
     OutputName -> yh3}},
      
{Yh4,{ 
     (*Real -> False,*) 
     LesHouches -> Yh4, 
     LaTeX -> "Y_{h_4}", 
     OutputName -> yh4}}, 

{YPsi,{ 
     (*Real -> False,*) 
     LesHouches -> YPsi, 
     LaTeX -> "Y_{\\Psi}", 
     OutputName -> ypsi}}, 

{YXi,{ 
     (*Real -> False,*) 
     LesHouches -> YXi, 
     LaTeX -> "Y_{\\Xi}", 
     OutputName -> yxi}}, 

{YChii,{ 
     (*Real -> False,*) 
     LesHouches -> YChii, 
     LaTeX -> "Y_{\\Chi}", 
     OutputName -> ychii}},

{L1, {OutputName -> lam1,
      LaTeX -> "{\\lambda}_1",
      LesHouches -> {BL,1}}},

{L2, {OutputName -> lam2,
      LaTeX -> "{\\lambda}_2",
      LesHouches -> {BL,2}}},

{L3, {OutputName -> lam3,
      LaTeX -> "{\\lambda}_3",
      LesHouches -> {BL,3}}},

{MS2, {OutputName -> ms,
      LaTeX -> "{\\mu}_s",
      LesHouches -> {BL,10}}},

{mu2, {OutputName -> mu,
      LaTeX -> "{\\mu}_2",
      LesHouches -> {BL,11}}},

      
{Vu,        {Description ->"Left-Up-Mixing-Matrix"}},
{Vd,        {Description ->"Left-Down-Mixing-Matrix"}},
{Uu,        {Description ->"Right-Up-Mixing-Matrix"}},
{Ud,        {Description ->"Right-Down-Mixing-Matrix"}}, 
{Ve,        {Description ->"Left-Lepton-Mixing-Matrix"}},
{Ue,        {Description ->"Right-Lepton-Mixing-Matrix"}},
{Zx,{ 
     Dependence -> None, 
     LesHouches -> ZXMIX, 
     LaTeX -> "Z_x", 
     OutputName -> ZX}}, 
     
{Zcl,{ 
     Dependence -> None, 
     LesHouches -> ZCLMIX, 
     LaTeX -> "Z_{cl}", 
     OutputName -> ZCL}}, 
{Zcr,{ 
     Dependence -> None, 
     LesHouches -> ZCRMIX, 
     LaTeX -> "Z_{cr}", 
     OutputName -> ZCR}},
     
{Zpp,{ 
     Dependence -> None, 
     LesHouches -> ZPPMIX, 
     LaTeX -> "Z_{pp}", 
     OutputName -> ZPP}}
};
