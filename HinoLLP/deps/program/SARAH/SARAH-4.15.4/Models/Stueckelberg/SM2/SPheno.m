OnlyLowEnergySPheno = True;


MINPAR={{1,LambdaInput},
        {2, gpInput},
        {3, M1Input},
        {4, epsilonInput},
        {5, chiInput} };

ParametersToSolveTadpoles = {mu2};

DEFINITION[MatchingConditions]= {
 {Ye, YeSM},
 {Yd, YdSM},
 {Yu, YuSM},
 {g1, g1SM*Sqrt[1-2*epsilonInput*chiInput+epsilonInput^2]},
 {g2, g2SM},
 {g3, g3SM},
    (*{gYB,(epsilonInput-deltaInput)/Sqrt[1-deltaInput^2]*g1SM},*)
 {gYB,-chiInput*g1SM*Sqrt[1-2*epsilonInput*chiInput+epsilonInput^2]},   
 {v, vSM}
 };


BoundaryLowScaleInput={
 {gp,gpInput},
    (* {g1p,-deltaInput*Sqrt[(1-2*epsilonInput*deltaInput+epsilonInput^2)/(1-deltaInput^2)]*g1},*)
    (*{g1p,(epsilonInput-deltaInput)*Sqrt[(1-2*epsilonInput*deltaInput+epsilonInput^2)]/Sqrt[(1-deltaInput^2)]*g1},*)
    {g1p,-chiInput*g1},
 {\[Lambda], LambdaInput},
 {M1a, M1Input},
 {M2a, M1Input*epsilonInput},
 {gp1, g1}
};

AddTreeLevelUnitarityLimits=True;


ListDecayParticles = {Fu,Fe,Fd,hh,VZp};
ListDecayParticles3B = {{Fu,"Fu.f90"},{Fe,"Fe.f90"},{Fd,"Fd.f90"}};


DefaultInputValues ={LambdaInput->0.27, gpInput->0.5, M1Input->150, epsilonInput->0.01, chiInput->0.05};

