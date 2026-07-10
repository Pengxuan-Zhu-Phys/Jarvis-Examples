(* ::Package:: *)

OnlyLowEnergySPheno = True;

MINPAR={{1,Lambda1INPUT},
        {2,Lambda2INPUT},
        {3,Lambda3INPUT},
        {10, g1XINPUT},
        {11, g1X1INPUT},
        {12, g11XINPUT},
        {20, vSinput}};
        
RealParameters = {vSinput, g1XINPUT, g1X1INPUT,g11XINPUT};
ParametersToSolveTadpoles = {mu2,MS2};

DEFINITION[MatchingConditions]= {
 {vH,  vSM}, 
 {Ye, YeSM},
 {Yd, YdSM},
 {Yu, YuSM},
 {g1, g1SM},
 {g2, g2SM},
 {g3, g3SM}
 };

BoundaryLowScaleInput={

 {vS,vSinput},
 {L1,Lambda1INPUT},
 {L2,Lambda2INPUT},
 {L3,Lambda3INPUT},
 {gX,g1XINPUT},
 {g1X,g1X1INPUT},
 {gX1,g11XINPUT},
 {Yh1,LHInput[Yh1]},
 {Yh2,LHInput[Yh2]},
 {Yh3,LHInput[Yh3]},
 {Yh4,LHInput[Yh4]},
 {YPsi,LHInput[YPsi]},
 {YXi,LHInput[YXi]},
 {YChii,LHInput[YChii]}
};

AddTreeLevelUnitarityLimits=True;

ListDecayParticles = {Fu,Fe,Fd,Fpx,Fcp,hh,VZp};
ListDecayParticles3B = {{Fu,"Fu.f90"},{Fe,"Fe.f90"},{Fd,"Fd.f90"}(*,{Fpp,"Fpp.f90"},{Fcp,"Fcp.f90"}*)};

DefaultInputValues =   {Lambda1INPUT -> 0.1289,
			            Lambda2INPUT -> 0.3199,
			            Lambda3INPUT -> 0.0,
			            vSinput -> 10000.0,
			            g1XINPUT -> 0.05,
			            g1X1INPUT -> 0.0,
		                    g11X1INPUT -> 0.0};
(*SA`AddOneLoopDecay = False;*)
