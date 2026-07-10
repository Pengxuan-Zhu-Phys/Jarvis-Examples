{Cp[USd[{gO1_}], conj[USd[{gO2_}]], VZ, VZ] -> 
  (-I)*(((2*I)/15)*g1^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, 
      Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]] + (I/2)*g2^2*Cos[ThetaW[]]^2*
     Delta[gO1, gO2]*ThetaStep[gO1, 3] + 
    (I*g1*g2*Cos[ThetaW[]]*Delta[gO1, gO2]*Sin[ThetaW[]]*ThetaStep[gO1, 3])/
     Sqrt[15] + (I/30)*g1^2*Delta[gO1, gO2]*Sin[ThetaW[]]^2*
     ThetaStep[gO1, 3]), Cp[USd[{gO1_}], conj[USd[{gO2_}]], conj[VWm], 
   VWm] -> (g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3])/2, 
 Cp[Ah[{gI1_}], Ah[{gI2_}], USd[{gO1_}], conj[USd[{gO2_}]]] -> 
  (-I)*((I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZA[gI1, 1]*ZA[gI2, 1] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yd[j3, j1]]*
           Yd[j2, j1]]]]*ZA[gI1, 1]*ZA[gI2, 1] + (I/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZA[gI1, 1]*ZA[gI2, 1] + (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZA[gI1, 1]*ZA[gI2, 1] - 
    I*sum[j1, 1, 3, conj[Yd[j1, gO2]]*Yd[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZA[gI1, 1]*ZA[gI2, 1] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZA[gI1, 2]*ZA[gI2, 2] - (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZA[gI1, 2]*ZA[gI2, 2] - (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZA[gI1, 2]*ZA[gI2, 2]), Cp[hh[{gI1_}], hh[{gI2_}], USd[{gO1_}], 
   conj[USd[{gO2_}]]] -> 
  (-I)*((I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZH[gI1, 1]*ZH[gI2, 1] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yd[j3, j1]]*
           Yd[j2, j1]]]]*ZH[gI1, 1]*ZH[gI2, 1] + (I/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZH[gI1, 1]*ZH[gI2, 1] + (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZH[gI1, 1]*ZH[gI2, 1] - 
    I*sum[j1, 1, 3, conj[Yd[j1, gO2]]*Yd[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZH[gI1, 1]*ZH[gI2, 1] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZH[gI1, 2]*ZH[gI2, 2] - (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZH[gI1, 2]*ZH[gI2, 2] - (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZH[gI1, 2]*ZH[gI2, 2]), Cp[Hpm[{gI1_}], USd[{gO1_}], conj[Hpm[{gI2_}]], 
   conj[USd[{gO2_}]]] -> 
  (-I)*((I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZP[gI1, 1]*ZP[gI2, 1] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yd[j3, j1]]*
           Yd[j2, j1]]]]*ZP[gI1, 1]*ZP[gI2, 1] + (I/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZP[gI1, 1]*ZP[gI2, 1] - (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZP[gI1, 2]*ZP[gI2, 2] - (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZP[gI1, 2]*ZP[gI2, 2] + (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZP[gI1, 2]*ZP[gI2, 2] - I*sum[j1, 1, 3, conj[Yu[j1, gO2]]*Yu[j1, gO1]]*
     ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[USd[{gO1_}], Sv[{gI1_}], conj[USd[{gO2_}]], conj[Sv[{gI2_}]]] -> 
  (-I)*((I/10)*g1^2*Delta[gI1, gI2]*sum[j1, 1, 3, Delta[gO1, 3 + j1]*
       Delta[gO2, 3 + j1]] + (I/20)*g1^2*Delta[gI1, gI2]*Delta[gO1, gO2]*
     ThetaStep[gO1, 3] + (I/4)*g2^2*Delta[gI1, gI2]*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]), Cp[Cha[{gI2_}], Fu[{gI1_}], conj[USd[{gO2_}]]][
   PR] -> sum[j1, 1, 3, conj[Yu[j1, gO2]]*ZUR[gI1, j1]]*ThetaStep[gO2, 3]*
   UP[gI2, 2], Cp[Cha[{gI2_}], Fu[{gI1_}], conj[USd[{gO1_}]]][PL] -> 
  (-I)*(I*conj[UM[gI2, 2]]*sum[j2, 1, 3, conj[ZUL[gI1, j2]]*
       sum[j1, 1, 3, Delta[gO1, 3 + j1]*Yd[j1, j2]]] - 
    I*g2*conj[UM[gI2, 1]]*conj[ZUL[gI1, gO1]]*ThetaStep[gO1, 3]), 
 Cp[Chi[{gI2_}], Fd[{gI1_}], conj[USd[{gO2_}]]][PR] -> 
  (-I)*((-I)*Sqrt[2/15]*g1*sum[j1, 1, 3, Delta[gO2, 3 + j1]*ZDR[gI1, j1]]*
     ZN[gI2, 1] - I*sum[j1, 1, 3, conj[Yd[j1, gO2]]*ZDR[gI1, j1]]*
     ThetaStep[gO2, 3]*ZN[gI2, 3]), 
 Cp[Chi[{gI2_}], Fd[{gI1_}], conj[USd[{gO1_}]]][PL] -> 
  (-I)*((-I)*conj[ZN[gI2, 3]]*sum[j2, 1, 3, conj[ZDL[gI1, j2]]*
       sum[j1, 1, 3, Delta[gO1, 3 + j1]*Yd[j1, j2]]] - 
    (I*g1*conj[ZDL[gI1, gO1]]*conj[ZN[gI2, 1]]*ThetaStep[gO1, 3])/Sqrt[30] + 
    (I*g2*conj[ZDL[gI1, gO1]]*conj[ZN[gI2, 2]]*ThetaStep[gO1, 3])/Sqrt[2]), 
 Cp[USd[{gO1_}], conj[USd[{gO2_}]], conj[Sd[{gI1_}]], Sd[{gI2_}]] -> 
  (-I)*((-1/30*I)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZD[gI1, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*Delta[gO2, 3 + j2]] - 
    ((2*I)/3)*g3^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZD[gI1, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*Delta[gO2, 3 + j2]] - 
    (I/20)*g1^2*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*ZD[gI1, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/20)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI2, j2]]*ZD[gI1, j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*ZD[gI1, 3 + j2]] - 
    (I/30)*g1^2*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZD[gI1, 3 + j2]] - 
    ((2*I)/3)*g3^2*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZD[gI1, 3 + j2]] - 
    I*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
         Yd[j1, j2]]]*sum[j4, 1, 3, 
      sum[j3, 1, 3, conj[Yd[j3, j4]]*Delta[gO1, 3 + j3]]*ZD[gI1, j4]] - 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]*
     ThetaStep[gO1, 3] - ((3*I)/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]*ThetaStep[gO1, 3] - 
    (I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
       ZD[gI1, 3 + j1]]*ThetaStep[gO1, 3] - (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI2, j2]]*ZD[gI1, j2]]*ThetaStep[gO1, 3] - 
    ((3*I)/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
       ZD[gI1, j2]]*ThetaStep[gO1, 3] - (I/20)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*ZD[gI1, 3 + j2]]*ThetaStep[gO1, 3] - 
    (3*I)*sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yd[j1, gO1]]*
     sum[j4, 1, 3, sum[j3, 1, 3, conj[Yd[j3, j4]]*conj[ZD[gI2, 3 + j3]]]*
       ZD[gI1, j4]]*ThetaStep[gO1, 3] - (I/60)*g1^2*conj[ZD[gI2, gO2]]*
     sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZD[gI1, 3 + j1]]*ThetaStep[gO2, 3] + 
    ((2*I)/3)*g3^2*conj[ZD[gI2, gO2]]*sum[j1, 1, 3, Delta[gO1, 3 + j1]*
       ZD[gI1, 3 + j1]]*ThetaStep[gO2, 3] - (I/60)*g1^2*conj[ZD[gI2, gO2]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZD[gI1, 3 + j2]]*ThetaStep[gO2, 3] + 
    ((2*I)/3)*g3^2*conj[ZD[gI2, gO2]]*sum[j2, 1, 3, Delta[gO1, 3 + j2]*
       ZD[gI1, 3 + j2]]*ThetaStep[gO2, 3] - 
    (3*I)*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
        Yd[j1, j2]*ZD[gI1, 3 + j1]]]*sum[j3, 1, 3, conj[Yd[j3, gO2]]*
       Delta[gO1, 3 + j3]]*ThetaStep[gO2, 3] - 
    I*sum[j1, 1, 3, Yd[j1, gO1]*ZD[gI1, 3 + j1]]*
     sum[j3, 1, 3, conj[Yd[j3, gO2]]*conj[ZD[gI2, 3 + j3]]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3] - (I/60)*g1^2*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
       Delta[gO2, 3 + j1]]*ThetaStep[gO1, 3]*ZD[gI1, gO1] + 
    ((2*I)/3)*g3^2*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*Delta[gO2, 3 + j1]]*
     ThetaStep[gO1, 3]*ZD[gI1, gO1] - (I/60)*g1^2*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*Delta[gO2, 3 + j2]]*
     ThetaStep[gO1, 3]*ZD[gI1, gO1] + ((2*I)/3)*g3^2*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*Delta[gO2, 3 + j2]]*
     ThetaStep[gO1, 3]*ZD[gI1, gO1] - (I/60)*g1^2*conj[ZD[gI2, gO2]]*
     ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*ZD[gI1, gO1] - 
    (I/4)*g2^2*conj[ZD[gI2, gO2]]*ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*
     ZD[gI1, gO1] - ((4*I)/3)*g3^2*conj[ZD[gI2, gO2]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZD[gI1, gO1]), 
 Cp[USd[{gO1_}], conj[USd[{gO2_}]], conj[Su[{gI1_}]], Su[{gI2_}]] -> 
  (-I)*((-1/20*I)*g1^2*sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*ZU[gI1, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/20)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI2, j2]]*ZU[gI1, j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*ZU[gI1, 3 + j2]] - 
    I*sum[j2, 1, 3, conj[ZU[gI2, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
         Yd[j1, j2]]]*sum[j4, 1, 3, 
      sum[j3, 1, 3, conj[Yd[j3, j4]]*Delta[gO1, 3 + j3]]*ZU[gI1, j4]] - 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]]*
     ThetaStep[gO1, 3] + ((3*I)/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]]*ThetaStep[gO1, 3] + 
    (I/10)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
       ZU[gI1, 3 + j1]]*ThetaStep[gO1, 3] - (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZU[gI2, j2]]*ZU[gI1, j2]]*ThetaStep[gO1, 3] + 
    ((3*I)/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*
       ZU[gI1, j2]]*ThetaStep[gO1, 3] + (I/10)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*ZU[gI1, 3 + j2]]*ThetaStep[gO1, 3] - 
    I*sum[j1, 1, 3, Yu[j1, gO1]*ZU[gI1, 3 + j1]]*
     sum[j3, 1, 3, conj[Yu[j3, gO2]]*conj[ZU[gI2, 3 + j3]]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3] - (I/2)*g2^2*conj[ZU[gI2, gO2]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZU[gI1, gO1]), 
 Cp[USd[{gO1_}], Se[{gI1_}], conj[USd[{gO2_}]], conj[Se[{gI2_}]]] -> 
  (-I)*((I/20)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/20)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*ZE[gI2, 3 + j2]] + 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*
     ThetaStep[gO1, 3] - (I/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*ThetaStep[gO1, 3] - 
    (I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       ZE[gI2, 3 + j1]]*ThetaStep[gO1, 3] + (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]]*ThetaStep[gO1, 3] - 
    (I/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]]*
     ThetaStep[gO1, 3] - (I/20)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*ZE[gI2, 3 + j2]]*ThetaStep[gO1, 3] - 
    I*sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yd[j1, gO1]]*
     sum[j4, 1, 3, sum[j3, 1, 3, conj[Ye[j3, j4]]*conj[ZE[gI1, 3 + j3]]]*
       ZE[gI2, j4]]*ThetaStep[gO1, 3] - 
    I*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
        Ye[j1, j2]*ZE[gI2, 3 + j1]]]*sum[j3, 1, 3, conj[Yd[j3, gO2]]*
       Delta[gO1, 3 + j3]]*ThetaStep[gO2, 3]), 
 Cp[Ah[{gI2_}], Sd[{gI1_}], conj[USd[{gO2_}]]] -> 
  (-I)*((sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
          T[Yd][j1, j2]]]*ZA[gI2, 1])/Sqrt[2] - 
    (sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*conj[T[Yd][j1, gO2]]]*
      ThetaStep[gO2, 3]*ZA[gI2, 1])/Sqrt[2] + 
    (conj[\[Mu]]*sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, 
         Delta[gO2, 3 + j1]*Yd[j1, j2]]]*ZA[gI2, 2])/Sqrt[2] - 
    (\[Mu]*sum[j1, 1, 3, conj[Yd[j1, gO2]]*conj[ZD[gI1, 3 + j1]]]*
      ThetaStep[gO2, 3]*ZA[gI2, 2])/Sqrt[2]), 
 Cp[hh[{gI2_}], Sd[{gI1_}], conj[USd[{gO2_}]]] -> 
  (-I)*((I/10)*g1^2*vd*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*
       Delta[gO2, 3 + j1]]*ZH[gI2, 1] - 
    (I*sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
          T[Yd][j1, j2]]]*ZH[gI2, 1])/Sqrt[2] - 
    I*vd*sum[j3, 1, 3, conj[ZD[gI1, 3 + j3]]*sum[j2, 1, 3, 
        Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yd[j3, j1]]*Yd[j2, j1]]]]*
     ZH[gI2, 1] + (I/20)*g1^2*vd*conj[ZD[gI1, gO2]]*ThetaStep[gO2, 3]*
     ZH[gI2, 1] + (I/4)*g2^2*vd*conj[ZD[gI1, gO2]]*ThetaStep[gO2, 3]*
     ZH[gI2, 1] - (I*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*
        conj[T[Yd][j1, gO2]]]*ThetaStep[gO2, 3]*ZH[gI2, 1])/Sqrt[2] - 
    I*vd*sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, 
        conj[Yd[j1, gO2]]*Yd[j1, j2]]]*ThetaStep[gO2, 3]*ZH[gI2, 1] - 
    (I/10)*g1^2*vu*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*Delta[gO2, 3 + j1]]*
     ZH[gI2, 2] + (I*conj[\[Mu]]*sum[j2, 1, 3, conj[ZD[gI1, j2]]*
        sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yd[j1, j2]]]*ZH[gI2, 2])/Sqrt[2] - 
    (I/20)*g1^2*vu*conj[ZD[gI1, gO2]]*ThetaStep[gO2, 3]*ZH[gI2, 2] - 
    (I/4)*g2^2*vu*conj[ZD[gI1, gO2]]*ThetaStep[gO2, 3]*ZH[gI2, 2] + 
    (I*\[Mu]*sum[j1, 1, 3, conj[Yd[j1, gO2]]*conj[ZD[gI1, 3 + j1]]]*
      ThetaStep[gO2, 3]*ZH[gI2, 2])/Sqrt[2]), 
 Cp[Hpm[{gI2_}], Su[{gI1_}], conj[USd[{gO2_}]]] -> 
  (-I)*(I*sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, 
        Delta[gO2, 3 + j1]*T[Yd][j1, j2]]]*ZP[gI2, 1] + 
    (I*vu*sum[j3, 1, 3, conj[ZU[gI1, 3 + j3]]*sum[j2, 1, 3, 
         Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yu[j3, j1]]*Yd[j2, j1]]]]*
      ZP[gI2, 1])/Sqrt[2] - ((I/2)*g2^2*vd*conj[ZU[gI1, gO2]]*
      ThetaStep[gO2, 3]*ZP[gI2, 1])/Sqrt[2] + 
    I*\[Mu]*sum[j1, 1, 3, conj[Yu[j1, gO2]]*conj[ZU[gI1, 3 + j1]]]*
     ThetaStep[gO2, 3]*ZP[gI2, 1] + 
    (I*vd*sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, 
         conj[Yd[j1, gO2]]*Yd[j1, j2]]]*ThetaStep[gO2, 3]*ZP[gI2, 1])/
     Sqrt[2] + I*conj[\[Mu]]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*
       sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yd[j1, j2]]]*ZP[gI2, 2] + 
    (I*vd*sum[j3, 1, 3, conj[ZU[gI1, 3 + j3]]*sum[j2, 1, 3, 
         Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yu[j3, j1]]*Yd[j2, j1]]]]*
      ZP[gI2, 2])/Sqrt[2] - ((I/2)*g2^2*vu*conj[ZU[gI1, gO2]]*
      ThetaStep[gO2, 3]*ZP[gI2, 2])/Sqrt[2] + 
    I*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*conj[T[Yu][j1, gO2]]]*
     ThetaStep[gO2, 3]*ZP[gI2, 2] + 
    (I*vu*sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, 
         conj[Yu[j1, gO2]]*Yu[j1, j2]]]*ThetaStep[gO2, 3]*ZP[gI2, 2])/
     Sqrt[2]), Cp[Glu, Fd[{gI2_}], conj[USd[{gO2_}]]][PR] -> 
  Sqrt[2]*g3*conj[PhaseGlu]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*ZDR[gI2, j1]], 
 Cp[Glu, Fd[{gI2_}], conj[USd[{gO1_}]]][PL] -> 
  -(Sqrt[2]*g3*PhaseGlu*conj[ZDL[gI2, gO1]]*ThetaStep[gO1, 3]), 
 Cp[Sd[{gI2_}], conj[USd[{gO2_}]], VG] -> g3*conj[ZD[gI2, gO2]]*
   ThetaStep[gI2, 6], Cp[Sd[{gI2_}], conj[USd[{gO2_}]], VP] -> 
  I*((I*g1*Cos[ThetaW[]]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
        Delta[gO2, 3 + j1]])/Sqrt[15] - 
    ((I/2)*g1*conj[ZD[gI2, gO2]]*Cos[ThetaW[]]*ThetaStep[gO2, 3])/Sqrt[15] + 
    (I/2)*g2*conj[ZD[gI2, gO2]]*Sin[ThetaW[]]*ThetaStep[gO2, 3]), 
 Cp[Sd[{gI2_}], conj[USd[{gO2_}]], VZ] -> 
  I*(((-I)*g1*Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
        Delta[gO2, 3 + j1]])/Sqrt[15] + (I/2)*g2*conj[ZD[gI2, gO2]]*
     Cos[ThetaW[]]*ThetaStep[gO2, 3] + 
    ((I/2)*g1*conj[ZD[gI2, gO2]]*Sin[ThetaW[]]*ThetaStep[gO2, 3])/Sqrt[15]), 
 Cp[Su[{gI2_}], conj[USd[{gO2_}]], VWm] -> 
  (g2*conj[ZU[gI2, gO2]]*ThetaStep[gO2, 3])/Sqrt[2], 
 Cp[USv[{gO1_}], conj[USv[{gO2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*Delta[gO1, gO2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[gO1, gO2]*Sin[ThetaW[]] + 
    ((3*I)/10)*g1^2*Delta[gO1, gO2]*Sin[ThetaW[]]^2), 
 Cp[USv[{gO1_}], conj[USv[{gO2_}]], conj[VWm], VWm] -> 
  (g2^2*Delta[gO1, gO2])/2, Cp[Ah[{gI1_}], Ah[{gI2_}], USv[{gO1_}], 
   conj[USv[{gO2_}]]] -> (-I)*(((-3*I)/20)*g1^2*Delta[gO1, gO2]*ZA[gI1, 1]*
     ZA[gI2, 1] - (I/4)*g2^2*Delta[gO1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], USv[{gO1_}], conj[USv[{gO2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[gO1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] - 
    (I/4)*g2^2*Delta[gO1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Hpm[{gI1_}], USv[{gO1_}], conj[Hpm[{gI2_}]], conj[USv[{gO2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[gO1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    I*sum[j1, 1, 3, conj[Ye[j1, gO2]]*Ye[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZP[gI1, 1]*ZP[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*Delta[gO1, gO2]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[bar[Cha[{gI1_}]], Fe[{gI2_}], conj[USv[{gO2_}]]][PR] -> 
  sum[j1, 1, 3, conj[Ye[j1, gO2]]*ZER[gI2, j1]]*ThetaStep[gO2, 3]*UM[gI1, 2], 
 Cp[bar[Cha[{gI1_}]], Fe[{gI2_}], conj[USv[{gO1_}]]][PL] -> 
  -(g2*conj[UP[gI1, 1]]*conj[ZEL[gI2, gO1]]*ThetaStep[gO1, 3]), 
 Cp[Se[{gI2_}], conj[Hpm[{gI1_}]], conj[USv[{gO2_}]]] -> 
  (-I)*(((-1/2*I)*g2^2*vd*conj[ZE[gI2, gO2]]*ThetaStep[gO2, 3]*ZP[gI1, 1])/
     Sqrt[2] + I*sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*conj[T[Ye][j1, gO2]]]*
     ThetaStep[gO2, 3]*ZP[gI1, 1] + 
    (I*vd*sum[j2, 1, 3, conj[ZE[gI2, j2]]*sum[j1, 1, 3, 
         conj[Ye[j1, gO2]]*Ye[j1, j2]]]*ThetaStep[gO2, 3]*ZP[gI1, 1])/
     Sqrt[2] - ((I/2)*g2^2*vu*conj[ZE[gI2, gO2]]*ThetaStep[gO2, 3]*
      ZP[gI1, 2])/Sqrt[2] + I*\[Mu]*sum[j1, 1, 3, conj[Ye[j1, gO2]]*
       conj[ZE[gI2, 3 + j1]]]*ThetaStep[gO2, 3]*ZP[gI1, 2]), 
 Cp[Sv[{gI1_}], USv[{gO1_}], conj[Sv[{gI2_}]], conj[USv[{gO2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[gI1, gI2]*Delta[gO1, gO2] - 
    (I/4)*g2^2*Delta[gI1, gI2]*Delta[gO1, gO2] - 
    ((3*I)/20)*g1^2*conj[ZV[gI1, gO2]]*ThetaStep[gI1, 3]*ThetaStep[gI2, 3]*
     ZV[gI2, gO1] - (I/4)*g2^2*conj[ZV[gI1, gO2]]*ThetaStep[gI1, 3]*
     ThetaStep[gI2, 3]*ZV[gI2, gO1]), 
 Cp[hh[{gI2_}], Sv[{gI1_}], conj[USv[{gO2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*conj[ZV[gI1, gO2]]*ThetaStep[gI1, 3]*ZH[gI2, 1] - 
    (I/4)*g2^2*vd*conj[ZV[gI1, gO2]]*ThetaStep[gI1, 3]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*vu*conj[ZV[gI1, gO2]]*ThetaStep[gI1, 3]*ZH[gI2, 2] + 
    (I/4)*g2^2*vu*conj[ZV[gI1, gO2]]*ThetaStep[gI1, 3]*ZH[gI2, 2]), 
 Cp[Chi[{gI2_}], Fv[{gI1_}], conj[USv[{gO2_}]]][PR] -> 0, 
 Cp[Chi[{gI2_}], Fv[{gI1_}], conj[USv[{gO1_}]]][PL] -> 
  ((Sqrt[3/5]*g1*conj[ZN[gI2, 1]] - g2*conj[ZN[gI2, 2]])*Delta[gI1, gO1]*
    ThetaStep[gI1, 3])/Sqrt[2], Cp[Sd[{gI1_}], USv[{gO1_}], conj[Sd[{gI2_}]], 
   conj[USv[{gO2_}]]] -> 
  (-I)*((I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, j1]]*
       ZD[gI2, j1]] + (I/4)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] + 
    (I/10)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*
       ZD[gI2, 3 + j1]]), Cp[Se[{gI1_}], USv[{gO1_}], conj[Se[{gI2_}]], 
   conj[USv[{gO2_}]]] -> (-I)*(((-3*I)/20)*g1^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    (I/4)*g2^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    ((3*I)/10)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       ZE[gI2, 3 + j1]] - I*sum[j1, 1, 3, Ye[j1, gO1]*ZE[gI2, 3 + j1]]*
     sum[j3, 1, 3, conj[Ye[j3, gO2]]*conj[ZE[gI1, 3 + j3]]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3] - (I/2)*g2^2*conj[ZE[gI1, gO2]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZE[gI2, gO1]), 
 Cp[Su[{gI1_}], USv[{gO1_}], conj[Su[{gI2_}]], conj[USv[{gO2_}]]] -> 
  (-I)*((I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI1, j1]]*
       ZU[gI2, j1]] - (I/4)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] - 
    (I/5)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*
       ZU[gI2, 3 + j1]]), Cp[Sv[{gI2_}], conj[USv[{gO2_}]], VZ] -> 
  I*((-1/2*I)*g2*conj[ZV[gI2, gO2]]*Cos[ThetaW[]]*ThetaStep[gI2, 3] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZV[gI2, gO2]]*Sin[ThetaW[]]*ThetaStep[gI2, 3]), 
 Cp[Se[{gI2_}], conj[USv[{gO2_}]], conj[VWm]] -> 
  (g2*conj[ZE[gI2, gO2]]*ThetaStep[gO2, 3])/Sqrt[2], 
 Cp[USu[{gO1_}], conj[USu[{gO2_}]], VZ, VZ] -> 
  (-I)*(((8*I)/15)*g1^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, 
      Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]] + (I/2)*g2^2*Cos[ThetaW[]]^2*
     Delta[gO1, gO2]*ThetaStep[gO1, 3] - 
    (I*g1*g2*Cos[ThetaW[]]*Delta[gO1, gO2]*Sin[ThetaW[]]*ThetaStep[gO1, 3])/
     Sqrt[15] + (I/30)*g1^2*Delta[gO1, gO2]*Sin[ThetaW[]]^2*
     ThetaStep[gO1, 3]), Cp[USu[{gO1_}], conj[USu[{gO2_}]], conj[VWm], 
   VWm] -> (g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3])/2, 
 Cp[Ah[{gI1_}], Ah[{gI2_}], USu[{gO1_}], conj[USu[{gO2_}]]] -> 
  (-I)*((-1/5*I)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZA[gI1, 1]*ZA[gI2, 1] + (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZA[gI1, 1]*ZA[gI2, 1] - (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZA[gI1, 1]*ZA[gI2, 1] + (I/5)*g1^2*sum[j1, 1, 3, 
      Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*ZA[gI1, 2]*ZA[gI2, 2] - 
    I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*sum[j2, 1, 3, Delta[gO2, 3 + j2]*
         sum[j1, 1, 3, conj[Yu[j3, j1]]*Yu[j2, j1]]]]*ZA[gI1, 2]*ZA[gI2, 2] - 
    (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZA[gI1, 2]*ZA[gI2, 2] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZA[gI1, 2]*ZA[gI2, 2] - 
    I*sum[j1, 1, 3, conj[Yu[j1, gO2]]*Yu[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], USu[{gO1_}], conj[USu[{gO2_}]]] -> 
  (-I)*((-1/5*I)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZH[gI1, 1]*ZH[gI2, 1] + (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZH[gI1, 1]*ZH[gI2, 1] - (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZH[gI1, 1]*ZH[gI2, 1] + (I/5)*g1^2*sum[j1, 1, 3, 
      Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*ZH[gI1, 2]*ZH[gI2, 2] - 
    I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*sum[j2, 1, 3, Delta[gO2, 3 + j2]*
         sum[j1, 1, 3, conj[Yu[j3, j1]]*Yu[j2, j1]]]]*ZH[gI1, 2]*ZH[gI2, 2] - 
    (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZH[gI1, 2]*ZH[gI2, 2] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZH[gI1, 2]*ZH[gI2, 2] - 
    I*sum[j1, 1, 3, conj[Yu[j1, gO2]]*Yu[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Hpm[{gI1_}], USu[{gO1_}], conj[Hpm[{gI2_}]], conj[USu[{gO2_}]]] -> 
  (-I)*((-1/5*I)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZP[gI1, 1]*ZP[gI2, 1] + (I/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZP[gI1, 1]*ZP[gI2, 1] + (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*
     ZP[gI1, 1]*ZP[gI2, 1] - I*sum[j1, 1, 3, conj[Yd[j1, gO2]]*Yd[j1, gO1]]*
     ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*ZP[gI1, 1]*ZP[gI2, 1] + 
    (I/5)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZP[gI1, 2]*ZP[gI2, 2] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yu[j3, j1]]*
           Yu[j2, j1]]]]*ZP[gI1, 2]*ZP[gI2, 2] - (I/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZP[gI1, 2]*ZP[gI2, 2] - (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[bar[Cha[{gI1_}]], Fd[{gI2_}], conj[USu[{gO2_}]]][PR] -> 
  sum[j1, 1, 3, conj[Yd[j1, gO2]]*ZDR[gI2, j1]]*ThetaStep[gO2, 3]*UM[gI1, 2], 
 Cp[bar[Cha[{gI1_}]], Fd[{gI2_}], conj[USu[{gO1_}]]][PL] -> 
  (-I)*(I*conj[UP[gI1, 2]]*sum[j2, 1, 3, conj[ZDL[gI2, j2]]*
       sum[j1, 1, 3, Delta[gO1, 3 + j1]*Yu[j1, j2]]] - 
    I*g2*conj[UP[gI1, 1]]*conj[ZDL[gI2, gO1]]*ThetaStep[gO1, 3]), 
 Cp[Sd[{gI2_}], conj[Hpm[{gI1_}]], conj[USu[{gO2_}]]] -> 
  (-I)*(I*conj[\[Mu]]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
       sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yu[j1, j2]]]*ZP[gI1, 1] + 
    (I*vu*sum[j3, 1, 3, conj[ZD[gI2, 3 + j3]]*sum[j2, 1, 3, 
         Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yd[j3, j1]]*Yu[j2, j1]]]]*
      ZP[gI1, 1])/Sqrt[2] - ((I/2)*g2^2*vd*conj[ZD[gI2, gO2]]*
      ThetaStep[gO2, 3]*ZP[gI1, 1])/Sqrt[2] + 
    I*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*conj[T[Yd][j1, gO2]]]*
     ThetaStep[gO2, 3]*ZP[gI1, 1] + 
    (I*vd*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
         conj[Yd[j1, gO2]]*Yd[j1, j2]]]*ThetaStep[gO2, 3]*ZP[gI1, 1])/
     Sqrt[2] + I*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
        Delta[gO2, 3 + j1]*T[Yu][j1, j2]]]*ZP[gI1, 2] + 
    (I*vd*sum[j3, 1, 3, conj[ZD[gI2, 3 + j3]]*sum[j2, 1, 3, 
         Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yd[j3, j1]]*Yu[j2, j1]]]]*
      ZP[gI1, 2])/Sqrt[2] - ((I/2)*g2^2*vu*conj[ZD[gI2, gO2]]*
      ThetaStep[gO2, 3]*ZP[gI1, 2])/Sqrt[2] + 
    I*\[Mu]*sum[j1, 1, 3, conj[Yd[j1, gO2]]*conj[ZD[gI2, 3 + j1]]]*
     ThetaStep[gO2, 3]*ZP[gI1, 2] + 
    (I*vu*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
         conj[Yu[j1, gO2]]*Yu[j1, j2]]]*ThetaStep[gO2, 3]*ZP[gI1, 2])/
     Sqrt[2]), Cp[USu[{gO1_}], Sv[{gI1_}], conj[USu[{gO2_}]], 
   conj[Sv[{gI2_}]]] -> (-I)*((-1/5*I)*g1^2*Delta[gI1, gI2]*
     sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]] + 
    (I/20)*g1^2*Delta[gI1, gI2]*Delta[gO1, gO2]*ThetaStep[gO1, 3] - 
    (I/4)*g2^2*Delta[gI1, gI2]*Delta[gO1, gO2]*ThetaStep[gO1, 3]), 
 Cp[Chi[{gI2_}], Fu[{gI1_}], conj[USu[{gO2_}]]][PR] -> 
  (-I)*((2*I)*Sqrt[2/15]*g1*sum[j1, 1, 3, Delta[gO2, 3 + j1]*ZUR[gI1, j1]]*
     ZN[gI2, 1] - I*sum[j1, 1, 3, conj[Yu[j1, gO2]]*ZUR[gI1, j1]]*
     ThetaStep[gO2, 3]*ZN[gI2, 4]), 
 Cp[Chi[{gI2_}], Fu[{gI1_}], conj[USu[{gO1_}]]][PL] -> 
  (-I)*((-I)*conj[ZN[gI2, 4]]*sum[j2, 1, 3, conj[ZUL[gI1, j2]]*
       sum[j1, 1, 3, Delta[gO1, 3 + j1]*Yu[j1, j2]]] - 
    (I*g1*conj[ZN[gI2, 1]]*conj[ZUL[gI1, gO1]]*ThetaStep[gO1, 3])/Sqrt[30] - 
    (I*g2*conj[ZN[gI2, 2]]*conj[ZUL[gI1, gO1]]*ThetaStep[gO1, 3])/Sqrt[2]), 
 Cp[Se[{gI1_}], USu[{gO1_}], conj[Se[{gI2_}]], conj[USu[{gO2_}]]] -> 
  (-I)*((-1/10*I)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*ZE[gI2, 3 + j2]] + 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*
     ThetaStep[gO1, 3] + (I/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*ThetaStep[gO1, 3] - 
    (I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       ZE[gI2, 3 + j1]]*ThetaStep[gO1, 3] + (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]]*ThetaStep[gO1, 3] + 
    (I/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]]*
     ThetaStep[gO1, 3] - (I/20)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*ZE[gI2, 3 + j2]]*ThetaStep[gO1, 3]), 
 Cp[USu[{gO1_}], conj[USu[{gO2_}]], conj[Sd[{gI1_}]], Sd[{gI2_}]] -> 
  (-I)*((I/10)*g1^2*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*ZD[gI1, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI2, j2]]*ZD[gI1, j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*ZD[gI1, 3 + j2]] - 
    I*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
         Yu[j1, j2]]]*sum[j4, 1, 3, 
      sum[j3, 1, 3, conj[Yu[j3, j4]]*Delta[gO1, 3 + j3]]*ZD[gI1, j4]] - 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]*
     ThetaStep[gO1, 3] + ((3*I)/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]*ThetaStep[gO1, 3] - 
    (I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
       ZD[gI1, 3 + j1]]*ThetaStep[gO1, 3] - (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI2, j2]]*ZD[gI1, j2]]*ThetaStep[gO1, 3] + 
    ((3*I)/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
       ZD[gI1, j2]]*ThetaStep[gO1, 3] - (I/20)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI2, 3 + j2]]*ZD[gI1, 3 + j2]]*ThetaStep[gO1, 3] - 
    I*sum[j1, 1, 3, Yd[j1, gO1]*ZD[gI1, 3 + j1]]*
     sum[j3, 1, 3, conj[Yd[j3, gO2]]*conj[ZD[gI2, 3 + j3]]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3] - (I/2)*g2^2*conj[ZD[gI2, gO2]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZD[gI1, gO1]), 
 Cp[USu[{gO1_}], conj[USu[{gO2_}]], conj[Su[{gI1_}]], Su[{gI2_}]] -> 
  (-I)*(((-2*I)/15)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZU[gI1, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*Delta[gO2, 3 + j2]] - 
    ((2*I)/3)*g3^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZU[gI1, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*Delta[gO2, 3 + j2]] + 
    (I/10)*g1^2*sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    ((2*I)/5)*g1^2*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*ZU[gI1, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI2, j2]]*ZU[gI1, j2]] - 
    ((2*I)/5)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*ZU[gI1, 3 + j2]] - 
    ((2*I)/15)*g1^2*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZU[gI1, 3 + j2]] - 
    ((2*I)/3)*g3^2*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZU[gI1, 3 + j2]] - 
    I*sum[j2, 1, 3, conj[ZU[gI2, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
         Yu[j1, j2]]]*sum[j4, 1, 3, 
      sum[j3, 1, 3, conj[Yu[j3, j4]]*Delta[gO1, 3 + j3]]*ZU[gI1, j4]] - 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]]*
     ThetaStep[gO1, 3] - ((3*I)/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]]*ThetaStep[gO1, 3] + 
    (I/10)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
       ZU[gI1, 3 + j1]]*ThetaStep[gO1, 3] - (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZU[gI2, j2]]*ZU[gI1, j2]]*ThetaStep[gO1, 3] - 
    ((3*I)/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*
       ZU[gI1, j2]]*ThetaStep[gO1, 3] + (I/10)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*ZU[gI1, 3 + j2]]*ThetaStep[gO1, 3] - 
    (3*I)*sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yu[j1, gO1]]*
     sum[j4, 1, 3, sum[j3, 1, 3, conj[Yu[j3, j4]]*conj[ZU[gI2, 3 + j3]]]*
       ZU[gI1, j4]]*ThetaStep[gO1, 3] + (I/30)*g1^2*conj[ZU[gI2, gO2]]*
     sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZU[gI1, 3 + j1]]*ThetaStep[gO2, 3] + 
    ((2*I)/3)*g3^2*conj[ZU[gI2, gO2]]*sum[j1, 1, 3, Delta[gO1, 3 + j1]*
       ZU[gI1, 3 + j1]]*ThetaStep[gO2, 3] + (I/30)*g1^2*conj[ZU[gI2, gO2]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZU[gI1, 3 + j2]]*ThetaStep[gO2, 3] + 
    ((2*I)/3)*g3^2*conj[ZU[gI2, gO2]]*sum[j2, 1, 3, Delta[gO1, 3 + j2]*
       ZU[gI1, 3 + j2]]*ThetaStep[gO2, 3] - 
    (3*I)*sum[j2, 1, 3, conj[ZU[gI2, j2]]*sum[j1, 1, 3, 
        Yu[j1, j2]*ZU[gI1, 3 + j1]]]*sum[j3, 1, 3, conj[Yu[j3, gO2]]*
       Delta[gO1, 3 + j3]]*ThetaStep[gO2, 3] - 
    I*sum[j1, 1, 3, Yu[j1, gO1]*ZU[gI1, 3 + j1]]*
     sum[j3, 1, 3, conj[Yu[j3, gO2]]*conj[ZU[gI2, 3 + j3]]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3] + (I/30)*g1^2*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
       Delta[gO2, 3 + j1]]*ThetaStep[gO1, 3]*ZU[gI1, gO1] + 
    ((2*I)/3)*g3^2*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*Delta[gO2, 3 + j1]]*
     ThetaStep[gO1, 3]*ZU[gI1, gO1] + (I/30)*g1^2*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*Delta[gO2, 3 + j2]]*
     ThetaStep[gO1, 3]*ZU[gI1, gO1] + ((2*I)/3)*g3^2*
     sum[j2, 1, 3, conj[ZU[gI2, 3 + j2]]*Delta[gO2, 3 + j2]]*
     ThetaStep[gO1, 3]*ZU[gI1, gO1] - (I/60)*g1^2*conj[ZU[gI2, gO2]]*
     ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*ZU[gI1, gO1] - 
    (I/4)*g2^2*conj[ZU[gI2, gO2]]*ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*
     ZU[gI1, gO1] - ((4*I)/3)*g3^2*conj[ZU[gI2, gO2]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZU[gI1, gO1]), 
 Cp[Ah[{gI2_}], Su[{gI1_}], conj[USu[{gO2_}]]] -> 
  (-I)*((conj[\[Mu]]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*
        sum[j1, 1, 3, Delta[gO2, 3 + j1]*Yu[j1, j2]]]*ZA[gI2, 1])/Sqrt[2] - 
    (\[Mu]*sum[j1, 1, 3, conj[Yu[j1, gO2]]*conj[ZU[gI1, 3 + j1]]]*
      ThetaStep[gO2, 3]*ZA[gI2, 1])/Sqrt[2] + 
    (sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
          T[Yu][j1, j2]]]*ZA[gI2, 2])/Sqrt[2] - 
    (sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*conj[T[Yu][j1, gO2]]]*
      ThetaStep[gO2, 3]*ZA[gI2, 2])/Sqrt[2]), 
 Cp[hh[{gI2_}], Su[{gI1_}], conj[USu[{gO2_}]]] -> 
  (-I)*((-1/5*I)*g1^2*vd*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*
       Delta[gO2, 3 + j1]]*ZH[gI2, 1] + 
    (I*conj[\[Mu]]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, 
         Delta[gO2, 3 + j1]*Yu[j1, j2]]]*ZH[gI2, 1])/Sqrt[2] + 
    (I/20)*g1^2*vd*conj[ZU[gI1, gO2]]*ThetaStep[gO2, 3]*ZH[gI2, 1] - 
    (I/4)*g2^2*vd*conj[ZU[gI1, gO2]]*ThetaStep[gO2, 3]*ZH[gI2, 1] + 
    (I*\[Mu]*sum[j1, 1, 3, conj[Yu[j1, gO2]]*conj[ZU[gI1, 3 + j1]]]*
      ThetaStep[gO2, 3]*ZH[gI2, 1])/Sqrt[2] + 
    (I/5)*g1^2*vu*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*Delta[gO2, 3 + j1]]*
     ZH[gI2, 2] - (I*sum[j2, 1, 3, conj[ZU[gI1, j2]]*
        sum[j1, 1, 3, Delta[gO2, 3 + j1]*T[Yu][j1, j2]]]*ZH[gI2, 2])/
     Sqrt[2] - I*vu*sum[j3, 1, 3, conj[ZU[gI1, 3 + j3]]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Yu[j3, j1]]*
           Yu[j2, j1]]]]*ZH[gI2, 2] - (I/20)*g1^2*vu*conj[ZU[gI1, gO2]]*
     ThetaStep[gO2, 3]*ZH[gI2, 2] + (I/4)*g2^2*vu*conj[ZU[gI1, gO2]]*
     ThetaStep[gO2, 3]*ZH[gI2, 2] - 
    (I*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*conj[T[Yu][j1, gO2]]]*
      ThetaStep[gO2, 3]*ZH[gI2, 2])/Sqrt[2] - 
    I*vu*sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, 
        conj[Yu[j1, gO2]]*Yu[j1, j2]]]*ThetaStep[gO2, 3]*ZH[gI2, 2]), 
 Cp[Glu, Fu[{gI2_}], conj[USu[{gO2_}]]][PR] -> Sqrt[2]*g3*conj[PhaseGlu]*
   sum[j1, 1, 3, Delta[gO2, 3 + j1]*ZUR[gI2, j1]], 
 Cp[Glu, Fu[{gI2_}], conj[USu[{gO1_}]]][PL] -> 
  -(Sqrt[2]*g3*PhaseGlu*conj[ZUL[gI2, gO1]]*ThetaStep[gO1, 3]), 
 Cp[Sd[{gI2_}], conj[USu[{gO2_}]], conj[VWm]] -> 
  (g2*conj[ZD[gI2, gO2]]*ThetaStep[gO2, 3])/Sqrt[2], 
 Cp[Su[{gI2_}], conj[USu[{gO2_}]], VG] -> g3*conj[ZU[gI2, gO2]]*
   ThetaStep[gI2, 6], Cp[Su[{gI2_}], conj[USu[{gO2_}]], VP] -> 
  I*(((-2*I)*g1*Cos[ThetaW[]]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
        Delta[gO2, 3 + j1]])/Sqrt[15] - 
    ((I/2)*g1*conj[ZU[gI2, gO2]]*Cos[ThetaW[]]*ThetaStep[gO2, 3])/Sqrt[15] - 
    (I/2)*g2*conj[ZU[gI2, gO2]]*Sin[ThetaW[]]*ThetaStep[gO2, 3]), 
 Cp[Su[{gI2_}], conj[USu[{gO2_}]], VZ] -> 
  I*(((2*I)*g1*Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
        Delta[gO2, 3 + j1]])/Sqrt[15] - (I/2)*g2*conj[ZU[gI2, gO2]]*
     Cos[ThetaW[]]*ThetaStep[gO2, 3] + 
    ((I/2)*g1*conj[ZU[gI2, gO2]]*Sin[ThetaW[]]*ThetaStep[gO2, 3])/Sqrt[15]), 
 Cp[USe[{gO1_}], conj[USe[{gO2_}]], VZ, VZ] -> 
  (-I)*(((6*I)/5)*g1^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, 
      Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]] + (I/2)*g2^2*Cos[ThetaW[]]^2*
     Delta[gO1, gO2]*ThetaStep[gO1, 3] - I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*
     Delta[gO1, gO2]*Sin[ThetaW[]]*ThetaStep[gO1, 3] + 
    ((3*I)/10)*g1^2*Delta[gO1, gO2]*Sin[ThetaW[]]^2*ThetaStep[gO1, 3]), 
 Cp[USe[{gO1_}], conj[USe[{gO2_}]], conj[VWm], VWm] -> 
  (g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3])/2, 
 Cp[Ah[{gI1_}], Ah[{gI2_}], USe[{gO1_}], conj[USe[{gO2_}]]] -> 
  (-I)*(((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZA[gI1, 1]*ZA[gI2, 1] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Ye[j3, j1]]*
           Ye[j2, j1]]]]*ZA[gI1, 1]*ZA[gI2, 1] - 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZA[gI1, 1]*ZA[gI2, 1] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZA[gI1, 1]*ZA[gI2, 1] - 
    I*sum[j1, 1, 3, conj[Ye[j1, gO2]]*Ye[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZA[gI1, 1]*ZA[gI2, 1] - 
    ((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZA[gI1, 2]*ZA[gI2, 2] + ((3*I)/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZA[gI1, 2]*ZA[gI2, 2] - (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], USe[{gO1_}], conj[USe[{gO2_}]]] -> 
  (-I)*(((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZH[gI1, 1]*ZH[gI2, 1] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Ye[j3, j1]]*
           Ye[j2, j1]]]]*ZH[gI1, 1]*ZH[gI2, 1] - 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZH[gI1, 1]*ZH[gI2, 1] + 
    (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZH[gI1, 1]*ZH[gI2, 1] - 
    I*sum[j1, 1, 3, conj[Ye[j1, gO2]]*Ye[j1, gO1]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZH[gI1, 1]*ZH[gI2, 1] - 
    ((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZH[gI1, 2]*ZH[gI2, 2] + ((3*I)/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZH[gI1, 2]*ZH[gI2, 2] - (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Hpm[{gI1_}], USe[{gO1_}], conj[Hpm[{gI2_}]], conj[USe[{gO2_}]]] -> 
  (-I)*(((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZP[gI1, 1]*ZP[gI2, 1] - I*sum[j3, 1, 3, Delta[gO1, 3 + j3]*
       sum[j2, 1, 3, Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Ye[j3, j1]]*
           Ye[j2, j1]]]]*ZP[gI1, 1]*ZP[gI2, 1] - 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[gO1, gO2]*ThetaStep[gO1, 3]*ZP[gI1, 1]*ZP[gI2, 1] - 
    ((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     ZP[gI1, 2]*ZP[gI2, 2] + ((3*I)/20)*g1^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZP[gI1, 2]*ZP[gI2, 2] + (I/4)*g2^2*Delta[gO1, gO2]*
     ThetaStep[gO1, 3]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[USe[{gO1_}], Sv[{gI1_}], conj[USe[{gO2_}]], conj[Sv[{gI2_}]]] -> 
  (-I)*(((3*I)/10)*g1^2*Delta[gI1, gI2]*sum[j1, 1, 3, 
      Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]] - 
    I*sum[j2, 1, 3, conj[ZV[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
         Ye[j1, j2]]]*sum[j4, 1, 3, 
      sum[j3, 1, 3, conj[Ye[j3, j4]]*Delta[gO1, 3 + j3]]*ZV[gI2, j4]] - 
    ((3*I)/20)*g1^2*Delta[gI1, gI2]*Delta[gO1, gO2]*ThetaStep[gO1, 3] + 
    (I/4)*g2^2*Delta[gI1, gI2]*Delta[gO1, gO2]*ThetaStep[gO1, 3] - 
    (I/2)*g2^2*conj[ZV[gI1, gO2]]*ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*
     ZV[gI2, gO1]), Cp[Hpm[{gI2_}], Sv[{gI1_}], conj[USe[{gO2_}]]] -> 
  (-I)*(I*sum[j2, 1, 3, conj[ZV[gI1, j2]]*sum[j1, 1, 3, 
        Delta[gO2, 3 + j1]*T[Ye][j1, j2]]]*ZP[gI2, 1] - 
    ((I/2)*g2^2*vd*conj[ZV[gI1, gO2]]*ThetaStep[gO2, 3]*ZP[gI2, 1])/Sqrt[2] + 
    (I*vd*sum[j2, 1, 3, conj[ZV[gI1, j2]]*sum[j1, 1, 3, 
         conj[Ye[j1, gO2]]*Ye[j1, j2]]]*ThetaStep[gO2, 3]*ZP[gI2, 1])/
     Sqrt[2] + I*conj[\[Mu]]*sum[j2, 1, 3, conj[ZV[gI1, j2]]*
       sum[j1, 1, 3, Delta[gO2, 3 + j1]*Ye[j1, j2]]]*ZP[gI2, 2] - 
    ((I/2)*g2^2*vu*conj[ZV[gI1, gO2]]*ThetaStep[gO2, 3]*ZP[gI2, 2])/Sqrt[2]), 
 Cp[Cha[{gI2_}], Fv[{gI1_}], conj[USe[{gO2_}]]][PR] -> 0, 
 Cp[Cha[{gI2_}], Fv[{gI1_}], conj[USe[{gO1_}]]][PL] -> 
  (-I)*(I*conj[UM[gI2, 2]]*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Ye[j1, gI1]] - 
    I*g2*conj[UM[gI2, 1]]*Delta[gI1, gO1]*ThetaStep[gI1, 3]), 
 Cp[Chi[{gI2_}], Fe[{gI1_}], conj[USe[{gO2_}]]][PR] -> 
  (-I)*((-I)*Sqrt[6/5]*g1*sum[j1, 1, 3, Delta[gO2, 3 + j1]*ZER[gI1, j1]]*
     ZN[gI2, 1] - I*sum[j1, 1, 3, conj[Ye[j1, gO2]]*ZER[gI1, j1]]*
     ThetaStep[gO2, 3]*ZN[gI2, 3]), 
 Cp[Chi[{gI2_}], Fe[{gI1_}], conj[USe[{gO1_}]]][PL] -> 
  (-I)*((-I)*conj[ZN[gI2, 3]]*sum[j2, 1, 3, conj[ZEL[gI1, j2]]*
       sum[j1, 1, 3, Delta[gO1, 3 + j1]*Ye[j1, j2]]] + 
    I*Sqrt[3/10]*g1*conj[ZEL[gI1, gO1]]*conj[ZN[gI2, 1]]*ThetaStep[gO1, 3] + 
    (I*g2*conj[ZEL[gI1, gO1]]*conj[ZN[gI2, 2]]*ThetaStep[gO1, 3])/Sqrt[2]), 
 Cp[Sd[{gI1_}], USe[{gO1_}], conj[Sd[{gI2_}]], conj[USe[{gO2_}]]] -> 
  (-I)*((-1/20*I)*g1^2*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/20)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI1, j2]]*ZD[gI2, j2]] - 
    (I/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZD[gI1, 3 + j2]]*ZD[gI2, 3 + j2]] + 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]]*
     ThetaStep[gO1, 3] - (I/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]]*ThetaStep[gO1, 3] + 
    (I/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*
       ZD[gI2, 3 + j1]]*ThetaStep[gO1, 3] + (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI1, j2]]*ZD[gI2, j2]]*ThetaStep[gO1, 3] - 
    (I/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZD[gI1, j2]]*ZD[gI2, j2]]*
     ThetaStep[gO1, 3] + (I/20)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI1, 3 + j2]]*ZD[gI2, 3 + j2]]*ThetaStep[gO1, 3] - 
    I*sum[j1, 1, 3, Delta[gO2, 3 + j1]*Ye[j1, gO1]]*
     sum[j4, 1, 3, sum[j3, 1, 3, conj[Yd[j3, j4]]*conj[ZD[gI1, 3 + j3]]]*
       ZD[gI2, j4]]*ThetaStep[gO1, 3] - 
    I*sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, 
        Yd[j1, j2]*ZD[gI2, 3 + j1]]]*sum[j3, 1, 3, conj[Ye[j3, gO2]]*
       Delta[gO1, 3 + j3]]*ThetaStep[gO2, 3]), 
 Cp[Se[{gI1_}], USe[{gO1_}], conj[Se[{gI2_}]], conj[USe[{gO2_}]]] -> 
  (-I)*(((-3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZE[gI2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*Delta[gO2, 3 + j2]] + 
    ((3*I)/20)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    ((3*I)/10)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    ((3*I)/20)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]] - 
    ((3*I)/10)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*ZE[gI2, 3 + j2]] - 
    ((3*I)/10)*g1^2*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*ZE[gI2, 3 + j2]] - 
    I*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
         Ye[j1, j2]]]*sum[j4, 1, 3, 
      sum[j3, 1, 3, conj[Ye[j3, j4]]*Delta[gO1, 3 + j3]]*ZE[gI2, j4]] - 
    ((3*I)/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*
       ZE[gI2, j1]]*ThetaStep[gO1, 3] - (I/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]]*ThetaStep[gO1, 3] + 
    ((3*I)/20)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       ZE[gI2, 3 + j1]]*ThetaStep[gO1, 3] - ((3*I)/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]]*ThetaStep[gO1, 3] - 
    (I/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZE[gI1, j2]]*ZE[gI2, j2]]*
     ThetaStep[gO1, 3] + ((3*I)/20)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*ZE[gI2, 3 + j2]]*ThetaStep[gO1, 3] - 
    I*sum[j1, 1, 3, Delta[gO2, 3 + j1]*Ye[j1, gO1]]*
     sum[j4, 1, 3, sum[j3, 1, 3, conj[Ye[j3, j4]]*conj[ZE[gI1, 3 + j3]]]*
       ZE[gI2, j4]]*ThetaStep[gO1, 3] + ((3*I)/20)*g1^2*conj[ZE[gI1, gO2]]*
     sum[j1, 1, 3, Delta[gO1, 3 + j1]*ZE[gI2, 3 + j1]]*ThetaStep[gO2, 3] + 
    ((3*I)/20)*g1^2*conj[ZE[gI1, gO2]]*sum[j2, 1, 3, 
      Delta[gO1, 3 + j2]*ZE[gI2, 3 + j2]]*ThetaStep[gO2, 3] - 
    I*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
        Ye[j1, j2]*ZE[gI2, 3 + j1]]]*sum[j3, 1, 3, conj[Ye[j3, gO2]]*
       Delta[gO1, 3 + j3]]*ThetaStep[gO2, 3] - 
    I*sum[j1, 1, 3, Ye[j1, gO1]*ZE[gI2, 3 + j1]]*
     sum[j3, 1, 3, conj[Ye[j3, gO2]]*conj[ZE[gI1, 3 + j3]]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3] + ((3*I)/20)*g1^2*sum[j1, 1, 3, 
      conj[ZE[gI1, 3 + j1]]*Delta[gO2, 3 + j1]]*ThetaStep[gO1, 3]*
     ZE[gI2, gO1] + ((3*I)/20)*g1^2*sum[j2, 1, 3, conj[ZE[gI1, 3 + j2]]*
       Delta[gO2, 3 + j2]]*ThetaStep[gO1, 3]*ZE[gI2, gO1] - 
    ((3*I)/20)*g1^2*conj[ZE[gI1, gO2]]*ThetaStep[gO1, 3]*ThetaStep[gO2, 3]*
     ZE[gI2, gO1] - (I/4)*g2^2*conj[ZE[gI1, gO2]]*ThetaStep[gO1, 3]*
     ThetaStep[gO2, 3]*ZE[gI2, gO1]), 
 Cp[USe[{gO1_}], Su[{gI1_}], conj[USe[{gO2_}]], conj[Su[{gI2_}]]] -> 
  (-I)*((-1/20*I)*g1^2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]]*
     sum[j2, 1, 3, Delta[gO1, 3 + j2]*Delta[gO2, 3 + j2]] - 
    (I/20)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI1, j2]]*ZU[gI2, j2]] + 
    (I/5)*g1^2*sum[j1, 1, 3, Delta[gO1, 3 + j1]*Delta[gO2, 3 + j1]]*
     sum[j2, 1, 3, conj[ZU[gI1, 3 + j2]]*ZU[gI2, 3 + j2]] + 
    (I/40)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]]*
     ThetaStep[gO1, 3] + (I/8)*g2^2*Delta[gO1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]]*ThetaStep[gO1, 3] - 
    (I/10)*g1^2*Delta[gO1, gO2]*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*
       ZU[gI2, 3 + j1]]*ThetaStep[gO1, 3] + (I/40)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZU[gI1, j2]]*ZU[gI2, j2]]*ThetaStep[gO1, 3] + 
    (I/8)*g2^2*Delta[gO1, gO2]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*ZU[gI2, j2]]*
     ThetaStep[gO1, 3] - (I/10)*g1^2*Delta[gO1, gO2]*
     sum[j2, 1, 3, conj[ZU[gI1, 3 + j2]]*ZU[gI2, 3 + j2]]*ThetaStep[gO1, 3]), 
 Cp[Ah[{gI2_}], Se[{gI1_}], conj[USe[{gO2_}]]] -> 
  (-I)*((sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
          T[Ye][j1, j2]]]*ZA[gI2, 1])/Sqrt[2] - 
    (sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*conj[T[Ye][j1, gO2]]]*
      ThetaStep[gO2, 3]*ZA[gI2, 1])/Sqrt[2] + 
    (conj[\[Mu]]*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
         Delta[gO2, 3 + j1]*Ye[j1, j2]]]*ZA[gI2, 2])/Sqrt[2] - 
    (\[Mu]*sum[j1, 1, 3, conj[Ye[j1, gO2]]*conj[ZE[gI1, 3 + j1]]]*
      ThetaStep[gO2, 3]*ZA[gI2, 2])/Sqrt[2]), 
 Cp[hh[{gI2_}], Se[{gI1_}], conj[USe[{gO2_}]]] -> 
  (-I)*(((3*I)/10)*g1^2*vd*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       Delta[gO2, 3 + j1]]*ZH[gI2, 1] - 
    (I*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, Delta[gO2, 3 + j1]*
          T[Ye][j1, j2]]]*ZH[gI2, 1])/Sqrt[2] - 
    I*vd*sum[j3, 1, 3, conj[ZE[gI1, 3 + j3]]*sum[j2, 1, 3, 
        Delta[gO2, 3 + j2]*sum[j1, 1, 3, conj[Ye[j3, j1]]*Ye[j2, j1]]]]*
     ZH[gI2, 1] - ((3*I)/20)*g1^2*vd*conj[ZE[gI1, gO2]]*ThetaStep[gO2, 3]*
     ZH[gI2, 1] + (I/4)*g2^2*vd*conj[ZE[gI1, gO2]]*ThetaStep[gO2, 3]*
     ZH[gI2, 1] - (I*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
        conj[T[Ye][j1, gO2]]]*ThetaStep[gO2, 3]*ZH[gI2, 1])/Sqrt[2] - 
    I*vd*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
        conj[Ye[j1, gO2]]*Ye[j1, j2]]]*ThetaStep[gO2, 3]*ZH[gI2, 1] - 
    ((3*I)/10)*g1^2*vu*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       Delta[gO2, 3 + j1]]*ZH[gI2, 2] + 
    (I*conj[\[Mu]]*sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
         Delta[gO2, 3 + j1]*Ye[j1, j2]]]*ZH[gI2, 2])/Sqrt[2] + 
    ((3*I)/20)*g1^2*vu*conj[ZE[gI1, gO2]]*ThetaStep[gO2, 3]*ZH[gI2, 2] - 
    (I/4)*g2^2*vu*conj[ZE[gI1, gO2]]*ThetaStep[gO2, 3]*ZH[gI2, 2] + 
    (I*\[Mu]*sum[j1, 1, 3, conj[Ye[j1, gO2]]*conj[ZE[gI1, 3 + j1]]]*
      ThetaStep[gO2, 3]*ZH[gI2, 2])/Sqrt[2]), 
 Cp[Sv[{gI2_}], conj[USe[{gO2_}]], VWm] -> 
  (g2*conj[ZV[gI2, gO2]]*ThetaStep[gO2, 3])/Sqrt[2], 
 Cp[Se[{gI2_}], conj[USe[{gO2_}]], VP] -> 
  I*(I*Sqrt[3/5]*g1*Cos[ThetaW[]]*sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*
       Delta[gO2, 3 + j1]] + (I/2)*Sqrt[3/5]*g1*conj[ZE[gI2, gO2]]*
     Cos[ThetaW[]]*ThetaStep[gO2, 3] + (I/2)*g2*conj[ZE[gI2, gO2]]*
     Sin[ThetaW[]]*ThetaStep[gO2, 3]), 
 Cp[Se[{gI2_}], conj[USe[{gO2_}]], VZ] -> 
  I*((-I)*Sqrt[3/5]*g1*Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*
       Delta[gO2, 3 + j1]] + (I/2)*g2*conj[ZE[gI2, gO2]]*Cos[ThetaW[]]*
     ThetaStep[gO2, 3] - (I/2)*Sqrt[3/5]*g1*conj[ZE[gI2, gO2]]*Sin[ThetaW[]]*
     ThetaStep[gO2, 3]), Cp[bar[gWm], gWm, Uhh[{gO1_}]] -> 
  (-I)*((-1/4*I)*g2^2*vd*Delta[1, gO1] - (I/4)*g2^2*vu*Delta[2, gO1]), 
 Cp[bar[gWmC], gWmC, Uhh[{gO1_}]] -> 
  (-I)*((-1/4*I)*g2^2*vd*Delta[1, gO1] - (I/4)*g2^2*vu*Delta[2, gO1]), 
 Cp[bar[gZ], gZ, Uhh[{gO1_}]] -> 
  (-I)*((-1/4*I)*g2^2*vd*Cos[ThetaW[]]^2*Delta[1, gO1] - 
    (I/4)*g2^2*vu*Cos[ThetaW[]]^2*Delta[2, gO1] - (I/2)*Sqrt[3/5]*g1*g2*vd*
     Cos[ThetaW[]]*Delta[1, gO1]*Sin[ThetaW[]] - (I/2)*Sqrt[3/5]*g1*g2*vu*
     Cos[ThetaW[]]*Delta[2, gO1]*Sin[ThetaW[]] - 
    ((3*I)/20)*g1^2*vd*Delta[1, gO1]*Sin[ThetaW[]]^2 - 
    ((3*I)/20)*g1^2*vu*Delta[2, gO1]*Sin[ThetaW[]]^2), 
 Cp[Uhh[{gO2_}], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*vd*Cos[ThetaW[]]^2*Delta[1, gO2] + 
    (I/2)*g2^2*vu*Cos[ThetaW[]]^2*Delta[2, gO2] + 
    I*Sqrt[3/5]*g1*g2*vd*Cos[ThetaW[]]*Delta[1, gO2]*Sin[ThetaW[]] + 
    I*Sqrt[3/5]*g1*g2*vu*Cos[ThetaW[]]*Delta[2, gO2]*Sin[ThetaW[]] + 
    ((3*I)/10)*g1^2*vd*Delta[1, gO2]*Sin[ThetaW[]]^2 + 
    ((3*I)/10)*g1^2*vu*Delta[2, gO2]*Sin[ThetaW[]]^2), 
 Cp[Uhh[{gO2_}], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*vd*Delta[1, gO2] + (I/2)*g2^2*vu*Delta[2, gO2]), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*Delta[1, gO1]*Delta[1, gO2] + 
    (I/2)*g2^2*Cos[ThetaW[]]^2*Delta[2, gO1]*Delta[2, gO2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[1, gO1]*Delta[1, gO2]*
     Sin[ThetaW[]] + I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[2, gO1]*
     Delta[2, gO2]*Sin[ThetaW[]] + ((3*I)/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*Sin[ThetaW[]]^2 + ((3*I)/10)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*Sin[ThetaW[]]^2), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*Delta[1, gO1]*Delta[1, gO2] + (I/2)*g2^2*Delta[2, gO1]*
     Delta[2, gO2]), Cp[Ah[{gI1_}], Ah[{gI2_}], Uhh[{gO1_}], Uhh[{gO2_}]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] - 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 2] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], Uhh[{gO1_}], Uhh[{gO2_}]] -> 
  (-I)*(((-9*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] - 
    ((3*I)/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO2]*Delta[2, gO1]*ZH[gI1, 2]*ZH[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZH[gI1, 2]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO2]*Delta[2, gO1]*ZH[gI1, 1]*ZH[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZH[gI1, 1]*ZH[gI2, 2] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 2] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] - 
    ((9*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 2] - 
    ((3*I)/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], Hpm[{gI1_}], conj[Hpm[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZP[gI1, 2]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZP[gI1, 1]*ZP[gI2, 2] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 2] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[Ah[{gI1_}], Ah[{gI2_}], Uhh[{gO2_}]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*Delta[1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*vd*Delta[1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] + 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] - 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 2] - 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], Uhh[{gO2_}]] -> 
  (-I)*(((-9*I)/20)*g1^2*vd*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] - 
    ((3*I)/4)*g2^2*vd*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 1] + 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*vd*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 1] + 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 2] + 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 2] + 
    ((3*I)/20)*g1^2*vd*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 2] + 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 2] + 
    ((3*I)/20)*g1^2*vd*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] + 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] - 
    ((9*I)/20)*g1^2*vu*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 2] - 
    ((3*I)/4)*g2^2*vu*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Uhh[{gO2_}], Hpm[{gI2_}], conj[Hpm[{gI1_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 1] - 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 1] - 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 2] - 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 2] + 
    ((3*I)/20)*g1^2*vd*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], Uhh[{gO2_}]][PR] -> 
  (-I)*(((-I)*g2*Delta[1, gO2]*UM[gI1, 2]*UP[gI2, 1])/Sqrt[2] - 
    (I*g2*Delta[2, gO2]*UM[gI1, 1]*UP[gI2, 2])/Sqrt[2]), 
 Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], Uhh[{gO1_}]][PL] -> 
  (-I)*(((-I)*g2*conj[UM[gI2, 2]]*conj[UP[gI1, 1]]*Delta[1, gO1])/Sqrt[2] - 
    (I*g2*conj[UM[gI2, 1]]*conj[UP[gI1, 2]]*Delta[2, gO1])/Sqrt[2]), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], Sv[{gI1_}], conj[Sv[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*Delta[gI1, gI2] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*Delta[gI1, gI2] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*Delta[gI1, gI2] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*Delta[gI1, gI2]), 
 Cp[Uhh[{gO2_}], Sv[{gI2_}], conj[Sv[{gI1_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*Delta[1, gO2]*Delta[gI1, gI2] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*Delta[gI1, gI2] + 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*Delta[gI1, gI2] + 
    (I/4)*g2^2*vu*Delta[2, gO2]*Delta[gI1, gI2]), 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], Uhh[{gO2_}]][PR] -> 
  -((Delta[1, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*
       ZDL[gI1, j2]])/Sqrt[2]), Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], Uhh[{gO1_}]][
   PL] -> -((Delta[1, gO1]*sum[j2, 1, 3, conj[ZDL[gI2, j2]]*
       sum[j1, 1, 3, conj[ZDR[gI1, j1]]*Yd[j1, j2]]])/Sqrt[2]), 
 Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], Uhh[{gO2_}]][PR] -> 
  -((Delta[1, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*ZER[gI2, j1]]*
       ZEL[gI1, j2]])/Sqrt[2]), Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], Uhh[{gO1_}]][
   PL] -> -((Delta[1, gO1]*sum[j2, 1, 3, conj[ZEL[gI2, j2]]*
       sum[j1, 1, 3, conj[ZER[gI1, j1]]*Ye[j1, j2]]])/Sqrt[2]), 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], Uhh[{gO2_}]][PR] -> 
  -((Delta[2, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*ZUR[gI2, j1]]*
       ZUL[gI1, j2]])/Sqrt[2]), Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], Uhh[{gO1_}]][
   PL] -> -((Delta[2, gO1]*sum[j2, 1, 3, conj[ZUL[gI2, j2]]*
       sum[j1, 1, 3, conj[ZUR[gI1, j1]]*Yu[j1, j2]]])/Sqrt[2]), 
 Cp[Chi[{gI1_}], Chi[{gI2_}], Uhh[{gO2_}]][PR] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*Delta[1, gO2]*ZN[gI1, 3]*ZN[gI2, 1] - 
    (I/2)*Sqrt[3/5]*g1*Delta[2, gO2]*ZN[gI1, 4]*ZN[gI2, 1] - 
    (I/2)*g2*Delta[1, gO2]*ZN[gI1, 3]*ZN[gI2, 2] + 
    (I/2)*g2*Delta[2, gO2]*ZN[gI1, 4]*ZN[gI2, 2] + 
    (I/2)*Sqrt[3/5]*g1*Delta[1, gO2]*ZN[gI1, 1]*ZN[gI2, 3] - 
    (I/2)*g2*Delta[1, gO2]*ZN[gI1, 2]*ZN[gI2, 3] - 
    (I/2)*Sqrt[3/5]*g1*Delta[2, gO2]*ZN[gI1, 1]*ZN[gI2, 4] + 
    (I/2)*g2*Delta[2, gO2]*ZN[gI1, 2]*ZN[gI2, 4]), 
 Cp[Chi[{gI1_}], Chi[{gI2_}], Uhh[{gO1_}]][PL] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*conj[ZN[gI1, 3]]*conj[ZN[gI2, 1]]*Delta[1, gO1] - 
    (I/2)*g2*conj[ZN[gI1, 3]]*conj[ZN[gI2, 2]]*Delta[1, gO1] + 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI1, 1]]*conj[ZN[gI2, 3]]*Delta[1, gO1] - 
    (I/2)*g2*conj[ZN[gI1, 2]]*conj[ZN[gI2, 3]]*Delta[1, gO1] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI1, 4]]*conj[ZN[gI2, 1]]*Delta[2, gO1] + 
    (I/2)*g2*conj[ZN[gI1, 4]]*conj[ZN[gI2, 2]]*Delta[2, gO1] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI1, 1]]*conj[ZN[gI2, 4]]*Delta[2, gO1] + 
    (I/2)*g2*conj[ZN[gI1, 2]]*conj[ZN[gI2, 4]]*Delta[2, gO1]), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], Sd[{gI1_}], conj[Sd[{gI2_}]]] -> 
  (-I)*((I/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, j1]]*ZD[gI2, j1]] - (I/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, j1]]*ZD[gI2, j1]] + (I/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]] - 
    (I/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]] - I*Delta[1, gO1]*Delta[1, gO2]*
     sum[j3, 1, 3, conj[ZD[gI1, 3 + j3]]*sum[j2, 1, 3, 
        sum[j1, 1, 3, conj[Yd[j3, j1]]*Yd[j2, j1]]*ZD[gI2, 3 + j2]]] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, conj[Yd[j1, j3]]*
           Yd[j1, j2]]]*ZD[gI2, j3]]), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], Se[{gI1_}], conj[Se[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + ((3*I)/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + ((3*I)/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]] - 
    ((3*I)/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, conj[ZE[gI1, 3 + j3]]*
       sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j3, j1]]*Ye[j2, j1]]*
         ZE[gI2, 3 + j2]]] - I*Delta[1, gO1]*Delta[1, gO2]*
     sum[j3, 1, 3, sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
          conj[Ye[j1, j3]]*Ye[j1, j2]]]*ZE[gI2, j3]]), 
 Cp[Uhh[{gO1_}], Uhh[{gO2_}], Su[{gI1_}], conj[Su[{gI2_}]]] -> 
  (-I)*((I/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, j1]]*ZU[gI2, j1]] - (I/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, j1]]*ZU[gI2, j1]] - (I/5)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]] + 
    (I/5)*g1^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]] - I*Delta[2, gO1]*Delta[2, gO2]*
     sum[j3, 1, 3, conj[ZU[gI1, 3 + j3]]*sum[j2, 1, 3, 
        sum[j1, 1, 3, conj[Yu[j3, j1]]*Yu[j2, j1]]*ZU[gI2, 3 + j2]]] - 
    I*Delta[2, gO1]*Delta[2, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, conj[Yu[j1, j3]]*
           Yu[j1, j2]]]*ZU[gI2, j3]]), 
 Cp[Uhh[{gO2_}], Sd[{gI2_}], conj[Sd[{gI1_}]]] -> 
  (-I)*((I/20)*g1^2*vd*Delta[1, gO2]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*
       ZD[gI1, j1]] + (I/4)*g2^2*vd*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]] - 
    (I/20)*g1^2*vu*Delta[2, gO2]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*
       ZD[gI1, j1]] - (I/4)*g2^2*vu*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]] + 
    (I/10)*g1^2*vd*Delta[1, gO2]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
       ZD[gI1, 3 + j1]] - (I/10)*g1^2*vu*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*ZD[gI1, 3 + j1]] + 
    (I*conj[\[Mu]]*Delta[2, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
        sum[j1, 1, 3, Yd[j1, j2]*ZD[gI1, 3 + j1]]])/Sqrt[2] - 
    (I*Delta[1, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
        sum[j1, 1, 3, ZD[gI1, 3 + j1]*T[Yd][j1, j2]]])/Sqrt[2] + 
    (I*\[Mu]*Delta[2, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[Yd[j1, j2]]*conj[ZD[gI2, 3 + j1]]]*ZD[gI1, j2]])/
     Sqrt[2] - (I*Delta[1, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*conj[T[Yd][j1, j2]]]*ZD[gI1, j2]])/
     Sqrt[2] - I*vd*Delta[1, gO2]*sum[j3, 1, 3, conj[ZD[gI2, 3 + j3]]*
       sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j3, j1]]*Yd[j2, j1]]*
         ZD[gI1, 3 + j2]]] - I*vd*Delta[1, gO2]*
     sum[j3, 1, 3, sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
          conj[Yd[j1, j3]]*Yd[j1, j2]]]*ZD[gI1, j3]]), 
 Cp[Uhh[{gO2_}], Se[{gI2_}], conj[Se[{gI1_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI2, j1]]*ZE[gI1, j1]] + (I/4)*g2^2*vd*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI2, j1]]*ZE[gI1, j1]] + 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*sum[j1, 1, 3, conj[ZE[gI2, j1]]*
       ZE[gI1, j1]] - (I/4)*g2^2*vu*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZE[gI2, j1]]*ZE[gI1, j1]] + 
    ((3*I)/10)*g1^2*vd*Delta[1, gO2]*sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*
       ZE[gI1, 3 + j1]] - ((3*I)/10)*g1^2*vu*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*ZE[gI1, 3 + j1]] + 
    (I*conj[\[Mu]]*Delta[2, gO2]*sum[j2, 1, 3, conj[ZE[gI2, j2]]*
        sum[j1, 1, 3, Ye[j1, j2]*ZE[gI1, 3 + j1]]])/Sqrt[2] - 
    (I*Delta[1, gO2]*sum[j2, 1, 3, conj[ZE[gI2, j2]]*
        sum[j1, 1, 3, ZE[gI1, 3 + j1]*T[Ye][j1, j2]]])/Sqrt[2] + 
    (I*\[Mu]*Delta[2, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[Ye[j1, j2]]*conj[ZE[gI2, 3 + j1]]]*ZE[gI1, j2]])/
     Sqrt[2] - (I*Delta[1, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*conj[T[Ye][j1, j2]]]*ZE[gI1, j2]])/
     Sqrt[2] - I*vd*Delta[1, gO2]*sum[j3, 1, 3, conj[ZE[gI2, 3 + j3]]*
       sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j3, j1]]*Ye[j2, j1]]*
         ZE[gI1, 3 + j2]]] - I*vd*Delta[1, gO2]*
     sum[j3, 1, 3, sum[j2, 1, 3, conj[ZE[gI2, j2]]*sum[j1, 1, 3, 
          conj[Ye[j1, j3]]*Ye[j1, j2]]]*ZE[gI1, j3]]), 
 Cp[Uhh[{gO2_}], Su[{gI2_}], conj[Su[{gI1_}]]] -> 
  (-I)*((I/20)*g1^2*vd*Delta[1, gO2]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*
       ZU[gI1, j1]] - (I/4)*g2^2*vd*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]] - 
    (I/20)*g1^2*vu*Delta[2, gO2]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*
       ZU[gI1, j1]] + (I/4)*g2^2*vu*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]] - 
    (I/5)*g1^2*vd*Delta[1, gO2]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
       ZU[gI1, 3 + j1]] + (I/5)*g1^2*vu*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*ZU[gI1, 3 + j1]] + 
    (I*conj[\[Mu]]*Delta[1, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*
        sum[j1, 1, 3, Yu[j1, j2]*ZU[gI1, 3 + j1]]])/Sqrt[2] - 
    (I*Delta[2, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*
        sum[j1, 1, 3, ZU[gI1, 3 + j1]*T[Yu][j1, j2]]])/Sqrt[2] + 
    (I*\[Mu]*Delta[1, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[Yu[j1, j2]]*conj[ZU[gI2, 3 + j1]]]*ZU[gI1, j2]])/
     Sqrt[2] - (I*Delta[2, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*conj[T[Yu][j1, j2]]]*ZU[gI1, j2]])/
     Sqrt[2] - I*vu*Delta[2, gO2]*sum[j3, 1, 3, conj[ZU[gI2, 3 + j3]]*
       sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j3, j1]]*Yu[j2, j1]]*
         ZU[gI1, 3 + j2]]] - I*vu*Delta[2, gO2]*
     sum[j3, 1, 3, sum[j2, 1, 3, conj[ZU[gI2, j2]]*sum[j1, 1, 3, 
          conj[Yu[j1, j3]]*Yu[j1, j2]]]*ZU[gI1, j3]]), 
 Cp[Ah[{gI2_}], Uhh[{gO2_}], VZ] -> 
  I*((g2*Cos[ThetaW[]]*Delta[1, gO2]*ZA[gI2, 1])/2 + 
    (Sqrt[3/5]*g1*Delta[1, gO2]*Sin[ThetaW[]]*ZA[gI2, 1])/2 - 
    (g2*Cos[ThetaW[]]*Delta[2, gO2]*ZA[gI2, 2])/2 - 
    (Sqrt[3/5]*g1*Delta[2, gO2]*Sin[ThetaW[]]*ZA[gI2, 2])/2), 
 Cp[Uhh[{gO2_}], Hpm[{gI2_}], conj[VWm]] -> 
  I*((I/2)*g2*Delta[1, gO2]*ZP[gI2, 1] - (I/2)*g2*Delta[2, gO2]*ZP[gI2, 2]), 
 Cp[bar[gWm], gWm, UAh[{gO1_}]] -> (-I)*((g2^2*vd*Delta[1, gO1])/4 - 
    (g2^2*vu*Delta[2, gO1])/4), Cp[bar[gWmC], gWmC, UAh[{gO1_}]] -> 
  (-I)*(-1/4*(g2^2*vd*Delta[1, gO1]) + (g2^2*vu*Delta[2, gO1])/4), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*Delta[1, gO1]*Delta[1, gO2] + 
    (I/2)*g2^2*Cos[ThetaW[]]^2*Delta[2, gO1]*Delta[2, gO2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[1, gO1]*Delta[1, gO2]*
     Sin[ThetaW[]] + I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[2, gO1]*
     Delta[2, gO2]*Sin[ThetaW[]] + ((3*I)/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*Sin[ThetaW[]]^2 + ((3*I)/10)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*Sin[ThetaW[]]^2), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*Delta[1, gO1]*Delta[1, gO2] + (I/2)*g2^2*Delta[2, gO1]*
     Delta[2, gO2]), Cp[Ah[{gI1_}], Ah[{gI2_}], UAh[{gO1_}], UAh[{gO2_}]] -> 
  (-I)*(((-9*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] - 
    ((3*I)/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO2]*Delta[2, gO1]*ZA[gI1, 2]*ZA[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZA[gI1, 2]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO2]*Delta[2, gO1]*ZA[gI1, 1]*ZA[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZA[gI1, 1]*ZA[gI2, 2] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZA[gI1, 1]*ZA[gI2, 2] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZA[gI1, 2]*ZA[gI2, 2] - 
    ((9*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 2] - 
    ((3*I)/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], hh[{gI1_}], hh[{gI2_}]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZH[gI1, 2]*ZH[gI2, 2] - 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 2] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], Hpm[{gI1_}], conj[Hpm[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 1] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 1] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZP[gI1, 2]*ZP[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 1] + 
    (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*ZP[gI1, 1]*ZP[gI2, 2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 2] + 
    ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 2] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[Ah[{gI2_}], UAh[{gO2_}], hh[{gI1_}]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*Delta[1, gO2]*ZA[gI2, 1]*ZH[gI1, 1] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZA[gI2, 1]*ZH[gI1, 1] + 
    ((3*I)/20)*g1^2*vd*Delta[2, gO2]*ZA[gI2, 2]*ZH[gI1, 1] + 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZA[gI2, 2]*ZH[gI1, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[1, gO2]*ZA[gI2, 1]*ZH[gI1, 2] + 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZA[gI2, 1]*ZH[gI1, 2] - 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZA[gI2, 2]*ZH[gI1, 2] - 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZA[gI2, 2]*ZH[gI1, 2]), 
 Cp[UAh[{gO2_}], Hpm[{gI2_}], conj[Hpm[{gI1_}]]] -> 
  (-I)*(-1/4*(g2^2*vu*Delta[1, gO2]*ZP[gI1, 2]*ZP[gI2, 1]) - 
    (g2^2*vd*Delta[2, gO2]*ZP[gI1, 2]*ZP[gI2, 1])/4 + 
    (g2^2*vu*Delta[1, gO2]*ZP[gI1, 1]*ZP[gI2, 2])/4 + 
    (g2^2*vd*Delta[2, gO2]*ZP[gI1, 1]*ZP[gI2, 2])/4), 
 Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], UAh[{gO2_}]][PR] -> 
  (-I)*((g2*Delta[1, gO2]*UM[gI1, 2]*UP[gI2, 1])/Sqrt[2] + 
    (g2*Delta[2, gO2]*UM[gI1, 1]*UP[gI2, 2])/Sqrt[2]), 
 Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], UAh[{gO1_}]][PL] -> 
  (-I)*(-((g2*conj[UM[gI2, 2]]*conj[UP[gI1, 1]]*Delta[1, gO1])/Sqrt[2]) - 
    (g2*conj[UM[gI2, 1]]*conj[UP[gI1, 2]]*Delta[2, gO1])/Sqrt[2]), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], Sv[{gI1_}], conj[Sv[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*Delta[gI1, gI2] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*Delta[gI1, gI2] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*Delta[gI1, gI2] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*Delta[gI1, gI2]), 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], UAh[{gO2_}]][PR] -> 
  (I*Delta[1, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*
      ZDL[gI1, j2]])/Sqrt[2], Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], UAh[{gO1_}]][
   PL] -> ((-I)*Delta[1, gO1]*sum[j2, 1, 3, conj[ZDL[gI2, j2]]*
      sum[j1, 1, 3, conj[ZDR[gI1, j1]]*Yd[j1, j2]]])/Sqrt[2], 
 Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], UAh[{gO2_}]][PR] -> 
  (I*Delta[1, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*ZER[gI2, j1]]*
      ZEL[gI1, j2]])/Sqrt[2], Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], UAh[{gO1_}]][
   PL] -> ((-I)*Delta[1, gO1]*sum[j2, 1, 3, conj[ZEL[gI2, j2]]*
      sum[j1, 1, 3, conj[ZER[gI1, j1]]*Ye[j1, j2]]])/Sqrt[2], 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], UAh[{gO2_}]][PR] -> 
  (I*Delta[2, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*ZUR[gI2, j1]]*
      ZUL[gI1, j2]])/Sqrt[2], Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], UAh[{gO1_}]][
   PL] -> ((-I)*Delta[2, gO1]*sum[j2, 1, 3, conj[ZUL[gI2, j2]]*
      sum[j1, 1, 3, conj[ZUR[gI1, j1]]*Yu[j1, j2]]])/Sqrt[2], 
 Cp[Chi[{gI1_}], Chi[{gI2_}], UAh[{gO2_}]][PR] -> 
  (-I)*(-1/2*(Sqrt[3/5]*g1*Delta[1, gO2]*ZN[gI1, 3]*ZN[gI2, 1]) + 
    (Sqrt[3/5]*g1*Delta[2, gO2]*ZN[gI1, 4]*ZN[gI2, 1])/2 + 
    (g2*Delta[1, gO2]*ZN[gI1, 3]*ZN[gI2, 2])/2 - 
    (g2*Delta[2, gO2]*ZN[gI1, 4]*ZN[gI2, 2])/2 - 
    (Sqrt[3/5]*g1*Delta[1, gO2]*ZN[gI1, 1]*ZN[gI2, 3])/2 + 
    (g2*Delta[1, gO2]*ZN[gI1, 2]*ZN[gI2, 3])/2 + 
    (Sqrt[3/5]*g1*Delta[2, gO2]*ZN[gI1, 1]*ZN[gI2, 4])/2 - 
    (g2*Delta[2, gO2]*ZN[gI1, 2]*ZN[gI2, 4])/2), 
 Cp[Chi[{gI1_}], Chi[{gI2_}], UAh[{gO1_}]][PL] -> 
  (-I)*((Sqrt[3/5]*g1*conj[ZN[gI1, 3]]*conj[ZN[gI2, 1]]*Delta[1, gO1])/2 - 
    (g2*conj[ZN[gI1, 3]]*conj[ZN[gI2, 2]]*Delta[1, gO1])/2 + 
    (Sqrt[3/5]*g1*conj[ZN[gI1, 1]]*conj[ZN[gI2, 3]]*Delta[1, gO1])/2 - 
    (g2*conj[ZN[gI1, 2]]*conj[ZN[gI2, 3]]*Delta[1, gO1])/2 - 
    (Sqrt[3/5]*g1*conj[ZN[gI1, 4]]*conj[ZN[gI2, 1]]*Delta[2, gO1])/2 + 
    (g2*conj[ZN[gI1, 4]]*conj[ZN[gI2, 2]]*Delta[2, gO1])/2 - 
    (Sqrt[3/5]*g1*conj[ZN[gI1, 1]]*conj[ZN[gI2, 4]]*Delta[2, gO1])/2 + 
    (g2*conj[ZN[gI1, 2]]*conj[ZN[gI2, 4]]*Delta[2, gO1])/2), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], Sd[{gI1_}], conj[Sd[{gI2_}]]] -> 
  (-I)*((I/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, j1]]*ZD[gI2, j1]] - (I/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, j1]]*ZD[gI2, j1]] + (I/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]] - 
    (I/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]] - I*Delta[1, gO1]*Delta[1, gO2]*
     sum[j3, 1, 3, conj[ZD[gI1, 3 + j3]]*sum[j2, 1, 3, 
        sum[j1, 1, 3, conj[Yd[j3, j1]]*Yd[j2, j1]]*ZD[gI2, 3 + j2]]] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, conj[Yd[j1, j3]]*
           Yd[j1, j2]]]*ZD[gI2, j3]]), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], Se[{gI1_}], conj[Se[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + ((3*I)/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + ((3*I)/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]] - 
    ((3*I)/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, conj[ZE[gI1, 3 + j3]]*
       sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j3, j1]]*Ye[j2, j1]]*
         ZE[gI2, 3 + j2]]] - I*Delta[1, gO1]*Delta[1, gO2]*
     sum[j3, 1, 3, sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, 
          conj[Ye[j1, j3]]*Ye[j1, j2]]]*ZE[gI2, j3]]), 
 Cp[UAh[{gO1_}], UAh[{gO2_}], Su[{gI1_}], conj[Su[{gI2_}]]] -> 
  (-I)*((I/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, j1]]*ZU[gI2, j1]] - (I/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, j1]]*ZU[gI2, j1]] - (I/5)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]] + 
    (I/5)*g1^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]] - I*Delta[2, gO1]*Delta[2, gO2]*
     sum[j3, 1, 3, conj[ZU[gI1, 3 + j3]]*sum[j2, 1, 3, 
        sum[j1, 1, 3, conj[Yu[j3, j1]]*Yu[j2, j1]]*ZU[gI2, 3 + j2]]] - 
    I*Delta[2, gO1]*Delta[2, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, conj[Yu[j1, j3]]*
           Yu[j1, j2]]]*ZU[gI2, j3]]), 
 Cp[UAh[{gO2_}], Sd[{gI2_}], conj[Sd[{gI1_}]]] -> 
  (-I)*((conj[\[Mu]]*Delta[2, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
        sum[j1, 1, 3, Yd[j1, j2]*ZD[gI1, 3 + j1]]])/Sqrt[2] + 
    (Delta[1, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
         ZD[gI1, 3 + j1]*T[Yd][j1, j2]]])/Sqrt[2] - 
    (\[Mu]*Delta[2, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[Yd[j1, j2]]*conj[ZD[gI2, 3 + j1]]]*ZD[gI1, j2]])/
     Sqrt[2] - (Delta[1, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*conj[T[Yd][j1, j2]]]*ZD[gI1, j2]])/
     Sqrt[2]), Cp[UAh[{gO2_}], Se[{gI2_}], conj[Se[{gI1_}]]] -> 
  (-I)*((conj[\[Mu]]*Delta[2, gO2]*sum[j2, 1, 3, conj[ZE[gI2, j2]]*
        sum[j1, 1, 3, Ye[j1, j2]*ZE[gI1, 3 + j1]]])/Sqrt[2] + 
    (Delta[1, gO2]*sum[j2, 1, 3, conj[ZE[gI2, j2]]*sum[j1, 1, 3, 
         ZE[gI1, 3 + j1]*T[Ye][j1, j2]]])/Sqrt[2] - 
    (\[Mu]*Delta[2, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[Ye[j1, j2]]*conj[ZE[gI2, 3 + j1]]]*ZE[gI1, j2]])/
     Sqrt[2] - (Delta[1, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*conj[T[Ye][j1, j2]]]*ZE[gI1, j2]])/
     Sqrt[2]), Cp[UAh[{gO2_}], Su[{gI2_}], conj[Su[{gI1_}]]] -> 
  (-I)*((conj[\[Mu]]*Delta[1, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*
        sum[j1, 1, 3, Yu[j1, j2]*ZU[gI1, 3 + j1]]])/Sqrt[2] + 
    (Delta[2, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*sum[j1, 1, 3, 
         ZU[gI1, 3 + j1]*T[Yu][j1, j2]]])/Sqrt[2] - 
    (\[Mu]*Delta[1, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[Yu[j1, j2]]*conj[ZU[gI2, 3 + j1]]]*ZU[gI1, j2]])/
     Sqrt[2] - (Delta[2, gO2]*sum[j2, 1, 3, 
       sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*conj[T[Yu][j1, j2]]]*ZU[gI1, j2]])/
     Sqrt[2]), Cp[UAh[{gO2_}], hh[{gI2_}], VZ] -> 
  I*((g2*Cos[ThetaW[]]*Delta[1, gO2]*ZH[gI2, 1])/2 + 
    (Sqrt[3/5]*g1*Delta[1, gO2]*Sin[ThetaW[]]*ZH[gI2, 1])/2 - 
    (g2*Cos[ThetaW[]]*Delta[2, gO2]*ZH[gI2, 2])/2 - 
    (Sqrt[3/5]*g1*Delta[2, gO2]*Sin[ThetaW[]]*ZH[gI2, 2])/2), 
 Cp[UAh[{gO2_}], Hpm[{gI2_}], conj[VWm]] -> 
  I*((g2*Delta[1, gO2]*ZP[gI2, 1])/2 + (g2*Delta[2, gO2]*ZP[gI2, 2])/2), 
 Cp[bar[gWm], gZ, UHpm[{gO2_}]] -> 
  (-I)*((I/4)*g2^2*vd*Cos[ThetaW[]]*Delta[1, gO2] - 
    (I/4)*g2^2*vu*Cos[ThetaW[]]*Delta[2, gO2] - (I/4)*Sqrt[3/5]*g1*g2*vd*
     Delta[1, gO2]*Sin[ThetaW[]] + (I/4)*Sqrt[3/5]*g1*g2*vu*Delta[2, gO2]*
     Sin[ThetaW[]]), Cp[bar[gZ], gWm, conj[UHpm[{gO1_}]]] -> 
  (-I)*((-1/4*I)*g2^2*vd*Cos[ThetaW[]]*Delta[1, gO1] + 
    (I/4)*g2^2*vu*Cos[ThetaW[]]*Delta[2, gO1] - (I/4)*Sqrt[3/5]*g1*g2*vd*
     Delta[1, gO1]*Sin[ThetaW[]] + (I/4)*Sqrt[3/5]*g1*g2*vu*Delta[2, gO1]*
     Sin[ThetaW[]]), Cp[bar[gWmC], gZ, conj[UHpm[{gO1_}]]] -> 
  (-I)*((I/4)*g2^2*vd*Cos[ThetaW[]]*Delta[1, gO1] - 
    (I/4)*g2^2*vu*Cos[ThetaW[]]*Delta[2, gO1] - (I/4)*Sqrt[3/5]*g1*g2*vd*
     Delta[1, gO1]*Sin[ThetaW[]] + (I/4)*Sqrt[3/5]*g1*g2*vu*Delta[2, gO1]*
     Sin[ThetaW[]]), Cp[bar[gZ], gWmC, UHpm[{gO2_}]] -> 
  (-I)*((-1/4*I)*g2^2*vd*Cos[ThetaW[]]*Delta[1, gO2] + 
    (I/4)*g2^2*vu*Cos[ThetaW[]]*Delta[2, gO2] - (I/4)*Sqrt[3/5]*g1*g2*vd*
     Delta[1, gO2]*Sin[ThetaW[]] + (I/4)*Sqrt[3/5]*g1*g2*vu*Delta[2, gO2]*
     Sin[ThetaW[]]), Cp[conj[UHpm[{gO2_}]], VP, VWm] -> 
  (-I)*((-1/2*I)*Sqrt[3/5]*g1*g2*vd*Cos[ThetaW[]]*Delta[1, gO2] + 
    (I/2)*Sqrt[3/5]*g1*g2*vu*Cos[ThetaW[]]*Delta[2, gO2]), 
 Cp[conj[UHpm[{gO2_}]], VWm, VZ] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*g2*vd*Delta[1, gO2]*Sin[ThetaW[]] - 
    (I/2)*Sqrt[3/5]*g1*g2*vu*Delta[2, gO2]*Sin[ThetaW[]]), 
 Cp[UHpm[{gO1_}], conj[UHpm[{gO2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*Delta[1, gO1]*Delta[1, gO2] + 
    (I/2)*g2^2*Cos[ThetaW[]]^2*Delta[2, gO1]*Delta[2, gO2] - 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[1, gO1]*Delta[1, gO2]*
     Sin[ThetaW[]] - I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[2, gO1]*
     Delta[2, gO2]*Sin[ThetaW[]] + ((3*I)/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*Sin[ThetaW[]]^2 + ((3*I)/10)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*Sin[ThetaW[]]^2), 
 Cp[UHpm[{gO1_}], conj[UHpm[{gO2_}]], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*Delta[1, gO1]*Delta[1, gO2] + (I/2)*g2^2*Delta[2, gO1]*
     Delta[2, gO2]), Cp[Ah[{gI1_}], Ah[{gI2_}], UHpm[{gO1_}], 
   conj[UHpm[{gO2_}]]] -> (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     ZA[gI1, 1]*ZA[gI2, 1] - (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*
     ZA[gI1, 1]*ZA[gI2, 1] + ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     ZA[gI1, 1]*ZA[gI2, 1] - (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*
     ZA[gI1, 1]*ZA[gI2, 1] + (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*
     ZA[gI1, 2]*ZA[gI2, 1] + (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*
     ZA[gI1, 2]*ZA[gI2, 1] + (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*
     ZA[gI1, 1]*ZA[gI2, 2] + (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*
     ZA[gI1, 1]*ZA[gI2, 2] + ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     ZA[gI1, 2]*ZA[gI2, 2] - (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*
     ZA[gI1, 2]*ZA[gI2, 2] - ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     ZA[gI1, 2]*ZA[gI2, 2] - (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*
     ZA[gI1, 2]*ZA[gI2, 2]), Cp[hh[{gI1_}], hh[{gI2_}], UHpm[{gO1_}], 
   conj[UHpm[{gO2_}]]] -> (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     ZH[gI1, 1]*ZH[gI2, 1] - (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*
     ZH[gI1, 1]*ZH[gI2, 1] + ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     ZH[gI1, 1]*ZH[gI2, 1] - (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*
     ZH[gI1, 1]*ZH[gI2, 1] - (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*
     ZH[gI1, 2]*ZH[gI2, 1] - (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*
     ZH[gI1, 2]*ZH[gI2, 1] - (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*
     ZH[gI1, 1]*ZH[gI2, 2] - (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*
     ZH[gI1, 1]*ZH[gI2, 2] + ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     ZH[gI1, 2]*ZH[gI2, 2] - (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*
     ZH[gI1, 2]*ZH[gI2, 2] - ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     ZH[gI1, 2]*ZH[gI2, 2] - (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*
     ZH[gI1, 2]*ZH[gI2, 2]), Cp[Hpm[{gI1_}], UHpm[{gO1_}], conj[Hpm[{gI2_}]], 
   conj[UHpm[{gO2_}]]] -> (-I)*(((-3*I)/10)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     ZP[gI1, 1]*ZP[gI2, 1] - (I/2)*g2^2*Delta[1, gO1]*Delta[1, gO2]*
     ZP[gI1, 1]*ZP[gI2, 1] + ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     ZP[gI1, 1]*ZP[gI2, 1] + (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*
     ZP[gI1, 1]*ZP[gI2, 1] + ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[2, gO2]*
     ZP[gI1, 2]*ZP[gI2, 1] + (I/4)*g2^2*Delta[1, gO1]*Delta[2, gO2]*
     ZP[gI1, 2]*ZP[gI2, 1] + ((3*I)/20)*g1^2*Delta[1, gO2]*Delta[2, gO1]*
     ZP[gI1, 1]*ZP[gI2, 2] + (I/4)*g2^2*Delta[1, gO2]*Delta[2, gO1]*
     ZP[gI1, 1]*ZP[gI2, 2] + ((3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     ZP[gI1, 2]*ZP[gI2, 2] + (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*
     ZP[gI1, 2]*ZP[gI2, 2] - ((3*I)/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     ZP[gI1, 2]*ZP[gI2, 2] - (I/2)*g2^2*Delta[2, gO1]*Delta[2, gO2]*
     ZP[gI1, 2]*ZP[gI2, 2]), Cp[Ah[{gI2_}], Hpm[{gI1_}], 
   conj[UHpm[{gO2_}]]] -> 
  (-I)*(-1/4*(g2^2*vu*Delta[2, gO2]*ZA[gI2, 1]*ZP[gI1, 1]) - 
    (g2^2*vd*Delta[2, gO2]*ZA[gI2, 2]*ZP[gI1, 1])/4 + 
    (g2^2*vu*Delta[1, gO2]*ZA[gI2, 1]*ZP[gI1, 2])/4 + 
    (g2^2*vd*Delta[1, gO2]*ZA[gI2, 2]*ZP[gI1, 2])/4), 
 Cp[hh[{gI2_}], Hpm[{gI1_}], conj[UHpm[{gO2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*vd*Delta[1, gO2]*ZH[gI2, 1]*ZP[gI1, 1] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZH[gI2, 1]*ZP[gI1, 1] - 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZH[gI2, 1]*ZP[gI1, 1] + 
    ((3*I)/20)*g1^2*vu*Delta[1, gO2]*ZH[gI2, 2]*ZP[gI1, 1] - 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZH[gI2, 2]*ZP[gI1, 1] - 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZH[gI2, 2]*ZP[gI1, 1] - 
    (I/4)*g2^2*vu*Delta[1, gO2]*ZH[gI2, 1]*ZP[gI1, 2] + 
    ((3*I)/20)*g1^2*vd*Delta[2, gO2]*ZH[gI2, 1]*ZP[gI1, 2] - 
    (I/4)*g2^2*vd*Delta[2, gO2]*ZH[gI2, 1]*ZP[gI1, 2] - 
    (I/4)*g2^2*vd*Delta[1, gO2]*ZH[gI2, 2]*ZP[gI1, 2] - 
    ((3*I)/20)*g1^2*vu*Delta[2, gO2]*ZH[gI2, 2]*ZP[gI1, 2] - 
    (I/4)*g2^2*vu*Delta[2, gO2]*ZH[gI2, 2]*ZP[gI1, 2]), 
 Cp[UHpm[{gO1_}], Sv[{gI1_}], conj[UHpm[{gO2_}]], conj[Sv[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*Delta[gI1, gI2] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*Delta[gI1, gI2] + 
    ((3*I)/20)*g1^2*Delta[2, gO1]*Delta[2, gO2]*Delta[gI1, gI2] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*Delta[gI1, gI2] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZV[gI1, j2]]*sum[j1, 1, 3, conj[Ye[j1, j3]]*
           Ye[j1, j2]]]*ZV[gI2, j3]]), 
 Cp[bar[Fu[{gI1_}]], Fd[{gI2_}], conj[UHpm[{gO2_}]]][PR] -> 
  Delta[1, gO2]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*
     ZUL[gI1, j2]], Cp[bar[Fu[{gI1_}]], Fd[{gI2_}], conj[UHpm[{gO1_}]]][
   PL] -> Delta[2, gO1]*sum[j2, 1, 3, conj[ZDL[gI2, j2]]*
     sum[j1, 1, 3, conj[ZUR[gI1, j1]]*Yu[j1, j2]]], 
 Cp[bar[Fv[{gI1_}]], Fe[{gI2_}], conj[UHpm[{gO2_}]]][PR] -> 
  Delta[1, gO2]*sum[j1, 1, 3, conj[Ye[j1, gI1]]*ZER[gI2, j1]], 
 Cp[bar[Fv[{gI1_}]], Fe[{gI2_}], conj[UHpm[{gO1_}]]][PL] -> 0, 
 Cp[Se[{gI2_}], conj[UHpm[{gO2_}]], conj[Sv[{gI1_}]]] -> 
  (-I)*(((-1/2*I)*g2^2*vd*Delta[1, gO2]*sum[j1, 1, 3, 
       conj[ZE[gI2, j1]]*ZV[gI1, j1]])/Sqrt[2] - 
    ((I/2)*g2^2*vu*Delta[2, gO2]*sum[j1, 1, 3, conj[ZE[gI2, j1]]*
        ZV[gI1, j1]])/Sqrt[2] + I*\[Mu]*Delta[2, gO2]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*conj[ZE[gI2, 3 + j1]]]*
       ZV[gI1, j2]] + I*Delta[1, gO2]*sum[j2, 1, 3, 
      sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*conj[T[Ye][j1, j2]]]*ZV[gI1, j2]] + 
    (I*vd*Delta[1, gO2]*sum[j3, 1, 3, 
       sum[j2, 1, 3, conj[ZE[gI2, j2]]*sum[j1, 1, 3, conj[Ye[j1, j3]]*
            Ye[j1, j2]]]*ZV[gI1, j3]])/Sqrt[2]), 
 Cp[Chi[{gI1_}], Cha[{gI2_}], conj[UHpm[{gO2_}]]][PR] -> 
  -1/2*(Delta[2, gO2]*(Sqrt[2]*UP[gI2, 2]*(Sqrt[3/5]*g1*ZN[gI1, 1] + 
       g2*ZN[gI1, 2]) + 2*g2*UP[gI2, 1]*ZN[gI1, 4])), 
 Cp[Chi[{gI1_}], Cha[{gI2_}], conj[UHpm[{gO1_}]]][PL] -> 
  ((Sqrt[2]*conj[UM[gI2, 2]]*(Sqrt[3/5]*g1*conj[ZN[gI1, 1]] + 
       g2*conj[ZN[gI1, 2]]) - 2*g2*conj[UM[gI2, 1]]*conj[ZN[gI1, 3]])*
    Delta[1, gO1])/2, Cp[UHpm[{gO1_}], Sd[{gI1_}], conj[UHpm[{gO2_}]], 
   conj[Sd[{gI2_}]]] -> (-I)*((I/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, j1]]*ZD[gI2, j1]] - (I/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, j1]]*ZD[gI2, j1]] + (I/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]] - 
    (I/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]] - I*Delta[1, gO1]*Delta[1, gO2]*
     sum[j3, 1, 3, conj[ZD[gI1, 3 + j3]]*sum[j2, 1, 3, 
        sum[j1, 1, 3, conj[Yd[j3, j1]]*Yd[j2, j1]]*ZD[gI2, 3 + j2]]] - 
    I*Delta[2, gO1]*Delta[2, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZD[gI1, j2]]*sum[j1, 1, 3, conj[Yu[j1, j3]]*
           Yu[j1, j2]]]*ZD[gI2, j3]]), 
 Cp[UHpm[{gO1_}], Se[{gI1_}], conj[UHpm[{gO2_}]], conj[Se[{gI2_}]]] -> 
  (-I)*(((-3*I)/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] - 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + ((3*I)/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + ((3*I)/10)*g1^2*Delta[1, gO1]*
     Delta[1, gO2]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]] - 
    ((3*I)/10)*g1^2*Delta[2, gO1]*Delta[2, gO2]*
     sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, conj[ZE[gI1, 3 + j3]]*
       sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j3, j1]]*Ye[j2, j1]]*
         ZE[gI2, 3 + j2]]]), Cp[UHpm[{gO1_}], Su[{gI1_}], conj[UHpm[{gO2_}]], 
   conj[Su[{gI2_}]]] -> (-I)*((I/20)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] + 
    (I/4)*g2^2*Delta[1, gO1]*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, j1]]*ZU[gI2, j1]] - (I/20)*g1^2*Delta[2, gO1]*
     Delta[2, gO2]*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] - 
    (I/4)*g2^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, j1]]*ZU[gI2, j1]] - (I/5)*g1^2*Delta[1, gO1]*Delta[1, gO2]*
     sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]] + 
    (I/5)*g1^2*Delta[2, gO1]*Delta[2, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]] - I*Delta[2, gO1]*Delta[2, gO2]*
     sum[j3, 1, 3, conj[ZU[gI1, 3 + j3]]*sum[j2, 1, 3, 
        sum[j1, 1, 3, conj[Yu[j3, j1]]*Yu[j2, j1]]*ZU[gI2, 3 + j2]]] - 
    I*Delta[1, gO1]*Delta[1, gO2]*sum[j3, 1, 3, 
      sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, conj[Yd[j1, j3]]*
           Yd[j1, j2]]]*ZU[gI2, j3]]), 
 Cp[Sd[{gI2_}], conj[UHpm[{gO2_}]], conj[Su[{gI1_}]]] -> 
  (-I)*(((-1/2*I)*g2^2*vd*Delta[1, gO2]*sum[j1, 1, 3, 
       conj[ZD[gI2, j1]]*ZU[gI1, j1]])/Sqrt[2] - 
    ((I/2)*g2^2*vu*Delta[2, gO2]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*
        ZU[gI1, j1]])/Sqrt[2] + I*conj[\[Mu]]*Delta[1, gO2]*
     sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, 
        Yu[j1, j2]*ZU[gI1, 3 + j1]]] + I*Delta[2, gO2]*
     sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, ZU[gI1, 3 + j1]*
         T[Yu][j1, j2]]] + I*\[Mu]*Delta[2, gO2]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*conj[ZD[gI2, 3 + j1]]]*
       ZU[gI1, j2]] + I*Delta[1, gO2]*sum[j2, 1, 3, 
      sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*conj[T[Yd][j1, j2]]]*ZU[gI1, j2]] + 
    (I*vu*Delta[1, gO2]*sum[j3, 1, 3, conj[ZD[gI2, 3 + j3]]*
        sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j3, j1]]*Yu[j2, j1]]*
          ZU[gI1, 3 + j2]]])/Sqrt[2] + 
    (I*vd*Delta[2, gO2]*sum[j3, 1, 3, conj[ZD[gI2, 3 + j3]]*
        sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j3, j1]]*Yu[j2, j1]]*
          ZU[gI1, 3 + j2]]])/Sqrt[2] + 
    (I*vd*Delta[1, gO2]*sum[j3, 1, 3, 
       sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, conj[Yd[j1, j3]]*
            Yd[j1, j2]]]*ZU[gI1, j3]])/Sqrt[2] + 
    (I*vu*Delta[2, gO2]*sum[j3, 1, 3, 
       sum[j2, 1, 3, conj[ZD[gI2, j2]]*sum[j1, 1, 3, conj[Yu[j1, j3]]*
            Yu[j1, j2]]]*ZU[gI1, j3]])/Sqrt[2]), 
 Cp[Ah[{gI2_}], conj[UHpm[{gO2_}]], VWm] -> 
  I*((g2*Delta[1, gO2]*ZA[gI2, 1])/2 + (g2*Delta[2, gO2]*ZA[gI2, 2])/2), 
 Cp[hh[{gI2_}], conj[UHpm[{gO2_}]], VWm] -> 
  I*((-1/2*I)*g2*Delta[1, gO2]*ZH[gI2, 1] + (I/2)*g2*Delta[2, gO2]*
     ZH[gI2, 2]), Cp[Hpm[{gI2_}], conj[UHpm[{gO2_}]], VP] -> 
  I*((I/2)*Sqrt[3/5]*g1*Cos[ThetaW[]]*ThetaStep[gI2, 2]*ZP[gI2, gO2] + 
    (I/2)*g2*Sin[ThetaW[]]*ThetaStep[gI2, 2]*ZP[gI2, gO2]), 
 Cp[Hpm[{gI2_}], conj[UHpm[{gO2_}]], VZ] -> 
  I*((I/2)*g2*Cos[ThetaW[]]*ThetaStep[gI2, 2]*ZP[gI2, gO2] - 
    (I/2)*Sqrt[3/5]*g1*Sin[ThetaW[]]*ThetaStep[gI2, 2]*ZP[gI2, gO2]), 
 Cp[VG, VG, VG] -> (-I)*g3, Cp[bar[gG], gG, VG] -> (-I)*g3, 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], VG][PL] -> -(g3*Delta[gI1, gI2]), 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], VG][PR] -> -(g3*Delta[gI1, gI2]), 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], VG][PL] -> -(g3*Delta[gI1, gI2]), 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], VG][PR] -> -(g3*Delta[gI1, gI2]), 
 Cp[Sd[{gI1_}], conj[Sd[{gI2_}]], VG, VG] -> 6*g3^2*Delta[gI1, gI2], 
 Cp[Su[{gI1_}], conj[Su[{gI2_}]], VG, VG] -> 6*g3^2*Delta[gI1, gI2], 
 Cp[Sd[{gI2_}], conj[Sd[{gI1_}]], VG] -> g3*Delta[gI1, gI2], 
 Cp[Su[{gI2_}], conj[Su[{gI1_}]], VG] -> g3*Delta[gI1, gI2], 
 Cp[Glu, Glu, VG][PL] -> I*g3*PhaseGlu*conj[PhaseGlu], 
 Cp[Glu, Glu, VG][PR] -> I*g3*PhaseGlu*conj[PhaseGlu], 
 Cp[VG, VG, VG, VG][1] -> -16*g3^2, Cp[VG, VG, VG, VG][2] -> 0, 
 Cp[VG, VG, VG, VG][3] -> 16*g3^2, Cp[bar[gWm], gWm, VP] -> 
  -(g2*Sin[ThetaW[]]), Cp[bar[gWmC], gWmC, VP] -> g2*Sin[ThetaW[]], 
 Cp[conj[VWm], VP, VWm] -> g2*Sin[ThetaW[]], 
 Cp[Hpm[{gI1_}], conj[Hpm[{gI2_}]], VP, VP] -> 
  (-I)*(((3*I)/10)*g1^2*Cos[ThetaW[]]^2*ZP[gI1, 1]*ZP[gI2, 1] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZP[gI1, 1]*ZP[gI2, 1] + 
    (I/2)*g2^2*Sin[ThetaW[]]^2*ZP[gI1, 1]*ZP[gI2, 1] + 
    ((3*I)/10)*g1^2*Cos[ThetaW[]]^2*ZP[gI1, 2]*ZP[gI2, 2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZP[gI1, 2]*ZP[gI2, 2] + 
    (I/2)*g2^2*Sin[ThetaW[]]^2*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[Hpm[{gI2_}], conj[Hpm[{gI1_}]], VP] -> 
  -1/2*(Delta[gI1, gI2]*(Sqrt[3/5]*g1*Cos[ThetaW[]] + g2*Sin[ThetaW[]])), 
 Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], VP][PL] -> 
  (2*g2*conj[UM[gI2, 1]]*Sin[ThetaW[]]*UM[gI1, 1] + 
    conj[UM[gI2, 2]]*(Sqrt[3/5]*g1*Cos[ThetaW[]] + g2*Sin[ThetaW[]])*
     UM[gI1, 2])/2, Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], VP][PR] -> 
  (2*g2*conj[UP[gI1, 1]]*Sin[ThetaW[]]*UP[gI2, 1] + 
    conj[UP[gI1, 2]]*(Sqrt[3/5]*g1*Cos[ThetaW[]] + g2*Sin[ThetaW[]])*
     UP[gI2, 2])/2, Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], VP][PL] -> 
  -1/6*(Delta[gI1, gI2]*(Sqrt[3/5]*g1*Cos[ThetaW[]] - 3*g2*Sin[ThetaW[]])), 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], VP][PR] -> 
  (g1*Cos[ThetaW[]]*Delta[gI1, gI2])/Sqrt[15], 
 Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], VP][PL] -> 
  (Delta[gI1, gI2]*(Sqrt[3/5]*g1*Cos[ThetaW[]] + g2*Sin[ThetaW[]]))/2, 
 Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], VP][PR] -> Sqrt[3/5]*g1*Cos[ThetaW[]]*
   Delta[gI1, gI2], Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], VP][PL] -> 
  -1/6*(Delta[gI1, gI2]*(Sqrt[3/5]*g1*Cos[ThetaW[]] + 3*g2*Sin[ThetaW[]])), 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], VP][PR] -> 
  (-2*g1*Cos[ThetaW[]]*Delta[gI1, gI2])/Sqrt[15], 
 Cp[Sd[{gI1_}], conj[Sd[{gI2_}]], VP, VP] -> 
  (-I)*((I/30)*g1^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZD[gI1, j1]]*
       ZD[gI2, j1]] - (I*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*
      sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]])/Sqrt[15] + 
    (I/2)*g2^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]] + 
    ((2*I)/15)*g1^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*
       ZD[gI2, 3 + j1]]), Cp[Se[{gI1_}], conj[Se[{gI2_}]], VP, VP] -> 
  (-I)*(((3*I)/10)*g1^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, 
      conj[ZE[gI1, j1]]*ZE[gI2, j1]] + I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*
     Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    (I/2)*g2^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    ((6*I)/5)*g1^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       ZE[gI2, 3 + j1]]), Cp[Su[{gI1_}], conj[Su[{gI2_}]], VP, VP] -> 
  (-I)*((I/30)*g1^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*
       ZU[gI2, j1]] + (I*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*
      sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]])/Sqrt[15] + 
    (I/2)*g2^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]] + 
    ((8*I)/15)*g1^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*
       ZU[gI2, 3 + j1]]), Cp[Sd[{gI2_}], conj[Sd[{gI1_}]], VP] -> 
  ((Sqrt[3/5]*g1*Cos[ThetaW[]] - 3*g2*Sin[ThetaW[]])*
     sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]] - 
    2*Sqrt[3/5]*g1*Cos[ThetaW[]]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
       ZD[gI1, 3 + j1]])/6, Cp[Se[{gI2_}], conj[Se[{gI1_}]], VP] -> 
  (-((Sqrt[3/5]*g1*Cos[ThetaW[]] + g2*Sin[ThetaW[]])*
      sum[j1, 1, 3, conj[ZE[gI2, j1]]*ZE[gI1, j1]]) - 
    2*Sqrt[3/5]*g1*Cos[ThetaW[]]*sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*
       ZE[gI1, 3 + j1]])/2, Cp[Su[{gI2_}], conj[Su[{gI1_}]], VP] -> 
  ((Sqrt[3/5]*g1*Cos[ThetaW[]] + 3*g2*Sin[ThetaW[]])*
     sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]] + 
    4*Sqrt[3/5]*g1*Cos[ThetaW[]]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
       ZU[gI1, 3 + j1]])/6, Cp[Hpm[{gI2_}], conj[VWm], VP] -> 
  -1/2*(Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*(vd*ZP[gI2, 1] - vu*ZP[gI2, 2])), 
 Cp[conj[VWm], VP, VP, VWm][1] -> g2^2*Sin[ThetaW[]]^2, 
 Cp[conj[VWm], VP, VP, VWm][2] -> g2^2*Sin[ThetaW[]]^2, 
 Cp[conj[VWm], VP, VP, VWm][3] -> -2*g2^2*Sin[ThetaW[]]^2, 
 Cp[bar[gWm], gWm, VZ] -> -(g2*Cos[ThetaW[]]), 
 Cp[bar[gWmC], gWmC, VZ] -> g2*Cos[ThetaW[]], 
 Cp[conj[VWm], VWm, VZ] -> -(g2*Cos[ThetaW[]]), 
 Cp[Ah[{gI1_}], Ah[{gI2_}], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*ZA[gI1, 1]*ZA[gI2, 1] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZA[gI1, 1]*ZA[gI2, 1] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*ZA[gI1, 1]*ZA[gI2, 1] + 
    (I/2)*g2^2*Cos[ThetaW[]]^2*ZA[gI1, 2]*ZA[gI2, 2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZA[gI1, 2]*ZA[gI2, 2] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*ZH[gI1, 1]*ZH[gI2, 1] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZH[gI1, 1]*ZH[gI2, 1] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*ZH[gI1, 1]*ZH[gI2, 1] + 
    (I/2)*g2^2*Cos[ThetaW[]]^2*ZH[gI1, 2]*ZH[gI2, 2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZH[gI1, 2]*ZH[gI2, 2] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Hpm[{gI1_}], conj[Hpm[{gI2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*ZP[gI1, 1]*ZP[gI2, 1] - 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZP[gI1, 1]*ZP[gI2, 1] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*ZP[gI1, 1]*ZP[gI2, 1] + 
    (I/2)*g2^2*Cos[ThetaW[]]^2*ZP[gI1, 2]*ZP[gI2, 2] - 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*ZP[gI1, 2]*ZP[gI2, 2] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[Ah[{gI2_}], hh[{gI1_}], VZ] -> 
  (I/2)*(g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]])*
   (ZA[gI2, 1]*ZH[gI1, 1] - ZA[gI2, 2]*ZH[gI1, 2]), 
 Cp[Hpm[{gI2_}], conj[Hpm[{gI1_}]], VZ] -> 
  -1/2*(Delta[gI1, gI2]*(g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]])), 
 Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], VZ][PL] -> 
  (2*g2*conj[UM[gI2, 1]]*Cos[ThetaW[]]*UM[gI1, 1] + 
    conj[UM[gI2, 2]]*(g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]])*
     UM[gI1, 2])/2, Cp[bar[Cha[{gI1_}]], Cha[{gI2_}], VZ][PR] -> 
  (2*g2*conj[UP[gI1, 1]]*Cos[ThetaW[]]*UP[gI2, 1] + 
    conj[UP[gI1, 2]]*(g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]])*
     UP[gI2, 2])/2, Cp[Sv[{gI1_}], conj[Sv[{gI2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*Delta[gI1, gI2] + 
    I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Delta[gI1, gI2]*Sin[ThetaW[]] + 
    ((3*I)/10)*g1^2*Delta[gI1, gI2]*Sin[ThetaW[]]^2), 
 Cp[Sv[{gI2_}], conj[Sv[{gI1_}]], VZ] -> 
  (Delta[gI1, gI2]*(g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]]))/2, 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], VZ][PL] -> 
  (Delta[gI1, gI2]*(3*g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]]))/6, 
 Cp[bar[Fd[{gI1_}]], Fd[{gI2_}], VZ][PR] -> 
  -((g1*Delta[gI1, gI2]*Sin[ThetaW[]])/Sqrt[15]), 
 Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], VZ][PL] -> 
  (Delta[gI1, gI2]*(g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]]))/2, 
 Cp[bar[Fe[{gI1_}]], Fe[{gI2_}], VZ][PR] -> 
  -(Sqrt[3/5]*g1*Delta[gI1, gI2]*Sin[ThetaW[]]), 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], VZ][PL] -> 
  -1/6*(Delta[gI1, gI2]*(3*g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]])), 
 Cp[bar[Fu[{gI1_}]], Fu[{gI2_}], VZ][PR] -> 
  (2*g1*Delta[gI1, gI2]*Sin[ThetaW[]])/Sqrt[15], 
 Cp[bar[Fv[{gI1_}]], Fv[{gI2_}], VZ][PL] -> 
  -1/2*(Delta[gI1, gI2]*(g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]])), 
 Cp[bar[Fv[{gI1_}]], Fv[{gI2_}], VZ][PR] -> 0, 
 Cp[Chi[{gI1_}], Chi[{gI2_}], VZ][PL] -> 
  -1/2*((g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]])*
    (conj[ZN[gI2, 3]]*ZN[gI1, 3] - conj[ZN[gI2, 4]]*ZN[gI1, 4])), 
 Cp[Chi[{gI1_}], Chi[{gI2_}], VZ][PR] -> 
  ((g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]])*
    (conj[ZN[gI1, 3]]*ZN[gI2, 3] - conj[ZN[gI1, 4]]*ZN[gI2, 4]))/2, 
 Cp[Sd[{gI1_}], conj[Sd[{gI2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZD[gI1, j1]]*
       ZD[gI2, j1]] + (I*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*
      sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]])/Sqrt[15] + 
    (I/30)*g1^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, conj[ZD[gI1, j1]]*
       ZD[gI2, j1]] + ((2*I)/15)*g1^2*Sin[ThetaW[]]^2*
     sum[j1, 1, 3, conj[ZD[gI1, 3 + j1]]*ZD[gI2, 3 + j1]]), 
 Cp[Se[{gI1_}], conj[Se[{gI2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*
       ZE[gI2, j1]] - I*Sqrt[3/5]*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*
     sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]] + 
    ((3*I)/10)*g1^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*
       ZE[gI2, j1]] + ((6*I)/5)*g1^2*Sin[ThetaW[]]^2*
     sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*ZE[gI2, 3 + j1]]), 
 Cp[Su[{gI1_}], conj[Su[{gI2_}]], VZ, VZ] -> 
  (-I)*((I/2)*g2^2*Cos[ThetaW[]]^2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*
       ZU[gI2, j1]] - (I*g1*g2*Cos[ThetaW[]]*Sin[ThetaW[]]*
      sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]])/Sqrt[15] + 
    (I/30)*g1^2*Sin[ThetaW[]]^2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*
       ZU[gI2, j1]] + ((8*I)/15)*g1^2*Sin[ThetaW[]]^2*
     sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*ZU[gI2, 3 + j1]]), 
 Cp[Sd[{gI2_}], conj[Sd[{gI1_}]], VZ] -> 
  (-((3*g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]])*
      sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZD[gI1, j1]]) + 
    2*Sqrt[3/5]*g1*Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*
       ZD[gI1, 3 + j1]])/6, Cp[Se[{gI2_}], conj[Se[{gI1_}]], VZ] -> 
  (-((g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]])*
      sum[j1, 1, 3, conj[ZE[gI2, j1]]*ZE[gI1, j1]]) + 
    2*Sqrt[3/5]*g1*Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZE[gI2, 3 + j1]]*
       ZE[gI1, 3 + j1]])/2, Cp[Su[{gI2_}], conj[Su[{gI1_}]], VZ] -> 
  ((3*g2*Cos[ThetaW[]] - Sqrt[3/5]*g1*Sin[ThetaW[]])*
     sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZU[gI1, j1]] - 
    4*Sqrt[3/5]*g1*Sin[ThetaW[]]*sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*
       ZU[gI1, 3 + j1]])/6, Cp[hh[{gI2_}], VZ, VZ] -> 
  ((g2*Cos[ThetaW[]] + Sqrt[3/5]*g1*Sin[ThetaW[]])^2*
    (vd*ZH[gI2, 1] + vu*ZH[gI2, 2]))/2, Cp[Hpm[{gI2_}], conj[VWm], VZ] -> 
  (Sqrt[3/5]*g1*g2*Sin[ThetaW[]]*(vd*ZP[gI2, 1] - vu*ZP[gI2, 2]))/2, 
 Cp[conj[VWm], VWm, VZ, VZ][1] -> -2*g2^2*Cos[ThetaW[]]^2, 
 Cp[conj[VWm], VWm, VZ, VZ][2] -> g2^2*Cos[ThetaW[]]^2, 
 Cp[conj[VWm], VWm, VZ, VZ][3] -> g2^2*Cos[ThetaW[]]^2, 
 Cp[bar[gP], gWm, conj[VWm]] -> g2*Sin[ThetaW[]], 
 Cp[bar[gWmC], gP, conj[VWm]] -> -(g2*Sin[ThetaW[]]), 
 Cp[bar[gWmC], gZ, conj[VWm]] -> -(g2*Cos[ThetaW[]]), 
 Cp[bar[gZ], gWm, conj[VWm]] -> g2*Cos[ThetaW[]], 
 Cp[Ah[{gI1_}], Ah[{gI2_}], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*ZA[gI1, 1]*ZA[gI2, 1] + (I/2)*g2^2*ZA[gI1, 2]*ZA[gI2, 2]), 
 Cp[hh[{gI1_}], hh[{gI2_}], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*ZH[gI1, 1]*ZH[gI2, 1] + (I/2)*g2^2*ZH[gI1, 2]*ZH[gI2, 2]), 
 Cp[Hpm[{gI1_}], conj[Hpm[{gI2_}]], conj[VWm], VWm] -> 
  (-I)*((I/2)*g2^2*ZP[gI1, 1]*ZP[gI2, 1] + (I/2)*g2^2*ZP[gI1, 2]*ZP[gI2, 2]), 
 Cp[Ah[{gI2_}], Hpm[{gI1_}], conj[VWm]] -> 
  (I/2)*g2*(ZA[gI2, 1]*ZP[gI1, 1] + ZA[gI2, 2]*ZP[gI1, 2]), 
 Cp[hh[{gI2_}], Hpm[{gI1_}], conj[VWm]] -> 
  -1/2*(g2*(ZH[gI2, 1]*ZP[gI1, 1] - ZH[gI2, 2]*ZP[gI1, 2])), 
 Cp[Sv[{gI1_}], conj[Sv[{gI2_}]], conj[VWm], VWm] -> 
  (g2^2*Delta[gI1, gI2])/2, Cp[bar[Fu[{gI1_}]], Fd[{gI2_}], conj[VWm]][PL] -> 
  -((g2*sum[j1, 1, 3, conj[ZDL[gI2, j1]]*ZUL[gI1, j1]])/Sqrt[2]), 
 Cp[bar[Fu[{gI1_}]], Fd[{gI2_}], conj[VWm]][PR] -> 0, 
 Cp[bar[Fv[{gI1_}]], Fe[{gI2_}], conj[VWm]][PL] -> 
  -((g2*conj[ZEL[gI2, gI1]]*ThetaStep[gI1, 3])/Sqrt[2]), 
 Cp[bar[Fv[{gI1_}]], Fe[{gI2_}], conj[VWm]][PR] -> 0, 
 Cp[Se[{gI2_}], conj[Sv[{gI1_}]], conj[VWm]] -> 
  (g2*sum[j1, 1, 3, conj[ZE[gI2, j1]]*ZV[gI1, j1]])/Sqrt[2], 
 Cp[Chi[{gI1_}], Cha[{gI2_}], conj[VWm]][PL] -> 
  -1/2*(g2*(2*conj[UM[gI2, 1]]*ZN[gI1, 2] + Sqrt[2]*conj[UM[gI2, 2]]*
      ZN[gI1, 3])), Cp[Chi[{gI1_}], Cha[{gI2_}], conj[VWm]][PR] -> 
  -1/2*(g2*(2*conj[ZN[gI1, 2]]*UP[gI2, 1] - Sqrt[2]*conj[ZN[gI1, 4]]*
      UP[gI2, 2])), Cp[Sd[{gI1_}], conj[Sd[{gI2_}]], conj[VWm], VWm] -> 
  (g2^2*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZD[gI2, j1]])/2, 
 Cp[Se[{gI1_}], conj[Se[{gI2_}]], conj[VWm], VWm] -> 
  (g2^2*sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZE[gI2, j1]])/2, 
 Cp[Su[{gI1_}], conj[Su[{gI2_}]], conj[VWm], VWm] -> 
  (g2^2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZU[gI2, j1]])/2, 
 Cp[Sd[{gI2_}], conj[Su[{gI1_}]], conj[VWm]] -> 
  (g2*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZU[gI1, j1]])/Sqrt[2], 
 Cp[hh[{gI2_}], conj[VWm], VWm] -> (g2^2*(vd*ZH[gI2, 1] + vu*ZH[gI2, 2]))/2, 
 Cp[conj[VWm], conj[VWm], VWm, VWm][1] -> 2*g2^2, 
 Cp[conj[VWm], conj[VWm], VWm, VWm][2] -> -g2^2, 
 Cp[conj[VWm], conj[VWm], VWm, VWm][3] -> -g2^2, 
 Cp[bar[Cha[{gI1_}]], UChi[{gO2_}], Hpm[{gI2_}]][PL] -> 
  (-I)*((-I)*Sqrt[3/10]*g1*conj[UP[gI1, 2]]*Delta[1, gO2]*ZP[gI2, 2] - 
    (I*g2*conj[UP[gI1, 2]]*Delta[2, gO2]*ZP[gI2, 2])/Sqrt[2] - 
    I*g2*conj[UP[gI1, 1]]*Delta[4, gO2]*ZP[gI2, 2]), 
 Cp[bar[Cha[{gI1_}]], UChi[{gO1_}], Hpm[{gI2_}]][PR] -> 
  (-I)*((-I)*g2*Delta[3, gO1]*UM[gI1, 1]*ZP[gI2, 1] + 
    I*Sqrt[3/10]*g1*Delta[1, gO1]*UM[gI1, 2]*ZP[gI2, 1] + 
    (I*g2*Delta[2, gO1]*UM[gI1, 2]*ZP[gI2, 1])/Sqrt[2]), 
 Cp[UChi[{gO2_}], Cha[{gI2_}], conj[Hpm[{gI1_}]]][PL] -> 
  (-I)*(I*Sqrt[3/10]*g1*conj[UM[gI2, 2]]*Delta[1, gO2]*ZP[gI1, 1] + 
    (I*g2*conj[UM[gI2, 2]]*Delta[2, gO2]*ZP[gI1, 1])/Sqrt[2] - 
    I*g2*conj[UM[gI2, 1]]*Delta[3, gO2]*ZP[gI1, 1]), 
 Cp[UChi[{gO1_}], Cha[{gI2_}], conj[Hpm[{gI1_}]]][PR] -> 
  (-I)*((-I)*g2*Delta[4, gO1]*UP[gI2, 1]*ZP[gI1, 2] - 
    I*Sqrt[3/10]*g1*Delta[1, gO1]*UP[gI2, 2]*ZP[gI1, 2] - 
    (I*g2*Delta[2, gO1]*UP[gI2, 2]*ZP[gI1, 2])/Sqrt[2]), 
 Cp[Chi[{gI2_}], UChi[{gO2_}], hh[{gI1_}]][PL] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*conj[ZN[gI2, 3]]*Delta[1, gO2]*ZH[gI1, 1] - 
    (I/2)*g2*conj[ZN[gI2, 3]]*Delta[2, gO2]*ZH[gI1, 1] + 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI2, 1]]*Delta[3, gO2]*ZH[gI1, 1] - 
    (I/2)*g2*conj[ZN[gI2, 2]]*Delta[3, gO2]*ZH[gI1, 1] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI2, 4]]*Delta[1, gO2]*ZH[gI1, 2] + 
    (I/2)*g2*conj[ZN[gI2, 4]]*Delta[2, gO2]*ZH[gI1, 2] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI2, 1]]*Delta[4, gO2]*ZH[gI1, 2] + 
    (I/2)*g2*conj[ZN[gI2, 2]]*Delta[4, gO2]*ZH[gI1, 2]), 
 Cp[Chi[{gI2_}], UChi[{gO1_}], hh[{gI1_}]][PR] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*Delta[3, gO1]*ZH[gI1, 1]*ZN[gI2, 1] - 
    (I/2)*Sqrt[3/5]*g1*Delta[4, gO1]*ZH[gI1, 2]*ZN[gI2, 1] - 
    (I/2)*g2*Delta[3, gO1]*ZH[gI1, 1]*ZN[gI2, 2] + 
    (I/2)*g2*Delta[4, gO1]*ZH[gI1, 2]*ZN[gI2, 2] + 
    (I/2)*Sqrt[3/5]*g1*Delta[1, gO1]*ZH[gI1, 1]*ZN[gI2, 3] - 
    (I/2)*g2*Delta[2, gO1]*ZH[gI1, 1]*ZN[gI2, 3] - 
    (I/2)*Sqrt[3/5]*g1*Delta[1, gO1]*ZH[gI1, 2]*ZN[gI2, 4] + 
    (I/2)*g2*Delta[2, gO1]*ZH[gI1, 2]*ZN[gI2, 4]), 
 Cp[bar[Cha[{gI1_}]], UChi[{gO2_}], VWm][PL] -> 
  (-I)*((-I)*g2*Delta[2, gO2]*UM[gI1, 1] - (I*g2*Delta[3, gO2]*UM[gI1, 2])/
     Sqrt[2]), Cp[bar[Cha[{gI1_}]], UChi[{gO1_}], VWm][PR] -> 
  (-I)*((-I)*g2*conj[UP[gI1, 1]]*Delta[2, gO1] + 
    (I*g2*conj[UP[gI1, 2]]*Delta[4, gO1])/Sqrt[2]), 
 Cp[bar[Fv[{gI1_}]], UChi[{gO2_}], Sv[{gI2_}]][PL] -> 0, 
 Cp[bar[Fv[{gI1_}]], UChi[{gO1_}], Sv[{gI2_}]][PR] -> 
  (-I)*(I*Sqrt[3/10]*g1*conj[ZV[gI2, gI1]]*Delta[1, gO1]*ThetaStep[gI1, 3] - 
    (I*g2*conj[ZV[gI2, gI1]]*Delta[2, gO1]*ThetaStep[gI1, 3])/Sqrt[2]), 
 Cp[UChi[{gO2_}], Fv[{gI2_}], conj[Sv[{gI1_}]]][PL] -> 
  (-I)*(I*Sqrt[3/10]*g1*Delta[1, gO2]*ThetaStep[gI2, 3]*ZV[gI1, gI2] - 
    (I*g2*Delta[2, gO2]*ThetaStep[gI2, 3]*ZV[gI1, gI2])/Sqrt[2]), 
 Cp[UChi[{gO1_}], Fv[{gI2_}], conj[Sv[{gI1_}]]][PR] -> 0, 
 Cp[bar[Fd[{gI1_}]], UChi[{gO2_}], Sd[{gI2_}]][PL] -> 
  (-I)*((-I)*Sqrt[2/15]*g1*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZD[gI2, 3 + j1]]*conj[ZDR[gI1, j1]]] - 
    I*Delta[3, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
       sum[j1, 1, 3, conj[ZDR[gI1, j1]]*Yd[j1, j2]]]), 
 Cp[bar[Fd[{gI1_}]], UChi[{gO1_}], Sd[{gI2_}]][PR] -> 
  (-I)*(((-I)*g1*Delta[1, gO1]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZDL[gI1, j1]])/
     Sqrt[30] + (I*g2*Delta[2, gO1]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*
        ZDL[gI1, j1]])/Sqrt[2] - I*Delta[3, gO1]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*conj[ZD[gI2, 3 + j1]]]*
       ZDL[gI1, j2]]), Cp[bar[Fe[{gI1_}]], UChi[{gO2_}], Se[{gI2_}]][PL] -> 
  (-I)*((-I)*Sqrt[6/5]*g1*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZE[gI2, 3 + j1]]*conj[ZER[gI1, j1]]] - 
    I*Delta[3, gO2]*sum[j2, 1, 3, conj[ZE[gI2, j2]]*
       sum[j1, 1, 3, conj[ZER[gI1, j1]]*Ye[j1, j2]]]), 
 Cp[bar[Fe[{gI1_}]], UChi[{gO1_}], Se[{gI2_}]][PR] -> 
  (-I)*(I*Sqrt[3/10]*g1*Delta[1, gO1]*sum[j1, 1, 3, 
      conj[ZE[gI2, j1]]*ZEL[gI1, j1]] + 
    (I*g2*Delta[2, gO1]*sum[j1, 1, 3, conj[ZE[gI2, j1]]*ZEL[gI1, j1]])/
     Sqrt[2] - I*Delta[3, gO1]*sum[j2, 1, 3, 
      sum[j1, 1, 3, conj[Ye[j1, j2]]*conj[ZE[gI2, 3 + j1]]]*ZEL[gI1, j2]]), 
 Cp[bar[Fu[{gI1_}]], UChi[{gO2_}], Su[{gI2_}]][PL] -> 
  (-I)*((2*I)*Sqrt[2/15]*g1*Delta[1, gO2]*sum[j1, 1, 3, 
      conj[ZU[gI2, 3 + j1]]*conj[ZUR[gI1, j1]]] - 
    I*Delta[4, gO2]*sum[j2, 1, 3, conj[ZU[gI2, j2]]*
       sum[j1, 1, 3, conj[ZUR[gI1, j1]]*Yu[j1, j2]]]), 
 Cp[bar[Fu[{gI1_}]], UChi[{gO1_}], Su[{gI2_}]][PR] -> 
  (-I)*(((-I)*g1*Delta[1, gO1]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZUL[gI1, j1]])/
     Sqrt[30] - (I*g2*Delta[2, gO1]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*
        ZUL[gI1, j1]])/Sqrt[2] - I*Delta[4, gO1]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*conj[ZU[gI2, 3 + j1]]]*
       ZUL[gI1, j2]]), Cp[Chi[{gI1_}], UChi[{gO2_}], Ah[{gI2_}]][PL] -> 
  (-I)*((Sqrt[3/5]*g1*conj[ZN[gI1, 3]]*Delta[1, gO2]*ZA[gI2, 1])/2 - 
    (g2*conj[ZN[gI1, 3]]*Delta[2, gO2]*ZA[gI2, 1])/2 + 
    (Sqrt[3/5]*g1*conj[ZN[gI1, 1]]*Delta[3, gO2]*ZA[gI2, 1])/2 - 
    (g2*conj[ZN[gI1, 2]]*Delta[3, gO2]*ZA[gI2, 1])/2 - 
    (Sqrt[3/5]*g1*conj[ZN[gI1, 4]]*Delta[1, gO2]*ZA[gI2, 2])/2 + 
    (g2*conj[ZN[gI1, 4]]*Delta[2, gO2]*ZA[gI2, 2])/2 - 
    (Sqrt[3/5]*g1*conj[ZN[gI1, 1]]*Delta[4, gO2]*ZA[gI2, 2])/2 + 
    (g2*conj[ZN[gI1, 2]]*Delta[4, gO2]*ZA[gI2, 2])/2), 
 Cp[Chi[{gI1_}], UChi[{gO1_}], Ah[{gI2_}]][PR] -> 
  (-I)*(-1/2*(Sqrt[3/5]*g1*Delta[3, gO1]*ZA[gI2, 1]*ZN[gI1, 1]) + 
    (Sqrt[3/5]*g1*Delta[4, gO1]*ZA[gI2, 2]*ZN[gI1, 1])/2 + 
    (g2*Delta[3, gO1]*ZA[gI2, 1]*ZN[gI1, 2])/2 - 
    (g2*Delta[4, gO1]*ZA[gI2, 2]*ZN[gI1, 2])/2 - 
    (Sqrt[3/5]*g1*Delta[1, gO1]*ZA[gI2, 1]*ZN[gI1, 3])/2 + 
    (g2*Delta[2, gO1]*ZA[gI2, 1]*ZN[gI1, 3])/2 + 
    (Sqrt[3/5]*g1*Delta[1, gO1]*ZA[gI2, 2]*ZN[gI1, 4])/2 - 
    (g2*Delta[2, gO1]*ZA[gI2, 2]*ZN[gI1, 4])/2), 
 Cp[UChi[{gO2_}], Fd[{gI2_}], conj[Sd[{gI1_}]]][PL] -> 
  (-I)*(((-I)*g1*Delta[1, gO2]*sum[j1, 1, 3, conj[ZDL[gI2, j1]]*ZD[gI1, j1]])/
     Sqrt[30] + (I*g2*Delta[2, gO2]*sum[j1, 1, 3, conj[ZDL[gI2, j1]]*
        ZD[gI1, j1]])/Sqrt[2] - I*Delta[3, gO2]*
     sum[j2, 1, 3, conj[ZDL[gI2, j2]]*sum[j1, 1, 3, 
        Yd[j1, j2]*ZD[gI1, 3 + j1]]]), 
 Cp[UChi[{gO1_}], Fd[{gI2_}], conj[Sd[{gI1_}]]][PR] -> 
  (-I)*((-I)*Sqrt[2/15]*g1*Delta[1, gO1]*sum[j1, 1, 3, 
      ZD[gI1, 3 + j1]*ZDR[gI2, j1]] - I*Delta[3, gO1]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*
       ZD[gI1, j2]]), Cp[UChi[{gO2_}], Fe[{gI2_}], conj[Se[{gI1_}]]][PL] -> 
  (-I)*(I*Sqrt[3/10]*g1*Delta[1, gO2]*sum[j1, 1, 3, conj[ZEL[gI2, j1]]*
       ZE[gI1, j1]] + (I*g2*Delta[2, gO2]*sum[j1, 1, 3, 
       conj[ZEL[gI2, j1]]*ZE[gI1, j1]])/Sqrt[2] - 
    I*Delta[3, gO2]*sum[j2, 1, 3, conj[ZEL[gI2, j2]]*
       sum[j1, 1, 3, Ye[j1, j2]*ZE[gI1, 3 + j1]]]), 
 Cp[UChi[{gO1_}], Fe[{gI2_}], conj[Se[{gI1_}]]][PR] -> 
  (-I)*((-I)*Sqrt[6/5]*g1*Delta[1, gO1]*sum[j1, 1, 3, 
      ZE[gI1, 3 + j1]*ZER[gI2, j1]] - I*Delta[3, gO1]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*ZER[gI2, j1]]*
       ZE[gI1, j2]]), Cp[UChi[{gO2_}], Fu[{gI2_}], conj[Su[{gI1_}]]][PL] -> 
  (-I)*(((-I)*g1*Delta[1, gO2]*sum[j1, 1, 3, conj[ZUL[gI2, j1]]*ZU[gI1, j1]])/
     Sqrt[30] - (I*g2*Delta[2, gO2]*sum[j1, 1, 3, conj[ZUL[gI2, j1]]*
        ZU[gI1, j1]])/Sqrt[2] - I*Delta[4, gO2]*
     sum[j2, 1, 3, conj[ZUL[gI2, j2]]*sum[j1, 1, 3, 
        Yu[j1, j2]*ZU[gI1, 3 + j1]]]), 
 Cp[UChi[{gO1_}], Fu[{gI2_}], conj[Su[{gI1_}]]][PR] -> 
  (-I)*((2*I)*Sqrt[2/15]*g1*Delta[1, gO1]*sum[j1, 1, 3, 
      ZU[gI1, 3 + j1]*ZUR[gI2, j1]] - I*Delta[4, gO1]*
     sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*ZUR[gI2, j1]]*
       ZU[gI1, j2]]), Cp[UChi[{gO2_}], Cha[{gI2_}], conj[VWm]][PR] -> 
  (-I)*((-I)*g2*Delta[2, gO2]*UP[gI2, 1] + (I*g2*Delta[4, gO2]*UP[gI2, 2])/
     Sqrt[2]), Cp[UChi[{gO1_}], Cha[{gI2_}], conj[VWm]][PL] -> 
  (-I)*((-I)*g2*conj[UM[gI2, 1]]*Delta[2, gO1] - 
    (I*g2*conj[UM[gI2, 2]]*Delta[3, gO1])/Sqrt[2]), 
 Cp[Chi[{gI2_}], UChi[{gO2_}], VZ][PL] -> 
  (-I)*((-1/2*I)*g2*Cos[ThetaW[]]*Delta[3, gO2]*ZN[gI2, 3] - 
    (I/2)*Sqrt[3/5]*g1*Delta[3, gO2]*Sin[ThetaW[]]*ZN[gI2, 3] + 
    (I/2)*g2*Cos[ThetaW[]]*Delta[4, gO2]*ZN[gI2, 4] + 
    (I/2)*Sqrt[3/5]*g1*Delta[4, gO2]*Sin[ThetaW[]]*ZN[gI2, 4]), 
 Cp[Chi[{gI2_}], UChi[{gO1_}], VZ][PR] -> 
  (-I)*((I/2)*g2*conj[ZN[gI2, 3]]*Cos[ThetaW[]]*Delta[3, gO1] - 
    (I/2)*g2*conj[ZN[gI2, 4]]*Cos[ThetaW[]]*Delta[4, gO1] + 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI2, 3]]*Delta[3, gO1]*Sin[ThetaW[]] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZN[gI2, 4]]*Delta[4, gO1]*Sin[ThetaW[]]), 
 Cp[bar[UCha[{gO2_}]], Cha[{gI1_}], Ah[{gI2_}]][PL] -> 
  (-I)*(-((g2*conj[UM[gI1, 2]]*Delta[1, gO2]*ZA[gI2, 1])/Sqrt[2]) - 
    (g2*conj[UM[gI1, 1]]*Delta[2, gO2]*ZA[gI2, 2])/Sqrt[2]), 
 Cp[bar[UCha[{gO1_}]], Cha[{gI1_}], Ah[{gI2_}]][PR] -> 
  (-I)*((g2*Delta[2, gO1]*UP[gI1, 1]*ZA[gI2, 1])/Sqrt[2] + 
    (g2*Delta[1, gO1]*UP[gI1, 2]*ZA[gI2, 2])/Sqrt[2]), 
 Cp[bar[UCha[{gO2_}]], Cha[{gI2_}], hh[{gI1_}]][PL] -> 
  (-I)*(((-I)*g2*conj[UM[gI2, 2]]*Delta[1, gO2]*ZH[gI1, 1])/Sqrt[2] - 
    (I*g2*conj[UM[gI2, 1]]*Delta[2, gO2]*ZH[gI1, 2])/Sqrt[2]), 
 Cp[bar[UCha[{gO1_}]], Cha[{gI2_}], hh[{gI1_}]][PR] -> 
  (-I)*(((-I)*g2*Delta[2, gO1]*UP[gI2, 1]*ZH[gI1, 1])/Sqrt[2] - 
    (I*g2*Delta[1, gO1]*UP[gI2, 2]*ZH[gI1, 2])/Sqrt[2]), 
 Cp[bar[UCha[{gO2_}]], Chi[{gI2_}], Hpm[{gI1_}]][PL] -> 
  (-I)*((-I)*g2*conj[ZN[gI2, 4]]*Delta[1, gO2]*ZP[gI1, 2] - 
    I*Sqrt[3/10]*g1*conj[ZN[gI2, 1]]*Delta[2, gO2]*ZP[gI1, 2] - 
    (I*g2*conj[ZN[gI2, 2]]*Delta[2, gO2]*ZP[gI1, 2])/Sqrt[2]), 
 Cp[bar[UCha[{gO1_}]], Chi[{gI2_}], Hpm[{gI1_}]][PR] -> 
  (-I)*(I*Sqrt[3/10]*g1*Delta[2, gO1]*ZN[gI2, 1]*ZP[gI1, 1] + 
    (I*g2*Delta[2, gO1]*ZN[gI2, 2]*ZP[gI1, 1])/Sqrt[2] - 
    I*g2*Delta[1, gO1]*ZN[gI2, 3]*ZP[gI1, 1]), 
 Cp[bar[UCha[{gO2_}]], Fe[{gI2_}], conj[Sv[{gI1_}]]][PL] -> 
  -(g2*Delta[1, gO2]*sum[j1, 1, 3, conj[ZEL[gI2, j1]]*ZV[gI1, j1]]), 
 Cp[bar[UCha[{gO1_}]], Fe[{gI2_}], conj[Sv[{gI1_}]]][PR] -> 
  Delta[2, gO1]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*ZER[gI2, j1]]*
     ZV[gI1, j2]], Cp[bar[UCha[{gO2_}]], bar[Fu[{gI1_}]], Sd[{gI2_}]][PL] -> 
  Delta[2, gO2]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
     sum[j1, 1, 3, conj[ZUR[gI1, j1]]*Yu[j1, j2]]], 
 Cp[bar[UCha[{gO1_}]], bar[Fu[{gI1_}]], Sd[{gI2_}]][PR] -> 
  (-I)*((-I)*g2*Delta[1, gO1]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZUL[gI1, j1]] + 
    I*Delta[2, gO1]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*
         conj[ZD[gI2, 3 + j1]]]*ZUL[gI1, j2]]), 
 Cp[bar[UCha[{gO2_}]], bar[Fv[{gI1_}]], Se[{gI2_}]][PL] -> 0, 
 Cp[bar[UCha[{gO1_}]], bar[Fv[{gI1_}]], Se[{gI2_}]][PR] -> 
  (-I)*(I*Delta[2, gO1]*sum[j1, 1, 3, conj[Ye[j1, gI1]]*
       conj[ZE[gI2, 3 + j1]]] - I*g2*conj[ZE[gI2, gI1]]*Delta[1, gO1]*
     ThetaStep[gI1, 3]), Cp[bar[UCha[{gO2_}]], Fd[{gI2_}], conj[Su[{gI1_}]]][
   PL] -> (-I)*((-I)*g2*Delta[1, gO2]*sum[j1, 1, 3, conj[ZDL[gI2, j1]]*
       ZU[gI1, j1]] + I*Delta[2, gO2]*sum[j2, 1, 3, conj[ZDL[gI2, j2]]*
       sum[j1, 1, 3, Yu[j1, j2]*ZU[gI1, 3 + j1]]]), 
 Cp[bar[UCha[{gO1_}]], Fd[{gI2_}], conj[Su[{gI1_}]]][PR] -> 
  Delta[2, gO1]*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*
     ZU[gI1, j2]], Cp[bar[UCha[{gO2_}]], Cha[{gI2_}], VP][PR] -> 
  (-I)*(I*g2*Delta[1, gO2]*Sin[ThetaW[]]*UP[gI2, 1] + 
    (I/2)*Sqrt[3/5]*g1*Cos[ThetaW[]]*Delta[2, gO2]*UP[gI2, 2] + 
    (I/2)*g2*Delta[2, gO2]*Sin[ThetaW[]]*UP[gI2, 2]), 
 Cp[bar[UCha[{gO1_}]], Cha[{gI2_}], VP][PL] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*conj[UM[gI2, 2]]*Cos[ThetaW[]]*Delta[2, gO1] + 
    I*g2*conj[UM[gI2, 1]]*Delta[1, gO1]*Sin[ThetaW[]] + 
    (I/2)*g2*conj[UM[gI2, 2]]*Delta[2, gO1]*Sin[ThetaW[]]), 
 Cp[bar[UCha[{gO2_}]], Cha[{gI2_}], VZ][PR] -> 
  (-I)*(I*g2*Cos[ThetaW[]]*Delta[1, gO2]*UP[gI2, 1] + 
    (I/2)*g2*Cos[ThetaW[]]*Delta[2, gO2]*UP[gI2, 2] - 
    (I/2)*Sqrt[3/5]*g1*Delta[2, gO2]*Sin[ThetaW[]]*UP[gI2, 2]), 
 Cp[bar[UCha[{gO1_}]], Cha[{gI2_}], VZ][PL] -> 
  (-I)*(I*g2*conj[UM[gI2, 1]]*Cos[ThetaW[]]*Delta[1, gO1] + 
    (I/2)*g2*conj[UM[gI2, 2]]*Cos[ThetaW[]]*Delta[2, gO1] - 
    (I/2)*Sqrt[3/5]*g1*conj[UM[gI2, 2]]*Delta[2, gO1]*Sin[ThetaW[]]), 
 Cp[bar[UCha[{gO2_}]], Chi[{gI2_}], VWm][PR] -> 
  (-I)*((-I)*g2*Delta[1, gO2]*ZN[gI2, 2] + (I*g2*Delta[2, gO2]*ZN[gI2, 4])/
     Sqrt[2]), Cp[bar[UCha[{gO1_}]], Chi[{gI2_}], VWm][PL] -> 
  (-I)*((-I)*g2*conj[ZN[gI2, 2]]*Delta[1, gO1] - 
    (I*g2*conj[ZN[gI2, 3]]*Delta[2, gO1])/Sqrt[2]), 
 Cp[bar[UFe[{gO2_}]], Fe[{gI2_}], hh[{gI1_}]][PL] -> 
  -((sum[j2, 1, 3, conj[ZEL[gI2, j2]]*Ye[gO2, j2]]*ThetaStep[gO2, 3]*
     ZH[gI1, 1])/Sqrt[2]), Cp[bar[UFe[{gO1_}]], Fe[{gI2_}], hh[{gI1_}]][
   PR] -> -((sum[j1, 1, 3, conj[Ye[j1, gO1]]*ZER[gI2, j1]]*ThetaStep[gO1, 3]*
     ZH[gI1, 1])/Sqrt[2]), Cp[bar[UFe[{gO2_}]], Fv[{gI2_}], Hpm[{gI1_}]][
   PL] -> ThetaStep[gO2, 3]*Ye[gO2, gI2]*ZP[gI1, 1], 
 Cp[bar[UFe[{gO1_}]], Fv[{gI2_}], Hpm[{gI1_}]][PR] -> 0, 
 Cp[bar[UFe[{gO2_}]], Cha[{gI2_}], Sv[{gI1_}]][PL] -> 
  conj[UM[gI2, 2]]*sum[j2, 1, 3, conj[ZV[gI1, j2]]*Ye[gO2, j2]]*
   ThetaStep[gO2, 3], Cp[bar[UFe[{gO1_}]], Cha[{gI2_}], Sv[{gI1_}]][PR] -> 
  -(g2*conj[ZV[gI1, gO1]]*ThetaStep[gO1, 3]*UP[gI2, 1]), 
 Cp[bar[UFe[{gO2_}]], Fe[{gI1_}], Ah[{gI2_}]][PL] -> 
  ((-I)*sum[j2, 1, 3, conj[ZEL[gI1, j2]]*Ye[gO2, j2]]*ThetaStep[gO2, 3]*
    ZA[gI2, 1])/Sqrt[2], Cp[bar[UFe[{gO1_}]], Fe[{gI1_}], Ah[{gI2_}]][PR] -> 
  (I*sum[j1, 1, 3, conj[Ye[j1, gO1]]*ZER[gI1, j1]]*ThetaStep[gO1, 3]*
    ZA[gI2, 1])/Sqrt[2], Cp[bar[UFe[{gO2_}]], Chi[{gI2_}], Se[{gI1_}]][PL] -> 
  -(Sqrt[6/5]*g1*conj[ZE[gI1, 3 + gO2]]*conj[ZN[gI2, 1]]*ThetaStep[gO2, 3]) - 
   conj[ZN[gI2, 3]]*sum[j2, 1, 3, conj[ZE[gI1, j2]]*Ye[gO2, j2]]*
    ThetaStep[gO2, 3], Cp[bar[UFe[{gO1_}]], Chi[{gI2_}], Se[{gI1_}]][PR] -> 
  (-I)*(I*Sqrt[3/10]*g1*conj[ZE[gI1, gO1]]*ThetaStep[gO1, 3]*ZN[gI2, 1] + 
    (I*g2*conj[ZE[gI1, gO1]]*ThetaStep[gO1, 3]*ZN[gI2, 2])/Sqrt[2] - 
    I*sum[j1, 1, 3, conj[Ye[j1, gO1]]*conj[ZE[gI1, 3 + j1]]]*
     ThetaStep[gO1, 3]*ZN[gI2, 3]), 
 Cp[bar[UFe[{gO2_}]], Fe[{gI2_}], VP][PR] -> Sqrt[3/5]*g1*Cos[ThetaW[]]*
   ThetaStep[gI2, 3]*ZER[gI2, gO2], 
 Cp[bar[UFe[{gO1_}]], Fe[{gI2_}], VP][PL] -> 
  (-I)*((I/2)*Sqrt[3/5]*g1*conj[ZEL[gI2, gO1]]*Cos[ThetaW[]]*
     ThetaStep[gI2, 3] + (I/2)*g2*conj[ZEL[gI2, gO1]]*Sin[ThetaW[]]*
     ThetaStep[gI2, 3]), Cp[bar[UFe[{gO2_}]], Fe[{gI2_}], VZ][PR] -> 
  -(Sqrt[3/5]*g1*Sin[ThetaW[]]*ThetaStep[gI2, 3]*ZER[gI2, gO2]), 
 Cp[bar[UFe[{gO1_}]], Fe[{gI2_}], VZ][PL] -> 
  (-I)*((I/2)*g2*conj[ZEL[gI2, gO1]]*Cos[ThetaW[]]*ThetaStep[gI2, 3] - 
    (I/2)*Sqrt[3/5]*g1*conj[ZEL[gI2, gO1]]*Sin[ThetaW[]]*ThetaStep[gI2, 3]), 
 Cp[bar[UFe[{gO2_}]], Fv[{gI2_}], VWm][PR] -> 0, 
 Cp[bar[UFe[{gO1_}]], Fv[{gI2_}], VWm][PL] -> 
  -((g2*Delta[gI2, gO1]*ThetaStep[gI2, 3])/Sqrt[2]), 
 Cp[bar[UFd[{gO2_}]], Fd[{gI2_}], hh[{gI1_}]][PL] -> 
  -((sum[j2, 1, 3, conj[ZDL[gI2, j2]]*Yd[gO2, j2]]*ThetaStep[gO2, 3]*
     ZH[gI1, 1])/Sqrt[2]), Cp[bar[UFd[{gO1_}]], Fd[{gI2_}], hh[{gI1_}]][
   PR] -> -((sum[j1, 1, 3, conj[Yd[j1, gO1]]*ZDR[gI2, j1]]*ThetaStep[gO1, 3]*
     ZH[gI1, 1])/Sqrt[2]), Cp[bar[UFd[{gO2_}]], Fu[{gI2_}], Hpm[{gI1_}]][
   PL] -> sum[j2, 1, 3, conj[ZUL[gI2, j2]]*Yd[gO2, j2]]*ThetaStep[gO2, 3]*
   ZP[gI1, 1], Cp[bar[UFd[{gO1_}]], Fu[{gI2_}], Hpm[{gI1_}]][PR] -> 
  sum[j1, 1, 3, conj[Yu[j1, gO1]]*ZUR[gI2, j1]]*ThetaStep[gO1, 3]*ZP[gI1, 2], 
 Cp[bar[UFd[{gO2_}]], Fd[{gI1_}], Ah[{gI2_}]][PL] -> 
  ((-I)*sum[j2, 1, 3, conj[ZDL[gI1, j2]]*Yd[gO2, j2]]*ThetaStep[gO2, 3]*
    ZA[gI2, 1])/Sqrt[2], Cp[bar[UFd[{gO1_}]], Fd[{gI1_}], Ah[{gI2_}]][PR] -> 
  (I*sum[j1, 1, 3, conj[Yd[j1, gO1]]*ZDR[gI1, j1]]*ThetaStep[gO1, 3]*
    ZA[gI2, 1])/Sqrt[2], Cp[bar[UFd[{gO2_}]], Cha[{gI2_}], Su[{gI1_}]][PL] -> 
  conj[UM[gI2, 2]]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*Yd[gO2, j2]]*
   ThetaStep[gO2, 3], Cp[bar[UFd[{gO1_}]], Cha[{gI2_}], Su[{gI1_}]][PR] -> 
  (-I)*((-I)*g2*conj[ZU[gI1, gO1]]*ThetaStep[gO1, 3]*UP[gI2, 1] + 
    I*sum[j1, 1, 3, conj[Yu[j1, gO1]]*conj[ZU[gI1, 3 + j1]]]*
     ThetaStep[gO1, 3]*UP[gI2, 2]), 
 Cp[bar[UFd[{gO2_}]], Chi[{gI2_}], Sd[{gI1_}]][PL] -> 
  (-(Sqrt[6/5]*g1*conj[ZD[gI1, 3 + gO2]]*conj[ZN[gI2, 1]]*
      ThetaStep[gO2, 3]) - 3*conj[ZN[gI2, 3]]*sum[j2, 1, 3, 
      conj[ZD[gI1, j2]]*Yd[gO2, j2]]*ThetaStep[gO2, 3])/3, 
 Cp[bar[UFd[{gO1_}]], Chi[{gI2_}], Sd[{gI1_}]][PR] -> 
  (-I)*(((-I)*g1*conj[ZD[gI1, gO1]]*ThetaStep[gO1, 3]*ZN[gI2, 1])/Sqrt[30] + 
    (I*g2*conj[ZD[gI1, gO1]]*ThetaStep[gO1, 3]*ZN[gI2, 2])/Sqrt[2] - 
    I*sum[j1, 1, 3, conj[Yd[j1, gO1]]*conj[ZD[gI1, 3 + j1]]]*
     ThetaStep[gO1, 3]*ZN[gI2, 3]), 
 Cp[bar[UFd[{gO2_}]], Glu, Sd[{gI1_}]][PL] -> 
  Sqrt[2]*g3*PhaseGlu*conj[ZD[gI1, 3 + gO2]]*ThetaStep[gO2, 3], 
 Cp[bar[UFd[{gO1_}]], Glu, Sd[{gI1_}]][PR] -> 
  -(Sqrt[2]*g3*conj[PhaseGlu]*conj[ZD[gI1, gO1]]*ThetaStep[gO1, 3]), 
 Cp[bar[UFd[{gO2_}]], Fd[{gI2_}], VG][PR] -> 
  -(g3*ThetaStep[gI2, 3]*ZDR[gI2, gO2]), 
 Cp[bar[UFd[{gO1_}]], Fd[{gI2_}], VG][PL] -> 
  -(g3*conj[ZDL[gI2, gO1]]*ThetaStep[gI2, 3]), 
 Cp[bar[UFd[{gO2_}]], Fd[{gI2_}], VP][PR] -> 
  (g1*Cos[ThetaW[]]*ThetaStep[gI2, 3]*ZDR[gI2, gO2])/Sqrt[15], 
 Cp[bar[UFd[{gO1_}]], Fd[{gI2_}], VP][PL] -> 
  (-I)*(((-1/2*I)*g1*conj[ZDL[gI2, gO1]]*Cos[ThetaW[]]*ThetaStep[gI2, 3])/
     Sqrt[15] + (I/2)*g2*conj[ZDL[gI2, gO1]]*Sin[ThetaW[]]*
     ThetaStep[gI2, 3]), Cp[bar[UFd[{gO2_}]], Fd[{gI2_}], VZ][PR] -> 
  -((g1*Sin[ThetaW[]]*ThetaStep[gI2, 3]*ZDR[gI2, gO2])/Sqrt[15]), 
 Cp[bar[UFd[{gO1_}]], Fd[{gI2_}], VZ][PL] -> 
  (-I)*((I/2)*g2*conj[ZDL[gI2, gO1]]*Cos[ThetaW[]]*ThetaStep[gI2, 3] + 
    ((I/2)*g1*conj[ZDL[gI2, gO1]]*Sin[ThetaW[]]*ThetaStep[gI2, 3])/Sqrt[15]), 
 Cp[bar[UFd[{gO2_}]], Fu[{gI2_}], VWm][PR] -> 0, 
 Cp[bar[UFd[{gO1_}]], Fu[{gI2_}], VWm][PL] -> 
  -((g2*conj[ZUL[gI2, gO1]]*ThetaStep[gO1, 3])/Sqrt[2]), 
 Cp[bar[UFu[{gO2_}]], Fd[{gI2_}], conj[Hpm[{gI1_}]]][PL] -> 
  sum[j2, 1, 3, conj[ZDL[gI2, j2]]*Yu[gO2, j2]]*ThetaStep[gO2, 3]*ZP[gI1, 2], 
 Cp[bar[UFu[{gO1_}]], Fd[{gI2_}], conj[Hpm[{gI1_}]]][PR] -> 
  sum[j1, 1, 3, conj[Yd[j1, gO1]]*ZDR[gI2, j1]]*ThetaStep[gO1, 3]*ZP[gI1, 1], 
 Cp[bar[UFu[{gO2_}]], Fu[{gI2_}], hh[{gI1_}]][PL] -> 
  -((sum[j2, 1, 3, conj[ZUL[gI2, j2]]*Yu[gO2, j2]]*ThetaStep[gO2, 3]*
     ZH[gI1, 2])/Sqrt[2]), Cp[bar[UFu[{gO1_}]], Fu[{gI2_}], hh[{gI1_}]][
   PR] -> -((sum[j1, 1, 3, conj[Yu[j1, gO1]]*ZUR[gI2, j1]]*ThetaStep[gO1, 3]*
     ZH[gI1, 2])/Sqrt[2]), Cp[bar[Cha[{gI1_}]], bar[UFu[{gO2_}]], Sd[{gI2_}]][
   PL] -> conj[UP[gI1, 2]]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*Yu[gO2, j2]]*
   ThetaStep[gO2, 3], Cp[bar[Cha[{gI1_}]], bar[UFu[{gO1_}]], Sd[{gI2_}]][
   PR] -> (-I)*((-I)*g2*conj[ZD[gI2, gO1]]*ThetaStep[gO1, 3]*UM[gI1, 1] + 
    I*sum[j1, 1, 3, conj[Yd[j1, gO1]]*conj[ZD[gI2, 3 + j1]]]*
     ThetaStep[gO1, 3]*UM[gI1, 2]), 
 Cp[bar[UFu[{gO2_}]], Fu[{gI1_}], Ah[{gI2_}]][PL] -> 
  ((-I)*sum[j2, 1, 3, conj[ZUL[gI1, j2]]*Yu[gO2, j2]]*ThetaStep[gO2, 3]*
    ZA[gI2, 2])/Sqrt[2], Cp[bar[UFu[{gO1_}]], Fu[{gI1_}], Ah[{gI2_}]][PR] -> 
  (I*sum[j1, 1, 3, conj[Yu[j1, gO1]]*ZUR[gI1, j1]]*ThetaStep[gO1, 3]*
    ZA[gI2, 2])/Sqrt[2], Cp[bar[UFu[{gO2_}]], Chi[{gI2_}], Su[{gI1_}]][PL] -> 
  (2*Sqrt[6/5]*g1*conj[ZN[gI2, 1]]*conj[ZU[gI1, 3 + gO2]]*ThetaStep[gO2, 3] - 
    3*conj[ZN[gI2, 4]]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*Yu[gO2, j2]]*
     ThetaStep[gO2, 3])/3, Cp[bar[UFu[{gO1_}]], Chi[{gI2_}], Su[{gI1_}]][
   PR] -> (-I)*(((-I)*g1*conj[ZU[gI1, gO1]]*ThetaStep[gO1, 3]*ZN[gI2, 1])/
     Sqrt[30] - (I*g2*conj[ZU[gI1, gO1]]*ThetaStep[gO1, 3]*ZN[gI2, 2])/
     Sqrt[2] - I*sum[j1, 1, 3, conj[Yu[j1, gO1]]*conj[ZU[gI1, 3 + j1]]]*
     ThetaStep[gO1, 3]*ZN[gI2, 4]), 
 Cp[bar[UFu[{gO2_}]], Glu, Su[{gI1_}]][PL] -> 
  Sqrt[2]*g3*PhaseGlu*conj[ZU[gI1, 3 + gO2]]*ThetaStep[gO2, 3], 
 Cp[bar[UFu[{gO1_}]], Glu, Su[{gI1_}]][PR] -> 
  -(Sqrt[2]*g3*conj[PhaseGlu]*conj[ZU[gI1, gO1]]*ThetaStep[gO1, 3]), 
 Cp[bar[UFu[{gO2_}]], Fd[{gI2_}], conj[VWm]][PR] -> 0, 
 Cp[bar[UFu[{gO1_}]], Fd[{gI2_}], conj[VWm]][PL] -> 
  -((g2*conj[ZDL[gI2, gO1]]*ThetaStep[gO1, 3])/Sqrt[2]), 
 Cp[bar[UFu[{gO2_}]], Fu[{gI2_}], VG][PR] -> 
  -(g3*ThetaStep[gI2, 3]*ZUR[gI2, gO2]), 
 Cp[bar[UFu[{gO1_}]], Fu[{gI2_}], VG][PL] -> 
  -(g3*conj[ZUL[gI2, gO1]]*ThetaStep[gI2, 3]), 
 Cp[bar[UFu[{gO2_}]], Fu[{gI2_}], VP][PR] -> 
  (-2*g1*Cos[ThetaW[]]*ThetaStep[gI2, 3]*ZUR[gI2, gO2])/Sqrt[15], 
 Cp[bar[UFu[{gO1_}]], Fu[{gI2_}], VP][PL] -> 
  (-I)*(((-1/2*I)*g1*conj[ZUL[gI2, gO1]]*Cos[ThetaW[]]*ThetaStep[gI2, 3])/
     Sqrt[15] - (I/2)*g2*conj[ZUL[gI2, gO1]]*Sin[ThetaW[]]*
     ThetaStep[gI2, 3]), Cp[bar[UFu[{gO2_}]], Fu[{gI2_}], VZ][PR] -> 
  (2*g1*Sin[ThetaW[]]*ThetaStep[gI2, 3]*ZUR[gI2, gO2])/Sqrt[15], 
 Cp[bar[UFu[{gO1_}]], Fu[{gI2_}], VZ][PL] -> 
  (-I)*((-1/2*I)*g2*conj[ZUL[gI2, gO1]]*Cos[ThetaW[]]*ThetaStep[gI2, 3] + 
    ((I/2)*g1*conj[ZUL[gI2, gO1]]*Sin[ThetaW[]]*ThetaStep[gI2, 3])/Sqrt[15]), 
 Cp[bar[Fd[{gI1_}]], Glu, Sd[{gI2_}]][PL] -> Sqrt[2]*g3*PhaseGlu*
   sum[j1, 1, 3, conj[ZD[gI2, 3 + j1]]*conj[ZDR[gI1, j1]]], 
 Cp[bar[Fd[{gI1_}]], Glu, Sd[{gI2_}]][PR] -> 
  -(Sqrt[2]*g3*conj[PhaseGlu]*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZDL[gI1, j1]]), 
 Cp[bar[Fu[{gI1_}]], Glu, Su[{gI2_}]][PL] -> Sqrt[2]*g3*PhaseGlu*
   sum[j1, 1, 3, conj[ZU[gI2, 3 + j1]]*conj[ZUR[gI1, j1]]], 
 Cp[bar[Fu[{gI1_}]], Glu, Su[{gI2_}]][PR] -> 
  -(Sqrt[2]*g3*conj[PhaseGlu]*sum[j1, 1, 3, conj[ZU[gI2, j1]]*ZUL[gI1, j1]]), 
 Cp[Glu, Fd[{gI2_}], conj[Sd[{gI1_}]]][PL] -> 
  -(Sqrt[2]*g3*PhaseGlu*sum[j1, 1, 3, conj[ZDL[gI2, j1]]*ZD[gI1, j1]]), 
 Cp[Glu, Fd[{gI2_}], conj[Sd[{gI1_}]]][PR] -> Sqrt[2]*g3*conj[PhaseGlu]*
   sum[j1, 1, 3, ZD[gI1, 3 + j1]*ZDR[gI2, j1]], 
 Cp[Glu, Fu[{gI2_}], conj[Su[{gI1_}]]][PL] -> 
  -(Sqrt[2]*g3*PhaseGlu*sum[j1, 1, 3, conj[ZUL[gI2, j1]]*ZU[gI1, j1]]), 
 Cp[Glu, Fu[{gI2_}], conj[Su[{gI1_}]]][PR] -> Sqrt[2]*g3*conj[PhaseGlu]*
   sum[j1, 1, 3, ZU[gI1, 3 + j1]*ZUR[gI2, j1]], 
 Cp[bar[Fv[{gO2_}]], Fe[{gI2_}], conj[Hpm[{gI1_}]]][PL] -> 0, 
 Cp[bar[Fv[{gO1_}]], Fe[{gI2_}], conj[Hpm[{gI1_}]]][PR] -> 
  sum[j1, 1, 3, conj[Ye[j1, gO1]]*ZER[gI2, j1]]*ZP[gI1, 1], 
 Cp[bar[Cha[{gI1_}]], bar[Fv[{gO2_}]], Se[{gI2_}]][PL] -> 0, 
 Cp[bar[Cha[{gI1_}]], bar[Fv[{gO1_}]], Se[{gI2_}]][PR] -> 
  -(g2*conj[ZE[gI2, gO1]]*ThetaStep[gO1, 3]*UM[gI1, 1]) + 
   sum[j1, 1, 3, conj[Ye[j1, gO1]]*conj[ZE[gI2, 3 + j1]]]*UM[gI1, 2], 
 Cp[bar[Fv[{gO2_}]], Chi[{gI2_}], Sv[{gI1_}]][PL] -> 0, 
 Cp[bar[Fv[{gO1_}]], Chi[{gI2_}], Sv[{gI1_}]][PR] -> 
  (conj[ZV[gI1, gO1]]*ThetaStep[gO1, 3]*(Sqrt[3/5]*g1*ZN[gI2, 1] - 
     g2*ZN[gI2, 2]))/Sqrt[2], Cp[bar[Fe[{gO2_}]], Fe[{gI2_}], hh[{gI1_}]][
   PL] -> 
  -((sum[j2, 1, 3, conj[ZEL[gI2, j2]]*sum[j1, 1, 3, conj[ZER[gO2, j1]]*
         Ye[j1, j2]]]*ZH[gI1, 1])/Sqrt[2]), 
 Cp[bar[Fe[{gO1_}]], Fe[{gI2_}], hh[{gI1_}]][PR] -> 
  -((sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*ZER[gI2, j1]]*ZEL[gO1, j2]]*
     ZH[gI1, 1])/Sqrt[2]), Cp[bar[Fe[{gO2_}]], Fv[{gI2_}], Hpm[{gI1_}]][
   PL] -> sum[j1, 1, 3, conj[ZER[gO2, j1]]*Ye[j1, gI2]]*ZP[gI1, 1], 
 Cp[bar[Fe[{gO1_}]], Fv[{gI2_}], Hpm[{gI1_}]][PR] -> 0, 
 Cp[bar[Fe[{gO2_}]], Cha[{gI2_}], Sv[{gI1_}]][PL] -> 
  conj[UM[gI2, 2]]*sum[j2, 1, 3, conj[ZV[gI1, j2]]*
     sum[j1, 1, 3, conj[ZER[gO2, j1]]*Ye[j1, j2]]], 
 Cp[bar[Fe[{gO1_}]], Cha[{gI2_}], Sv[{gI1_}]][PR] -> 
  -(g2*sum[j1, 1, 3, conj[ZV[gI1, j1]]*ZEL[gO1, j1]]*UP[gI2, 1]), 
 Cp[bar[Fe[{gO2_}]], Fe[{gI1_}], Ah[{gI2_}]][PL] -> 
  ((-I)*sum[j2, 1, 3, conj[ZEL[gI1, j2]]*sum[j1, 1, 3, 
       conj[ZER[gO2, j1]]*Ye[j1, j2]]]*ZA[gI2, 1])/Sqrt[2], 
 Cp[bar[Fe[{gO1_}]], Fe[{gI1_}], Ah[{gI2_}]][PR] -> 
  (I*sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*ZER[gI1, j1]]*ZEL[gO1, j2]]*
    ZA[gI2, 1])/Sqrt[2], Cp[bar[Fe[{gO2_}]], Chi[{gI2_}], Se[{gI1_}]][PL] -> 
  -(Sqrt[6/5]*g1*conj[ZN[gI2, 1]]*sum[j1, 1, 3, conj[ZE[gI1, 3 + j1]]*
       conj[ZER[gO2, j1]]]) - conj[ZN[gI2, 3]]*
    sum[j2, 1, 3, conj[ZE[gI1, j2]]*sum[j1, 1, 3, conj[ZER[gO2, j1]]*
        Ye[j1, j2]]], Cp[bar[Fe[{gO1_}]], Chi[{gI2_}], Se[{gI1_}]][PR] -> 
  (sum[j1, 1, 3, conj[ZE[gI1, j1]]*ZEL[gO1, j1]]*(Sqrt[3/5]*g1*ZN[gI2, 1] + 
      g2*ZN[gI2, 2]))/Sqrt[2] - 
   sum[j2, 1, 3, sum[j1, 1, 3, conj[Ye[j1, j2]]*conj[ZE[gI1, 3 + j1]]]*
      ZEL[gO1, j2]]*ZN[gI2, 3], Cp[bar[Fe[{gO2_}]], Fv[{gI2_}], VWm][PR] -> 
  0, Cp[bar[Fe[{gO1_}]], Fv[{gI2_}], VWm][PL] -> 
  -((g2*ThetaStep[gI2, 3]*ZEL[gO1, gI2])/Sqrt[2]), 
 Cp[bar[Fd[{gO2_}]], Fd[{gI2_}], hh[{gI1_}]][PL] -> 
  -((sum[j2, 1, 3, conj[ZDL[gI2, j2]]*sum[j1, 1, 3, conj[ZDR[gO2, j1]]*
         Yd[j1, j2]]]*ZH[gI1, 1])/Sqrt[2]), 
 Cp[bar[Fd[{gO1_}]], Fd[{gI2_}], hh[{gI1_}]][PR] -> 
  -((sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*ZDL[gO1, j2]]*
     ZH[gI1, 1])/Sqrt[2]), Cp[bar[Fd[{gO2_}]], Fu[{gI2_}], Hpm[{gI1_}]][
   PL] -> sum[j2, 1, 3, conj[ZUL[gI2, j2]]*sum[j1, 1, 3, 
      conj[ZDR[gO2, j1]]*Yd[j1, j2]]]*ZP[gI1, 1], 
 Cp[bar[Fd[{gO1_}]], Fu[{gI2_}], Hpm[{gI1_}]][PR] -> 
  sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*ZUR[gI2, j1]]*ZDL[gO1, j2]]*
   ZP[gI1, 2], Cp[bar[Fd[{gO2_}]], Fd[{gI1_}], Ah[{gI2_}]][PL] -> 
  ((-I)*sum[j2, 1, 3, conj[ZDL[gI1, j2]]*sum[j1, 1, 3, 
       conj[ZDR[gO2, j1]]*Yd[j1, j2]]]*ZA[gI2, 1])/Sqrt[2], 
 Cp[bar[Fd[{gO1_}]], Fd[{gI1_}], Ah[{gI2_}]][PR] -> 
  (I*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI1, j1]]*ZDL[gO1, j2]]*
    ZA[gI2, 1])/Sqrt[2], Cp[bar[Fd[{gO2_}]], Cha[{gI2_}], Su[{gI1_}]][PL] -> 
  conj[UM[gI2, 2]]*sum[j2, 1, 3, conj[ZU[gI1, j2]]*
     sum[j1, 1, 3, conj[ZDR[gO2, j1]]*Yd[j1, j2]]], 
 Cp[bar[Fd[{gO1_}]], Cha[{gI2_}], Su[{gI1_}]][PR] -> 
  -(g2*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZDL[gO1, j1]]*UP[gI2, 1]) + 
   sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*conj[ZU[gI1, 3 + j1]]]*
      ZDL[gO1, j2]]*UP[gI2, 2], Cp[bar[Fd[{gO2_}]], Chi[{gI2_}], Sd[{gI1_}]][
   PL] -> (-(Sqrt[6/5]*g1*conj[ZN[gI2, 1]]*sum[j1, 1, 3, 
       conj[ZD[gI1, 3 + j1]]*conj[ZDR[gO2, j1]]]) - 
    3*conj[ZN[gI2, 3]]*sum[j2, 1, 3, conj[ZD[gI1, j2]]*
       sum[j1, 1, 3, conj[ZDR[gO2, j1]]*Yd[j1, j2]]])/3, 
 Cp[bar[Fd[{gO1_}]], Chi[{gI2_}], Sd[{gI1_}]][PR] -> 
  (-(Sqrt[2]*sum[j1, 1, 3, conj[ZD[gI1, j1]]*ZDL[gO1, j1]]*
      (Sqrt[3/5]*g1*ZN[gI2, 1] - 3*g2*ZN[gI2, 2])) - 
    6*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*conj[ZD[gI1, 3 + j1]]]*
       ZDL[gO1, j2]]*ZN[gI2, 3])/6, 
 Cp[bar[Fd[{gO2_}]], Fu[{gI2_}], VWm][PR] -> 0, 
 Cp[bar[Fd[{gO1_}]], Fu[{gI2_}], VWm][PL] -> 
  -((g2*sum[j1, 1, 3, conj[ZUL[gI2, j1]]*ZDL[gO1, j1]])/Sqrt[2]), 
 Cp[bar[Fu[{gO2_}]], Fd[{gI2_}], conj[Hpm[{gI1_}]]][PL] -> 
  sum[j2, 1, 3, conj[ZDL[gI2, j2]]*sum[j1, 1, 3, conj[ZUR[gO2, j1]]*
       Yu[j1, j2]]]*ZP[gI1, 2], 
 Cp[bar[Fu[{gO1_}]], Fd[{gI2_}], conj[Hpm[{gI1_}]]][PR] -> 
  sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*ZDR[gI2, j1]]*ZUL[gO1, j2]]*
   ZP[gI1, 1], Cp[bar[Fu[{gO2_}]], Fu[{gI2_}], hh[{gI1_}]][PL] -> 
  -((sum[j2, 1, 3, conj[ZUL[gI2, j2]]*sum[j1, 1, 3, conj[ZUR[gO2, j1]]*
         Yu[j1, j2]]]*ZH[gI1, 2])/Sqrt[2]), 
 Cp[bar[Fu[{gO1_}]], Fu[{gI2_}], hh[{gI1_}]][PR] -> 
  -((sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*ZUR[gI2, j1]]*ZUL[gO1, j2]]*
     ZH[gI1, 2])/Sqrt[2]), Cp[bar[Cha[{gI1_}]], bar[Fu[{gO2_}]], Sd[{gI2_}]][
   PL] -> conj[UP[gI1, 2]]*sum[j2, 1, 3, conj[ZD[gI2, j2]]*
     sum[j1, 1, 3, conj[ZUR[gO2, j1]]*Yu[j1, j2]]], 
 Cp[bar[Cha[{gI1_}]], bar[Fu[{gO1_}]], Sd[{gI2_}]][PR] -> 
  -(g2*sum[j1, 1, 3, conj[ZD[gI2, j1]]*ZUL[gO1, j1]]*UM[gI1, 1]) + 
   sum[j2, 1, 3, sum[j1, 1, 3, conj[Yd[j1, j2]]*conj[ZD[gI2, 3 + j1]]]*
      ZUL[gO1, j2]]*UM[gI1, 2], Cp[bar[Fu[{gO2_}]], Fu[{gI1_}], Ah[{gI2_}]][
   PL] -> ((-I)*sum[j2, 1, 3, conj[ZUL[gI1, j2]]*
      sum[j1, 1, 3, conj[ZUR[gO2, j1]]*Yu[j1, j2]]]*ZA[gI2, 2])/Sqrt[2], 
 Cp[bar[Fu[{gO1_}]], Fu[{gI1_}], Ah[{gI2_}]][PR] -> 
  (I*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*ZUR[gI1, j1]]*ZUL[gO1, j2]]*
    ZA[gI2, 2])/Sqrt[2], Cp[bar[Fu[{gO2_}]], Chi[{gI2_}], Su[{gI1_}]][PL] -> 
  (2*Sqrt[6/5]*g1*conj[ZN[gI2, 1]]*sum[j1, 1, 3, conj[ZU[gI1, 3 + j1]]*
       conj[ZUR[gO2, j1]]] - 3*conj[ZN[gI2, 4]]*
     sum[j2, 1, 3, conj[ZU[gI1, j2]]*sum[j1, 1, 3, conj[ZUR[gO2, j1]]*
         Yu[j1, j2]]])/3, Cp[bar[Fu[{gO1_}]], Chi[{gI2_}], Su[{gI1_}]][PR] -> 
  (-(Sqrt[2]*sum[j1, 1, 3, conj[ZU[gI1, j1]]*ZUL[gO1, j1]]*
      (Sqrt[3/5]*g1*ZN[gI2, 1] + 3*g2*ZN[gI2, 2])) - 
    6*sum[j2, 1, 3, sum[j1, 1, 3, conj[Yu[j1, j2]]*conj[ZU[gI1, 3 + j1]]]*
       ZUL[gO1, j2]]*ZN[gI2, 4])/6, 
 Cp[Cha[{gI1_}], Fv[{gO1_}], conj[Se[{gI2_}]]][PL] -> 
  conj[UM[gI1, 2]]*sum[j1, 1, 3, Ye[j1, gO1]*ZE[gI2, 3 + j1]] - 
   g2*conj[UM[gI1, 1]]*ThetaStep[gO1, 3]*ZE[gI2, gO1], 
 Cp[Chi[{gI1_}], Fv[{gO1_}], conj[Sv[{gI2_}]]][PL] -> 
  ((Sqrt[3/5]*g1*conj[ZN[gI1, 1]] - g2*conj[ZN[gI1, 2]])*ThetaStep[gO1, 3]*
    ZV[gI2, gO1])/Sqrt[2], Cp[bar[Cha[{gI1_}]], Fe[{gO1_}], conj[Sv[{gI2_}]]][
   PL] -> -(g2*conj[UP[gI1, 1]]*sum[j1, 1, 3, conj[ZEL[gO1, j1]]*
      ZV[gI2, j1]]), Cp[Chi[{gI1_}], Fe[{gO1_}], conj[Se[{gI2_}]]][PL] -> 
  Sqrt[3/10]*g1*conj[ZN[gI1, 1]]*sum[j1, 1, 3, conj[ZEL[gO1, j1]]*
      ZE[gI2, j1]] + (g2*conj[ZN[gI1, 2]]*sum[j1, 1, 3, 
      conj[ZEL[gO1, j1]]*ZE[gI2, j1]])/Sqrt[2] - 
   conj[ZN[gI1, 3]]*sum[j2, 1, 3, conj[ZEL[gO1, j2]]*
      sum[j1, 1, 3, Ye[j1, j2]*ZE[gI2, 3 + j1]]]}
