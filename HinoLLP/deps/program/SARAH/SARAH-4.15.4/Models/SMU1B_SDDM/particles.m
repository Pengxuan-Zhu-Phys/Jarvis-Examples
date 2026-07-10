ParticleDefinitions[GaugeES] = {
      {H0,  { 
                 PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 1,
                 LaTeX -> "H^0",
                 OutputName -> "H0" }},  
                              
      {Hp,  { 
                 PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 2,
                 LaTeX -> "H^+",
                 OutputName -> "Hp" }},
                 
      {S0,  {     
                 PDG -> {0},
                 Width -> {0}, 
                 Mass -> Automatic,
                 FeynArtsNr -> 98,
                 LaTeX -> "S0",
                 OutputName -> "S0" }},
      {VB,   { Description -> "B-Boson"}},                                                   
      {VG,   { Description -> "Gluon"}},          
      {VWB,  { Description -> "W-Bosons"}},  
      {VBp,  { 
               FeynArtsNr -> 46, 
               LaTeX -> "Bp", 
               Mass -> LesHouches, 
               OutputName -> "vbp", 
               PDG -> {121}, 
               Width -> Automatic}}, 
      {gB,   { Description -> "B-Boson Ghost"}},                                                   
      {gG,   { Description -> "Gluon Ghost" }},          
      {gWB,  { Description -> "W-Boson Ghost"}},
      {gBp,  { 
               FeynArtsNr -> 18, 
               LaTeX -> "\\eta_{Bp}", 
               Mass -> LesHouches, 
               OutputName -> "gbp", 
               PDG -> {0}, 
               Width -> Automatic}}
      };
           
      
  ParticleDefinitions[EWSB] = {
            
      
        {hh   ,  { Description -> "Higgs",
                 PDG -> {25,35},
                 Width -> Automatic, 
                 Mass ->LesHouches,
                 ElectricCharge -> 0,
                 FeynArtsNr -> 1,
                 LaTeX -> "h",
                 OutputName -> "h" }}, 
                 
       {Ah   ,  {  Description -> "Pseudo-Scalar Higgs",
                 PDG -> {0,0},
                 Width -> {0, External}, 
                 Mass ->LesHouches,
                 FeynArtsNr -> 2,
                 LaTeX -> "A_h",
                 OutputName -> "Ah" }},  
                                     
       {Hp,     { Description -> "Charged Higgs", 
                 PDG -> {0},
                 PDG.IX ->{0},
                 Width -> {0}, 
                 Mass -> {0},
                 LaTeX -> {"H^+","H^-"},
                 OutputName -> {"Hp","Hm"},
                 ElectricCharge->1
                 }},                                               
      
      {VP,   { Description -> "Photon"}}, 
      {VZ,   { Description -> "Z-Boson",
      			 Goldstone -> Ah[{1}] }}, 
      {VG,   { Description -> "Gluon" }},          
      {VWp,  { Description -> "W+ - Boson",
      			Goldstone -> Hp }},       
      {gP,   { Description -> "Photon Ghost"}},                                                   
      {gWp,  { Description -> "Positive W+ - Boson Ghost"}}, 
      {gWpC, { Description -> "Negative W+ - Boson Ghost" }}, 
      {gZ,   { Description -> "Z-Boson Ghost" }},
      {gG,   { Description -> "Gluon Ghost" }},          
      {VZp,    { Description -> "Z'-Boson",
      			 Goldstone -> Ah[{2}]}},  
      {gZp,    { Description -> "Z'-Ghost" }},    
                               
                 
      {Fd,   { Description -> "Down-Quarks"}},   
      {Fu,   { Description -> "Up-Quarks"}},   
      {Fe,   { Description -> "Leptons" }},
      {Fv,   { Description -> "Neutrinos" }},   
      {Fpx,{ 
          FeynArtsNr -> 6, 
          LaTeX -> "px", 
          Mass -> LesHouches, 
          OutputName -> "fpx", 
          PDG -> {90010,90011},
          PDG . IX -> {1600001,1600002}, 
          ElectricCharge -> 1, 
          Width -> Automatic}}, 
          
       {Fcp,{ 
          FeynArtsNr -> 7, 
          LaTeX -> "cp", 
          Mass -> LesHouches, 
          OutputName -> "fcp", 
          PDG -> {90012,90013},
          PDG . IX -> {1600003,1600004}, 
          ElectricCharge -> 0, 
          Width -> Automatic}}
};    
        
        
        
 WeylFermionAndIndermediate = {
     
   {H,      {   PDG -> {0},
                Width -> {0}, 
                Mass -> Automatic,
                LaTeX -> "H",
                OutputName -> "" }},

   {dR,     {LaTeX -> "d_R" }},
   {eR,     {LaTeX -> "e_R" }},
   {lep,     {LaTeX -> "l" }},
   {uR,     {LaTeX -> "u_R" }},
   {q,     {LaTeX -> "q" }},
   {eL,     {LaTeX -> "e_L" }},
   {dL,     {LaTeX -> "d_L" }},
   {uL,     {LaTeX -> "u_L" }},
   {vL,     {LaTeX -> "\\nu_L" }},
       
   {DR,     {LaTeX -> "D_R" }},
   {ER,     {LaTeX -> "E_R" }},
   {UR,     {LaTeX -> "U_R" }},
   {EL,     {LaTeX -> "E_L" }},
   {DL,     {LaTeX -> "D_L" }},
   {UL,     {LaTeX -> "U_L" }}
        };       


