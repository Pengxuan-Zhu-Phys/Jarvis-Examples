OnlyLowEnergySPheno = True;


MINPAR={
        { 1,      lamHInput},
        { 2,    lamEtaInput},
        { 3,    lamRhoInput},
        { 4,    lamHETInput},
        { 5,    lamHRhInput},
        { 6,     lamRTInput},
        { 7, 	  lam1Input},
        {20,      vrhoInput},
        {21,    muEta2Input},
        {22,	   mu1Input} 
       };

RealParameters = {};

ParametersToSolveTadpoles = {muH2, veta, muRho2};

DEFINITION[MatchingConditions]= {
 {g1, g1SM},
 {g2, g2SM},
 {g3, g3SM},
 {Ye, YeSM},
 {Yd, YdSM}, 
 {Yu, YuSM},
 { v,  vSM}
 };


BoundaryLowScaleInput={ 
 {    lamH,     lamHInput},
 {  lamEta,   lamEtaInput},
 {  lamRho,   lamRhoInput},
 {  lamHET,   lamHETInput},
 {  lamHRh,   lamHRhInput},
 {  lamRT,     lamRTInput},
 {    lam1,     lam1Input},
 {    vrho,     vrhoInput},
 {  muEta2,   muEta2Input},
 {     mu1,      mu1Input},
 {      YL,   LHInput[YL]},
 {      YR,   LHInput[YR]},
 {      MN,   LHInput[MN]} 
};

AddTreeLevelUnitarityLimits=True;

ListDecayParticles = {Fu,Fe,Fd,Fv,hh,Ah,VZ,VWp};
ListDecayParticles3B = {{Fu,"Fu.f90"},{Fe,"Fe.f90"},{Fd,"Fd.f90"},{Fv,"Fv.f90"}};


DefaultInputValues = {lamHInput->0.53327, lamEtaInput->0.1, lamRhoInput->0.1, lamHETInput->0.0, lamHRhInput->0.02, lamRTInput->0.0, lam1Input->0.0001, vrhoInput->10000, muEta2Input->10, mu1Input->0.01, YL[a_,a_]->0.1, YR[a_,a_]->0.1, MN[a_,a_]->0.1};

