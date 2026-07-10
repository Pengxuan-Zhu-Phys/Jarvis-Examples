

ParticleDefinitions[GaugeES] = {
      {H0,  {    PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 1,
                 LaTeX -> "H^0",
                 OutputName -> "H0" }},                         
      
      
      {Hp,  {    PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 2,
                 LaTeX -> "H^+",
                 OutputName -> "Hp" }}, 
                 
               
       {phi1,  { PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 43,
                 LaTeX -> "{\\phi}_1",
                 OutputName -> "Phi1"
	 }}, 

       {phi2,  { PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 46,
                 LaTeX -> "{\\phi}_2",
                 OutputName -> "Phi2"
	 }},
      
      {VB,   { Description -> "B-Boson"}},
      
      {VL,   { PDG -> {0},
               Width -> {0}, 
               Mass -> 0,
               FeynArtsNr -> 545,
               LaTeX -> "L",
               OutputName -> "VL"}},
      
      {VG,   { Description -> "Gluon"}},          
      {VWB,  { Description -> "W-Bosons"}},          

      {gB,   { Description -> "B-Boson Ghost"}},

      {gL,   { PDG -> {0},
               Width -> {0}, 
               Mass -> 0,
               FeynArtsNr -> 6,
               LaTeX -> "\\eta^L",
               OutputName -> "gL"}},
      
      {gG,   { Description -> "Gluon Ghost" }},          
      {gWB,  { Description -> "W-Boson Ghost"}},

      {Fu1,  {    Description -> "Dirac Left Up-Quark",
		  LaTeX -> "u^1",
		  PDG ->{2,4,6},
		  Width ->{0, 0, 0}, 
		  FeynArtsNr -> 110,
		  OutputName -> "u1"}},

      {Fu2,  {    Description -> "Dirac Right Up-Quark",
		  LaTeX -> "u^2",
		  PDG ->{0,0,0},
		  Width ->{0, 0, 0}, 
		  FeynArtsNr -> 210,
		  OutputName -> "u2"}},

      {Fd1,  {    Description -> "Dirac Left Down-Quark",
		  LaTeX -> "d^1",
		  PDG -> {1,3,5},
		  Width -> {0, 0, 0}, 
		  FeynArtsNr -> 120,
		  OutputName -> "d1" }},  

      {Fd2,  {    Description -> "Dirac Right Down-Quark",
		  LaTeX -> "d^2",
		  PDG ->{0,0,0},
		  Width -> {0, 0, 0}, 
		  FeynArtsNr -> 221,
		  OutputName -> "d2" }},
  
      {Fe1,  {    Description -> "Dirac Left Electron" ,
		  LaTeX -> "e^1",
		  PDG -> {11,13,15},
		  Width -> {0, 0, 0}, 
		  FeynArtsNr -> 130,
		  OutputName -> "e1"}},  

      {Fe2,  {
	  Description -> "Dirac Right Electron",
	  LaTeX -> "e^2",
	  PDG -> {0,0,0},
	  Width -> {0, 0, 0}, 
	  FeynArtsNr -> 141,
	  OutputName -> "e2"
	}}

  };
      
      
      
      
ParticleDefinitions[EWSB] = {
      
  {hh,  {  Description -> "Higgs",
	   PDG -> {25, 35, 10022},
	   Mass -> {LesHouches},
	   Width -> {Automatic},
	   FeynArtsNr -> {8},
	   ElectricCharge -> 0,
	   LaTeX -> "h",
	   OutputName -> "hh"}}, 
                 
  {Ah,  {
         Description -> "Pseudo-Scalar Higgs", 
	 FeynArtsNr -> {102}, 
	 LaTeX -> "A^0", 
	 Mass -> {0, 0, LesHouches},   
	 OutputName -> "Ah", 
	 PDG -> {0, 0, 36},          
	 ElectricCharge -> 0, 
	 Width -> {0, 0, External} }}, 
      
  {Hp,     { Description -> "Charged Higgs", 
	     PDG -> {0},
	     PDG.IX ->{0},
	     Width -> {0}, 
	     Mass -> {0},
	     LaTeX -> {"H^+","H^-"},
	     OutputName -> {"Hp","Hm"},
	     ElectricCharge-> 1 }},                                                   
      
  {VP,   { Description -> "Photon"}}, 
  {VZ,   { Description -> "Z-Boson",
	   Width -> {0},
	   Goldstone -> Ah[{1}] }},

  {VZP,  { Description -> "Z'-Boson",
	   PDG -> {100040},
	   Width -> {Automatic},
	   Goldstone -> Ah[{2}],
	   LaTeX -> "{Z^\\prime}",
	   ElectricCharge-> 0,
	   OutputName -> "Zp" }}, 
    
  {VG,   { Description -> "Gluon"}},          
  {VWp,  { Description -> "W+ - Boson",
	   Goldstone -> Hp }},         

  {gP,   { Description -> "Photon Ghost"}},

  {gZP,  {
          Description -> "Z'-Ghost",
	  Mass -> Mass[VZP],
	  OutputName -> "gZP"
         }},
    
  {gWp,  { Description -> "Positive W+ - Boson Ghost"}}, 
  {gWpC, { Description -> "Negative W+ - Boson Ghost" }}, 
  {gZ,   { Description -> "Z-Boson Ghost" }},
  {gG,   { Description -> "Gluon Ghost" }},          
                               
                 
  {Fd,   { Description -> "Down-Quarks"}},   
  {Fu,   { Description -> "Up-Quarks"}},   
  {Fe,   { Description -> "Leptons"}},
  {Fv,   { Description -> "Neutrinos"}},

  (*
  
  {Fzt,  {
           Description -> "Neutral Zeta Fermion",
	   LaTeX -> "{{\\zeta}^0}_L",
	   OutputName -> "Fzt",
	   ElectricCharge -> 0,
	   FeynArtsNr -> {105},
	   PDG -> {700005},
	   Width -> {Automatic}, 
	   Mass -> {LesHouches} }},
  
  {Fet,  {
           Description -> "Neutral Eta Fermion",
	   LaTeX -> "{{\\eta}^0}_L",
	   OutputName -> "Fet",
	   ElectricCharge -> 0,
	   FeynArtsNr -> {103},
	   PDG -> {700003},
	   Width -> {Automatic}, 
	   Mass -> {LesHouches} }},

  *)
  
  {Fx0,  {
          Description -> "Neutral Chi Fermion",
	  LaTeX -> "{{\\chi}^0}_R",
	  OutputName -> "Fx0",
	  ElectricCharge -> 0,
	  FeynArtsNr -> {151},
	  PDG -> {800001,800003},
	  Width -> {Automatic,Automatic}, 
	  Mass -> {LesHouches} }},
  
  {Fy0,  {
          Description -> "Neutral Rho Fermion",
	  LaTeX -> "{\\rho}^0_L",
	  OutputName -> "Frh",
	  ElectricCharge -> 0,
	  FeynArtsNr -> 107,
	  PDG -> {900007,900009,9000011,9000013},
	  Width -> {External}, 
	  Mass -> {LesHouches}
         }},

  
   
  {Fc, {
      Description -> "Charged Sigma Fermion",
      LaTeX -> "{\\sigma^{-}}_L",
      OutputName -> "Sigm1",
      FeynArtsNr -> 98,
      ElectricCharge -> 1,
      PDG -> {7000020,7000022},
      Width -> {External}, 
      Mass -> {LesHouches}
    }}

};    
        
        
        
 WeylFermionAndIndermediate = {
     
    {H,      {   PDG -> {0},
                 Width -> 0, 
                 Mass -> Automatic,
                 LaTeX -> "H",
                 OutputName -> "H" }},

    {dR,     {LaTeX -> "d_R" }},
    {eR,     {LaTeX -> "e_R" }},
    {lep,    {LaTeX -> "l" }},
    {uR,     {LaTeX -> "u_R" }},
    {q,      {LaTeX -> "q" }},
    {eL,     {LaTeX -> "e_L" }},
    {dL,     {LaTeX -> "d_L" }},
    {uL,     {LaTeX -> "u_L" }},
    {vL,     {LaTeX -> "{\\nu}_L" }},

    {DR,     {LaTeX -> "D_R" }},
    {ER,     {LaTeX -> "E_R" }},
    {UR,     {LaTeX -> "U_R" }},
    {CR,     {LaTeX -> "C_R" }},

    {EL,     {LaTeX -> "E_L" }},
    {DL,     {LaTeX -> "D_L" }},
    {UL,     {LaTeX -> "U_L" }},
    {CL,     {LaTeX -> "C_L" }},

    {H0,      {LaTeX -> "H_0" }},

    {hh0,     {LaTeX -> "hh_0"}},
    {hh1,     {LaTeX -> "hh_1"}},
    {hh2,     {LaTeX -> "hh_2"}},

    {Ah0,     {LaTeX -> "Ah_0"}},
    {Ah1,     {LaTeX -> "Ah_1"}},
    {Ah2,     {LaTeX -> "Ah_2"}},

    {Zta,     {LaTeX -> "{\\zeta}"}},
    {ZtL,     {LaTeX -> "{\\zeta}_L"}},

    {Eta,     {LaTeX -> "{\\eta}"}},
    {EtL,     {LaTeX -> "{\\eta}_L"}},
    
    {Chi1,     {LaTeX -> "{\\chi}_1"}},
    {ChR1,     {LaTeX -> "{\\chi}_{1R}"}},
    {Chi2,     {LaTeX -> "{\\chi}_2"}},
    {ChR2,     {LaTeX -> "{\\chi}_{2R}"}},
    
    {XL,      {LaTeX -> "{X}_L"}},
    
    {Rho,     {LaTeX -> "{\\rho}"}},
    {RhL,     {LaTeX -> "{\\rho}_L"}},
    
    {PsiL,  {LaTeX -> "{\\psi}_L"}},    
    {PsiR,  {LaTeX -> "{\\psi}_R"}},
    {pspL,  {LaTeX -> "{\\psi}^+_L"}},
    {pspR,  {LaTeX -> "{\\psi}^+_R"}},   
    {ps0L,  {LaTeX -> "{\\psi}^0_L"}},
    {ps0R,  {LaTeX -> "{\\psi}^0_R"}},   

    {SGL,  {LaTeX -> "{\\Sigma}_L"}},   
    {sg0,  {LaTeX -> "{\\sigma}^0"}},
    {sgp,  {LaTeX -> "{\\sigma}^+"}},
    {sgm,  {LaTeX -> "{\\sigma}^-"}}
        
 };       


