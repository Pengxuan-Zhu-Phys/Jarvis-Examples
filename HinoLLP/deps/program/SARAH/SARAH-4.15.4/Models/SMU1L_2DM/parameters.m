ParameterDefinitions = { 
{g1,        { Description -> "Hypercharge-Coupling"}},
{g2,        { Description -> "Left-Coupling"}},
{g3,        { Description -> "Strong-Coupling"}},    
{AlphaS,    {Description -> "Alpha Strong"}},	
{e,         { Description -> "electric charge"}}, 

{Gf,        { Description -> "Fermi's constant"}},
{aEWinv,    { Description -> "inverse weak coupling constant at mZ"}},

{Yu,        { Description -> "Up-Yukawa-Coupling",
	      DependenceNum ->  Sqrt[2]/v* {{Mass[Fu,1],0,0},
					    {0, Mass[Fu,2],0},
					    {0, 0, Mass[Fu,3]}}}}, 

{Yd,        { Description -> "Down-Yukawa-Coupling",
	      DependenceNum ->  Sqrt[2]/v* {{Mass[Fd,1],0,0},
					    {0, Mass[Fd,2],0},
					    {0, 0, Mass[Fd,3]}}}},
             									
{Ye,        { Description -> "Lepton-Yukawa-Coupling",
	      DependenceNum ->  Sqrt[2]/v* {{Mass[Fe,1],0,0},
					    {0, Mass[Fe,2],0},
					    {0, 0, Mass[Fe,3]}}}}, 
                                                                            
                                                                           
{mu2,         { Description -> "SM Mu Parameter",
                OutputName->m2SM}},

{Lm,        { Description -> "SM Higgs Selfcouplings",
	      DependenceNum -> Mass[hh]^2/(v^2)}},


{v,        { Description -> "EW-VEV",
	     DependenceNum -> Sqrt[4*Mass[VWp]^2/(g2^2)],
	     DependenceSPheno -> None,
	     OutputName -> vvSM}},

  
{mH2,      { Description -> "SM Higgs Mass Parameter"}},

{ThetaW,   {  
             Description -> "Weinberg-Angle", 
	     Dependence -> None, 
	     DependenceNum -> None, 
	     DependenceOptional -> None, 
	     DependenceSPheno -> ArcCos[Sqrt[Abs[ZZ[1,1]]^2]], 
	     Real -> True, 
	     LesHouches ->{ANGLESZZ,1}, 
	     LaTeX -> "{\\theta}_{W}", 
	     OutputName ->ThetaW
	    }},


{TXp, {  
             Description -> "ZZ-Mixing-Angle-2", 
	     Dependence -> None, 
	     DependenceNum -> None, 
	     DependenceOptional -> None, 
	     DependenceSPheno -> ArcCos[Sqrt[Abs[ZZ[3,3]]^2]], 
	     Real -> True, 
	     LesHouches ->{ANGLESZZ,2}, 
	     LaTeX -> "{\\theta}^{\\prime}_{X}", 
	     OutputName ->TXp
	    }},

  
{ZZ, {Description -> "Photon-Z-Z' Mixing Matrix",
      Dependence ->   {{Cos[ThetaW],-Sin[ThetaW] Cos[TXp], Sin[ThetaW] Sin[TXp] },{Sin[ThetaW], Cos[ThetaW] Cos[TXp],-Cos[ThetaW] Sin[TXp]},{0, Sin[TXp], Cos[TXp]}},
       Real ->True,
       LaTeX -> "Z^{\\gamma Z Z^{\\prime}}",
       LesHouches -> None,
       OutputName -> ZZ
      }},
  
{ZW, {Description -> "W Mixing Matrix",
       Dependence ->   1/Sqrt[2] {{1, 1},
                                  {I,-I}}
      }},

{Vu,        {Description ->"Left-Up-Mixing-Matrix"}},
{Vd,        {Description ->"Left-Down-Mixing-Matrix"}},
{Uu,        {Description ->"Right-Up-Mixing-Matrix"}},
{Ud,        {Description ->"Right-Down-Mixing-Matrix"}}, 
{Ve,        {Description ->"Left-Lepton-Mixing-Matrix"}},
{Ue,        {Description ->"Right-Lepton-Mixing-Matrix"}},

{gl,    { 
          Description -> "UL-Coupling", 
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {gauge, 4}, 
	  LaTeX -> "g_{L'}", 
	  OutputName -> gl}},

{g1l,    { 
          Description -> "UL-U1y-kinetic mixing Coupling1", 
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {gauge, 5}, 
	  LaTeX -> "g_{1L}", 
	  OutputName -> g1l}},


{gl1,    { 
          Description -> "UL-U1y-kinetic mixing Coupling2", 
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {gauge, 6}, 
	  LaTeX -> "g_{L1}", 
	  OutputName -> gl1}},
	   
	   
{v1,         { 
              Real -> True, 
	      LesHouches -> {PARAMBSM,1}, 
              Dependence ->  None,
	      LaTeX -> "{v}_{1}", 
              OutputName -> V1}},

{v2,         { 
              Real -> True, 
	      LesHouches -> {PARAMBSM,2}, 
              Dependence ->  None,
	      LaTeX -> "{v}_{2}", 
              OutputName -> V2}},


{mu12,    { 
           Description -> "Trilinear Coupling", 
	   Dependence -> None, 
	   DependenceNum -> None, 
	   DependenceOptional -> None,
	   DependenceSPheno -> None, 
	   Real -> True, 
	   LesHouches -> {PARAMBSM,3}, 
	   LaTeX -> "{\\mu}_{12}", 
	   OutputName -> mu12}},

{mP12,    { 
          Description -> "phi1 mass", 
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,4}, 
	  LaTeX -> "{\\mu}^2_{1}", 
	  OutputName -> mP12}},

{mP22,    { 
          Description -> "phi2 mass", 
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,5}, 
	  LaTeX -> "{\\mu}^2_{2}", 
	  OutputName -> mP22}},
	   
{Lm1,    {  
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,6}, 
	  LaTeX -> "{\\lambda}_{1}", 
	  OutputName -> Lm1}},
	   
{Lm2,    {  
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,7}, 
	  LaTeX -> "{\\lambda}_{2}", 
	  OutputName -> Lm2}},

{Lm3,    {  
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,8}, 
	  LaTeX -> "{\\lambda}_{3}", 
	  OutputName -> Lm3}},
	   
{Lm4,    {  
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,9}, 
	  LaTeX -> "{\\lambda}_{4}", 
	  OutputName -> Lm4}},
	   
{Lm5,    {  
	  Dependence -> None, 
	  DependenceNum -> None, 
	  DependenceOptional -> None, 
	  DependenceSPheno -> None, 
	  Real -> True, 
          LesHouches -> {PARAMBSM,10}, 
	  LaTeX -> "{\\lambda}_{5}", 
	  OutputName -> Lm5}},

	   
{ZH,  { 
        Description -> "Scalar-Mixing-Matrix", 
        Dependence -> None, 
        DependenceNum -> None, 
        DependenceOptional -> None, 
        DependenceSPheno -> None, 
        Real -> True, 
        LesHouches -> SCALARMIX, 
        LaTeX -> "Z_H", 
        OutputName -> ZH}}, 

{ZA,  {
       Description -> "Pseudo-Scalar-Mixing-Matrix",
       Dependence -> None, 
       DependenceNum -> None, 
       DependenceOptional -> None, 
       DependenceSPheno -> None, 
       Real -> True, 
       LesHouches -> AHMIX, 
       LaTeX -> "Z_{A}", 
	 OutputName -> ZA}},


{ZLA,  {
       Description -> "RhoL+Sigma0L-Psi0L -Mixing-Matrix",
       LesHouches -> ALFERMIX, 
       LaTeX -> "ZA_{L}", 
       OutputName -> ZLA}},

{ZRA,  {
       Description -> "PsiR-conj[RhoL]-Mixing-Matrix",
       LesHouches -> ARFERMIX, 
       LaTeX -> "ZA_{R}", 
       OutputName -> ZRA}},



  
{ZL,  {
       Description -> "ZetaL+ETAL -Mixing-Matrix",
       LesHouches -> LFERMIX, 
       LaTeX -> "Z_{L}", 
       OutputName -> ZL}},

{ZR,  {
       Description -> "ChiR12-Mixing-Matrix",
       LesHouches -> RFERMIX, 
       LaTeX -> "Z_{R}", 
       OutputName -> ZR}},


{Vc,  {
       Description -> "left BSM charged fermion-Mixing-Matrix",
       LesHouches -> LCFERMIX, 
       LaTeX -> "V_{c}", 
       OutputName -> Vc}},

{Uc,  {
       Description -> "Right BSM charged fermion-Mixing-Matrix",
       LesHouches -> RCFERMIX, 
       LaTeX -> "U_{c}", 
       OutputName -> Uc}},





{Y1,    { 
          Description -> "Yukawa Coupling: H-PsiR-RhoL", 
	  LesHouches -> {YUKAWABSM,1}, 
	  LaTeX -> "Y_{1}", 
	  OutputName -> Y1}},

{Y2,    { 
          Description -> "Yukawa Coupling :H-Rho-PsiL", 
	  LesHouches -> {YUKAWABSM,2}, 
	  LaTeX -> "Y_{2}", 
	  OutputName -> Y2}},

{Y3,    { 
          Description -> "Yukawa Coupling: H_dag-sigmaL-PsiL", 
	  LesHouches -> {YUKAWABSM,3}, 
	  LaTeX -> "Y_{3}", 
	  OutputName -> Y3}},

{Y4,    { 
          Description -> "Yukawa Coupling: H-PsiR-SGL", 
	  LesHouches -> {YUKAWABSM,4}, 
	  LaTeX -> "Y_{4}", 
	    OutputName -> Y4}},


{Y5,    { 
          Description -> "Yukawa Coupling : Chi-Eta-Phi1 ", 
	  LesHouches -> {YUKAWABSM,5}, 
	  LaTeX -> "Y_{5}", 
	  OutputName -> Y5}},

{Y6,    { 
          Description -> "Yukawa Coupling :Chi-Zta-Phi2", 
	  LesHouches -> {YUKAWABSM,6}, 
	  LaTeX -> "Y_{6}", 
	  OutputName -> Y6}},
  
{Y5a,    { 
          Description -> "Yukawa Coupling 2: Chi-Eta-Phi1 ", 
	  LesHouches -> {YUKAWABSM,7}, 
	  LaTeX -> "Y_{5a}", 
	  OutputName -> YAA}},

{Y6a,    { 
          Description -> "Yukawa Coupling2 :Chi-Zta-Phi2", 
	  LesHouches -> {YUKAWABSM,8}, 
	  LaTeX -> "Y_{6a}", 
	  OutputName -> YBA}},
  


{MPS,    { 
          Description -> "Mass term Psi", 
	  LesHouches -> {YUKAWABSM,9}, 
	  LaTeX -> "M_{//psi}", 
	  OutputName -> MPS}},

{MRH,    { 
          Description -> "Mass term Rho", 
	  LesHouches -> {YUKAWABSM,10}, 
	  LaTeX -> "M_{//rho}", 
	  OutputName -> MRH}},

{MSG,    { 
          Description -> "Mass term Sigma", 
	  LesHouches -> {YUKAWABSM,11}, 
	  LaTeX -> "M_{//sigma}", 
	  OutputName -> MSG}}


};





