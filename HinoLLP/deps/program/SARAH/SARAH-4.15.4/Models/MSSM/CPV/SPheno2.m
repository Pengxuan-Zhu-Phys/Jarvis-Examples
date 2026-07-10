MINPAR={{1,m0},
        {2,m12},
        {3,TanBeta},
        {4,SignumMu},
        {5,Azero},
        {6,etaInput},
        {7,Bzero}};
EXTPAR={
    {4, mA2input},
    {5, MuInput}
       };
RealParameters = {TanBeta, etaInput,m0};

ParametersToSolveTadpoles = {mHd2,mHu2,im[B[\[Mu]]]};
Tad1Loop[4]=Tad1Loop[3]*vd/vu;

DEFINITION[MatchingConditions]=Default[THDMII];

RenormalizationScaleFirstGuess = m0^2 + 4 m12^2;
RenormalizationScale = Sqrt[(mq2[3, 3] + (vu^2*conj[Yu[3, 3]]*Yu[3, 3])/2)*(mu2[3, 3] + (vu^2*conj[Yu[3, 3]]*Yu[3, 3])/2)-((vd*\[Mu]*conj[Yu[3, 3]] - vu*conj[T[Yu][3, 3]])*(vd*conj[\[Mu]]*Yu[3, 3] - vu*T[Yu][3, 3]))/2];

ConditionGUTscale = g1 == g2;

BoundarySUSYScale={
{eta,etaInput}
};

BoundaryHighScale={
{T[Ye], Azero*Ye},
{T[Yd], Azero*Yd},
{T[Yu], Azero*Yu},
{mq2, DIAGONAL m0^2},
{ml2, DIAGONAL m0^2},
{md2, DIAGONAL m0^2},
{mu2, DIAGONAL m0^2},
{me2, DIAGONAL m0^2},
{\[Mu], MuInput},
{B[\[Mu]], MuInput*Bzero},
{MassB, m12},
{MassWB,m12},
{MassG,m12}
};

BoundaryLowScaleInput={
    {eta,etaInput},
 {vd,Sqrt[4 mz2/(g1^2+g2^2)]*Cos[ArcTan[TanBeta]]},
    {vu,Sqrt[4 mz2/(g1^2+g2^2)]*Sin[ArcTan[TanBeta]]},
  {\[Mu], MuInput},
 {B[\[Mu]], mA2input/(TanBeta + 1/TanBeta)}
};


(* loop decays not supported for this model *)                     
SetOptions[MakeSPheno, IncludeLoopDecays -> False];



ListDecayParticles = Automatic;
ListDecayParticles3B = Automatic;


(* Example for mSugra input values *)
DefaultInputValues = {m0 -> 1500, m12 -> 1500, TanBeta -> 10, SignumMu -> 1, Azero->-2000 };

SA`AddOneLoopDecay = False;

