OnlyLowEnergySPheno = True;

MINPAR={{1,LambdaINPUT},
	{2,mu12INPUT},
	{3,mP12INPUT},
	{4,mP22INPUT},
	{5,Lm1INPUT},
	{6,Lm2INPUT},
	{7,Lm3INPUT},
	{8,Lm4INPUT},
	{9,Lm5INPUT},
	{10,v1INPUT},
	{11,v2INPUT},
	{12,Y1INPUT},
	{13,Y2INPUT},
	{14,Y3INPUT},
	{15,Y4INPUT},
	{16,Y5INPUT},
	{17,Y6INPUT},
	{18,Y5aINPUT},
	{19,Y6aINPUT},
	{20,glINPUT},
	{21,g1lINPUT},
	{22,gl1INPUT},
	{23,MPSINPUT},
	{24,MRHINPUT},
	{25,MSGINPUT}
};


ParametersToSolveTadpoles = {mu2,mu12,mP12,mP22};


DEFINITION[MatchingConditions]= 
  {{v,  vSM}, 
   {Ye, YeSM},
   {Yd, YdSM},
   {Yu, YuSM},
   {g1, g1SM},
   {g2, g2SM},
   {g3, g3SM},
   {gl,   g2},
   {g1l,   0},
   {gl1,   0}
  };



BoundaryLowScaleInput={
  {Lm,LambdaINPUT},
  {gl,glINPUT},
  {g1l,g1lINPUT},
  {gl1,gl1INPUT},
  {mu12,mu12INPUT},
  {mP12,mP12INPUT},
  {mP22,mP22INPUT},
  {v1,v1INPUT},
  {v2,v2INPUT},
  {Lm1,Lm1INPUT},
  {Lm2,Lm2INPUT},
  {Lm3,Lm3INPUT},
  {Lm4,Lm4INPUT},
  {Lm5,Lm5INPUT},
  {Y1,Y1INPUT},
  {Y2,Y2INPUT},
  {Y3,Y3INPUT},
  {Y4,Y4INPUT},
  {Y5,Y5INPUT},
  {Y6,Y6INPUT},
  {Y5a,Y5aINPUT},
  {Y6a,Y6aINPUT},
  {MPS,MPSINPUT},
  {MRH,MRHINPUT},
  {MSG,MSGINPUT}
};


ListDecayParticles = {Fu,Fe,Fd,Fv,VZ,VZP,VWp,hh,Ah,Fx0,Fy0,Fc};


ListDecayParticles3B = {{Fu,"Fu.f90"},{Fe,"Fe.f90"},{Fd,"Fd.f90"},
			{Fx0,"Fx0.f90"},{Fy0,"Fy0.f90"},{Fc,"Fc.f90"},
                        {hh,"hh.f90"},{Ah,"Ah.f90"}};

DefaultInputValues ={
                     LambdaINPUT -> 0.27,
		     glINPUT -> 0.285714,
		     g1lINPUT-> 0.0,
		     gl1INPUT-> 0.0,
		     mu12INPUT -> -90.3508,
		     mP12INPUT-> 100.0,
		     mP22INPUT-> 100.0,
		     v1INPUT -> 3130.5,
		     v2INPUT -> 3130.5,
		     Lm1INPUT -> 0.102041, 
		     Lm2INPUT -> 0.0816327,
		     Lm3INPUT -> 0.0816327,
		     Lm4INPUT -> 0.0,
		     Lm5INPUT -> 0.0,
		     Y5INPUT-> 0.0,
		     Y5aINPUT-> 0.1,
		     Y6INPUT-> 0.1,
		     Y6aINPUT-> 0.0,
		     MPSINPUT-> 0.000408163,
		     MRHINPUT-> 0.000102041,
		     MSGINPUT-> 0.000122449
                    };
