MINPAR = { {1, m0},
           {2, m12},
           {3, TanBeta},
           {5, Azero}
         };

EXTPAR = {
    {49, massmulti},
    {50, muInput},
           {51, BmuInput},
           {52, muprimeInput},  
	      {62, LambdaInput},
           {63, ALambdaInput},
           {64, AKappaInput},
           {67, ALambda12Input}         
           

         };

ExtraOddParticles={ChiI,ChiP,ChaP,SHI0,SHIp};

ConditionGUTscale =  (g1*gN-g1N*gN1)/Sqrt[gN^2+gN1^2] == g2;         
         
RealParameters = {TanBeta, m0};         

ParametersToSolveTadpoles = { mHd2, mHu2, ms2 };

DEFINITION[MatchingConditions]=Default[THDMII];

RenormalizationScaleFirstGuess = m0^2 + 4 m12^2;
RenormalizationScale = MSu[1]*MSu[6];


BoundaryHighScale = {
    (*{g1,(g1*gN-g1N*gN1)/Sqrt[gN^2+gN1^2]},
      {g1,Sqrt[(g1^2+g2^2)/2]},*)
    {g1, g2},
    {gN, g2*3/Sqrt[160]},
    {g1N,0},
   {gN1,0},
   {T[Ye], Azero*Ye},
   {T[Yd], Azero*Yd},
   {T[Yu], Azero*Yu},
   {mq2, DIAGONAL m0^2},
   {ml2, DIAGONAL m0^2},
   {md2, DIAGONAL m0^2},
   {mu2, DIAGONAL m0^2},
   {me2, DIAGONAL m0^2},
   {mDx2, DIAGONAL m0^2},
   {mDxbar2, DIAGONAL m0^2},
   {mH1I2, DIAGONAL massmulti*m0^2},
   {mH2I2, DIAGONAL massmulti*m0^2},
  {mXu2, m0^2},
    {mXd2, m0^2},
    {msm2, massmulti*m0^2},
    {msp2, massmulti*m0^2},
    {mphi2, m0^2},
    {mphib2, m0^2},
    {\[Mu], muInput},
    {\[Mu]p, muprimeInput},
    {B[\[Mu]], BmuInput},
    {B[\[Mu]p], 0},
    {\[Kappa],  LHInput[\[Kappa]]},
      {T[\[Kappa]], AKappaInput \[Kappa]},
    {\[Lambda], LambdaInput},
    {T[\[Lambda]], ALambdaInput \[Lambda]},
  
   {\[Lambda]12, LHInput[\[Lambda]12]},
    {T[\[Lambda]12], ALambda12Input \[Lambda]12},
   {gQL, LHInput[gQL]},
   {gQR, LHInput[gQR]},
   {T[gQL], Azero gQL},
   {T[gQR], Azero gQR},
   {MassB, m12},
   {MassWB,m12},
   {MassG,m12},
   {MassBp,m12},
    {MassBBp,0},
    {\[Lambda]5, LHInput[\[Lambda]5]},
    {\[Lambda]6,LHInput[\[Lambda]6]},
    {T[\[Lambda]5], LHInput[T[\[Lambda]5]]},
    {T[\[Lambda]6],LHInput[T[\[Lambda]6]]},
    {Yx, LHInput[Yx]},
    {T[Yx], LHInput[T[Yx]]}
};

BoundarySUSYScale={
 {g1T,(g1*gN-g1N*gN1)/Sqrt[gN^2+gN1^2]},
 {gNT, Sqrt[gN^2+gN1^2]},
 {g1NT,(g1N*gN+gN1*g1)/Sqrt[gN^2+gN1^2]},
 {g1, g1T},
 {gN, gNT},
 {g1N, g1NT},
 {gN1,0},
 {vs, LHInput[vs]}
};

BoundaryEWSBScale={
 {g1T,(g1*gN-g1N*gN1)/Sqrt[gN^2+gN1^2]},
 {gNT, Sqrt[gN^2+gN1^2]},
 {g1NT,(g1N*gN+gN1*g1)/Sqrt[gN^2+gN1^2]},
 {g1, g1T},
 {gN, gNT},
 {g1N, g1NT},
 {gN1,0} };
 
InitializationValues = {
 {gN, 0.1},
 {g1N, -0.01},
 {gN1, -0.002}
 } 

ListDecayParticles = Automatic;
ListDecayParticles3B = Automatic;


DefaultInputValues = {m0->4000, m12->2000, TanBeta->10, Azero->415,
		      massmulti->4,
muPrimeInput -> 2000,
BmuPrimeInput -> 4000,
LambdaInput -> 0.02,
KappaInput -> 0.2,
ALambdaInput -> 2000,
AKappaInput -> 2000,
vSInput -> 1000,
LambdaPrimeInput ->0.01,
KappaPrimeInput ->0.001,
ALambdaPrimeInput -> 2000,
AKappaPrimeInput -> -2000,
vSPrimeInput -> 10^4,
Lambda12Input -> 0.1,
LambdaPrime12Input -> 0.1,
ALambda12Input -> -5000,
ALambdaPrime12Input -> -5000
};


