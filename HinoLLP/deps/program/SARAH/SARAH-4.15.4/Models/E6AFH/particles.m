(* SARAH generated template for particles.m file for E6AFH *)
(* File created at 10:15 on 4.9.2023  *) 

(* IMPORTANT: *)
(* check/adjust in particular the lines which contain "CHECK!" *)
(* the correct information is needed there to have correct results! *)


(* ###############            EWSB       ################# *) 

ParticleDefinitions[EWSB] = { 
 
(* ----------- Already defined particles in existing particles.m -------------- *) 

{Ah,{ 
     Description -> "Pseudo-Scalar Higgs", 
     FeynArtsNr -> 2, 
     LaTeX -> "A^0", 
     Mass -> {0, LesHouches}, 
     OutputName -> "Ah", 
     PDG -> {0, 0, 36}, 
     ElectricCharge -> 0, 
     Width -> {0, External}}}, 

{Cha,{ 
     Description -> "Charginos", 
     FeynArtsNr -> 12, 
     LaTeX -> {"\\tilde{\\chi}^-","\\tilde{\\chi}^+"}, 
     Mass -> LesHouches, 
     OutputName -> "C", 
     PDG -> {-1000024, -1000037}, 
     ElectricCharge -> -1, 
     Width -> Automatic}}, 

{Chi,{ 
     Description -> "Neutralinos", 
     FeynArtsNr -> 11, 
     LaTeX -> "\\tilde{\\chi}^0", 
     Mass -> LesHouches, 
     OutputName -> "N", 
     PDG -> {1000022, 1000023, 1000025, 1000035, 1000045, 1000055}, 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{ChiI,{ 
     Description -> "Inert Neutralinos", 
     FeynArtsNr -> 13, 
     LaTeX -> "\\tilde{\\chi}^{0,Inert}", 
     Mass -> Automatic, 
     OutputName -> "NI", 
     PDG -> {1000092}   (* adjusted number of PDGs to number of generations  *), 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{ChiP,{ 
     Description -> "Prime Neutralinos", 
     FeynArtsNr -> 900, 
     LaTeX -> "\\tilde{\\chi}^{'0}", 
     Mass -> LesHouches, 
     OutputName -> "NP", 
     PDG -> {1000081, 1000082, 1000083, 1000084}   (* adjusted number of PDGs to number of generations  *), 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{Fd,{ 
     Description -> "Down-Quarks", 
     FeynArtsNr -> 4, 
     LaTeX -> "d", 
     Mass -> {0.0035, 0.104, 4.2}, 
     OutputName -> "d", 
     PDG -> {1, 3, 5}, 
     ElectricCharge -> -1/3, 
     Width -> {0, 0, 0}}}, 

{FDX,{ 
     Description -> "Exotics1", 
     FeynArtsNr -> 666, 
     LaTeX -> "D_X", 
     Mass -> Automatic, 
     OutputName -> "FDX", 
     PDG -> {51, 52, 53}, 
     ElectricCharge -> -1/3, 
     Width -> 0}}, 

{Fe,{ 
     Description -> "Leptons", 
     FeynArtsNr -> 2, 
     LaTeX -> "e", 
     Mass -> {0.000511, 0.105, 1.776}, 
     OutputName -> "e", 
     PDG -> {11, 13, 15, 2000253}   (* adjusted number of PDGs to number of generations  *), 
     ElectricCharge -> -1, 
     Width -> {0, 0, 0}}}, 

{Fu,{ 
     Description -> "Up-Quarks", 
     FeynArtsNr -> 3, 
     LaTeX -> "u", 
     Mass -> {0.0015, 1.27, 171.2}, 
     OutputName -> "u", 
     PDG -> {2, 4, 6}, 
     ElectricCharge -> 2/3, 
     Width -> {0, 0, 1.51}}}, 

{Fv,{ 
     Description -> "Neutrinos", 
     FeynArtsNr -> 1, 
     LaTeX -> "\\nu", 
     Mass -> {0, 0, 0}, 
     OutputName -> "nu", 
     PDG -> {12, 14, 16}, 
     ElectricCharge -> 0, 
     Width -> {0, 0, 0}}}, 

{gG,{ 
     Description -> "Gluon Ghost", 
     FeynArtsNr -> 5, 
     LaTeX -> "\\eta^G", 
     Mass -> 0, 
     OutputName -> "gG", 
     PDG -> {0}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 

{Glu,{ 
     Description -> "Gluino", 
     FeynArtsNr -> 15, 
     LaTeX -> "\\tilde{g}", 
     Mass -> LesHouches, 
     OutputName -> "go", 
     PDG -> {1000021}, 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{gP,{ 
     Description -> "Photon Ghost", 
     FeynArtsNr -> 1, 
     LaTeX -> "\\eta^{\\gamma}", 
     Mass -> 0, 
     OutputName -> "gA", 
     PDG -> {0}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 

{gWm,{ 
     Description -> "Negative W-Boson Ghost", 
     FeynArtsNr -> 3, 
     LaTeX -> "\\eta^-", 
     Mass -> Mass[VWm], 
     OutputName -> "gWm", 
     PDG -> {0}, 
     ElectricCharge -> -1, 
     Width -> Automatic}}, 

{gWmC,{ 
     Description -> "Positive W-Boson Ghost", 
     FeynArtsNr -> 4, 
     LaTeX -> "\\eta^+", 
     Mass -> Mass[VWm], 
     OutputName -> "gWpC", 
     PDG -> {0}, 
     ElectricCharge -> 1, 
     Width -> Automatic}}, 

{gZ,{ 
     Description -> "Z-Boson Ghost", 
     FeynArtsNr -> 2, 
     LaTeX -> "\\eta^Z", 
     Mass -> Mass[VZ], 
     OutputName -> "gZ", 
     PDG -> {0}, 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{gZp,{ 
     Description -> "Z'-Ghost", 
     FeynArtsNr -> 10, 
     LaTeX -> "\\eta^{Z'}", 
     Mass -> Automatic, 
     OutputName -> "gZp", 
     PDG -> {0}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 

{hh,{ 
     Description -> "Higgs", 
     FeynArtsNr -> 1, 
     LaTeX -> "h", 
     Mass -> LesHouches, 
     OutputName -> "h", 
     PDG -> {25, 35, 45}, 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{Hpm,{ 
     Description -> "Charged Higgs", 
     FeynArtsNr -> 3, 
     LaTeX -> {"H^-","H^+"}, 
     Mass -> {0, LesHouches}, 
     OutputName -> {"Hm","Hp"}, 
     PDG -> {0, -37}, 
     ElectricCharge -> -1, 
     Width -> {0, External}}}, 

{Sd,{ 
     Description -> "Down-Squarks", 
     FeynArtsNr -> 14, 
     LaTeX -> "\\tilde{d}", 
     Mass -> LesHouches, 
     OutputName -> "sd", 
     PDG -> {1000001, 1000003, 1000005, 2000001, 2000003, 2000005}, 
     ElectricCharge -> -1/3, 
     Width -> Automatic}}, 

{SDX,{ 
     Description -> "SExotics1", 
     FeynArtsNr -> 666, 
     LaTeX -> "\\tilde{D}_X", 
     Mass -> Automatic, 
     OutputName -> "SDX", 
     PDG -> {1000051, 2000051, 1000052, 2000052, 1000053, 2000053}, 
     ElectricCharge -> -1/3, 
     Width -> Automatic}}, 

{Se,{ 
     Description -> "Sleptons", 
     FeynArtsNr -> 12, 
     LaTeX -> "\\tilde{e}", 
     Mass -> LesHouches, 
     OutputName -> "se", 
     PDG -> {1000011, 1000013, 1000015, 2000011, 2000013, 2000015, 2000148, 2000149}, 
     ElectricCharge -> -1, 
     Width -> Automatic}}, 

{SHI0,{ 
     Description -> "Neutral Inert-Higgs", 
     FeynArtsNr -> 7, 
     LaTeX -> "h^{0,Inert}", 
     Mass -> LesHouches, 
     OutputName -> "HNI", 
     PDG -> {82, 84, 86, 88, 90, 92, 2000262, 2000263}   (* adjusted number of PDGs to number of generations  *), 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{SHIp,{ 
     Description -> "Charged Inert-Higgs", 
     FeynArtsNr -> 8, 
     LaTeX -> {"h^{-,Inert}","h^{+,Inert}"}, 
     Mass -> LesHouches, 
     OutputName -> "HCI", 
     PDG -> {81, 83, 85, 87}, 
     ElectricCharge -> -1, 
     Width -> Automatic}}, 

{Su,{ 
     Description -> "Up-Squarks", 
     FeynArtsNr -> 13, 
     LaTeX -> "\\tilde{u}", 
     Mass -> LesHouches, 
     OutputName -> "su", 
     PDG -> {1000002, 1000004, 1000006, 2000002, 2000004, 2000006}, 
     ElectricCharge -> 2/3, 
     Width -> Automatic}}, 

{Sv,{ 
     Description -> "Sneutrinos", 
     FeynArtsNr -> 11, 
     LaTeX -> "\\tilde{\\nu}", 
     Mass -> LesHouches, 
     OutputName -> "sv", 
     PDG -> {1000012, 1000014, 1000016, 2000144, 2000145}   (* adjusted number of PDGs to number of generations  *), 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 

{VG,{ 
     Description -> "Gluon", 
     FeynArtsNr -> 5, 
     LaTeX -> "g", 
     Mass -> 0, 
     OutputName -> "g", 
     PDG -> {21}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 

{VP,{ 
     Description -> "Photon", 
     FeynArtsNr -> 1, 
     LaTeX -> "\\gamma", 
     Mass -> 0, 
     OutputName -> "A", 
     PDG -> {22}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 

{VWm,{ 
     Description -> "W-Boson", 
     Goldstone -> Hpm[{1}], 
     FeynArtsNr -> 3, 
     LaTeX -> {"W^-","W^+"}, 
     Mass -> Dependence, 
     MassDependence -> Sqrt[Mass[VZ]^2/2 + Sqrt[-((Pi*Mass[VZ]^2)/(Sqrt[2]*aEWinv*Gf)) + Mass[VZ]^4/4]], 
     OutputName -> {"Wm","Wp"}, 
     PDG -> {-24}, 
     ElectricCharge -> -1, 
     Width -> 2.141}}, 

{VZ,{ 
     Description -> "Z-Boson", 
     Goldstone -> Ah[{1}], 
     FeynArtsNr -> 2, 
     LaTeX -> "Z", 
     Mass -> 91.1876, 
     OutputName -> "Z", 
     PDG -> {23}, 
     ElectricCharge -> 0, 
     Width -> 2.4952}}, 

{VZp,{ 
     Description -> "Z'-Boson", 
     Goldstone -> Ah[{2}], 
     FeynArtsNr -> 10, 
     LaTeX -> "{Z'}", 
     Mass -> LesHouches, 
     OutputName -> "Zp", 
     PDG -> {31}, 
     ElectricCharge -> 0, 
     Width -> Automatic}}, 



(*  ----------- Additional particles in the model ---------- *) 

{ChaP,{ 
     FeynArtsNr -> 901   (* auto generated FeynArts number *), 
     LaTeX -> "chap"   (* auto generated LaTeX name *), 
     Mass -> LesHouches, 
     OutputName -> "chap"   (* auto generated Output name *), 
     PDG -> {2000266, 2000267}   (* auto generated PDGs  *), 
     ElectricCharge -> -1 (* this is just a dummy value for the electric charge! 				 => CHECK! *), 
     Width -> Automatic}} 
}; 




(* ###############            GaugeES       ################# *) 

ParticleDefinitions[GaugeES] = { 
 
(* ----------- Already defined particles in existing particles.m -------------- *) 

{fB,{ 
     FeynArtsNr -> 690097, 
     LaTeX -> "\\tilde{B}", 
     Mass -> LesHouches, 
     OutputName -> "fb", 
     PDG -> {1000045}, 
     Width -> Automatic}}, 

{fBp,{ 
     FeynArtsNr -> 690099, 
     LaTeX -> "\\tilde{Bp}", 
     Mass -> LesHouches, 
     OutputName -> "fbp", 
     PDG -> {1000047}, 
     Width -> Automatic}}, 

{FdL,{ 
     FeynArtsNr -> 690101, 
     LaTeX -> "{d}_L", 
     Mass -> LesHouches, 
     OutputName -> "fdl", 
     PDG -> {1000051, 1000052, 1000053}, 
     Width -> Automatic}}, 

{FdR,{ 
     FeynArtsNr -> 690103, 
     LaTeX -> "{d}_R", 
     Mass -> LesHouches, 
     OutputName -> "fdr", 
     PDG -> {1000057, 1000058, 1000059}, 
     Width -> Automatic}}, 

{FDxbarR,{ 
     FeynArtsNr -> 690105, 
     LaTeX -> "\\bar{{Dx}_R}", 
     Mass -> LesHouches, 
     OutputName -> "fdxbr", 
     PDG -> {1000063, 1000064, 1000065}, 
     Width -> Automatic}}, 

{FDxL,{ 
     FeynArtsNr -> 690107, 
     LaTeX -> "{Dx}_L", 
     Mass -> LesHouches, 
     OutputName -> "fdxl", 
     PDG -> {1000069, 1000070, 1000071}, 
     Width -> Automatic}}, 

{FeL,{ 
     FeynArtsNr -> 690109, 
     LaTeX -> "{e}_L", 
     Mass -> LesHouches, 
     OutputName -> "fel", 
     PDG -> {1000075, 1000076, 1000077}, 
     Width -> Automatic}}, 

{FeR,{ 
     FeynArtsNr -> 690111, 
     LaTeX -> "{e}_R", 
     Mass -> LesHouches, 
     OutputName -> "fer", 
     PDG -> {1000081, 1000082, 1000083}, 
     Width -> Automatic}}, 

{fG,{ 
     FeynArtsNr -> 690113, 
     LaTeX -> "\\tilde{G}", 
     Mass -> LesHouches, 
     OutputName -> "fg", 
     PDG -> {1000085}, 
     Width -> Automatic}}, 

{FH1I0,{ 
     FeynArtsNr -> 690115, 
     LaTeX -> "{H1I}^0", 
     Mass -> LesHouches, 
     OutputName -> "fh1i0", 
     PDG -> {1000088, 1000089}, 
     Width -> Automatic}}, 

{FH1Im,{ 
     FeynArtsNr -> 690117, 
     LaTeX -> "H1Im", 
     Mass -> LesHouches, 
     OutputName -> "fh1im", 
     PDG -> {1000092, 1000093}, 
     Width -> Automatic}}, 

{FH2I0,{ 
     FeynArtsNr -> 690119, 
     LaTeX -> "{H2I}^0", 
     Mass -> LesHouches, 
     OutputName -> "fh2i0", 
     PDG -> {1000096, 1000097}, 
     Width -> Automatic}}, 

{FH2Ip,{ 
     FeynArtsNr -> 690121, 
     LaTeX -> "H2Ip", 
     Mass -> LesHouches, 
     OutputName -> "fh2ip", 
     PDG -> {1000100, 1000101}, 
     Width -> Automatic}}, 

{FHd0,{ 
     FeynArtsNr -> 690123, 
     LaTeX -> "{Hd}^0", 
     Mass -> LesHouches, 
     OutputName -> "fhd0", 
     PDG -> {1000103}, 
     Width -> Automatic}}, 

{FHdm,{ 
     FeynArtsNr -> 690125, 
     LaTeX -> "Hdm", 
     Mass -> LesHouches, 
     OutputName -> "fhdm", 
     PDG -> {1000105}, 
     Width -> Automatic}}, 

{FHu0,{ 
     FeynArtsNr -> 690127, 
     LaTeX -> "{Hu}^0", 
     Mass -> LesHouches, 
     OutputName -> "fhu0", 
     PDG -> {1000107}, 
     Width -> Automatic}}, 

{FHup,{ 
     FeynArtsNr -> 690129, 
     LaTeX -> "Hup", 
     Mass -> LesHouches, 
     OutputName -> "fhup", 
     PDG -> {1000109}, 
     Width -> Automatic}}, 

{FPhi,{ 
     FeynArtsNr -> 690131, 
     LaTeX -> "\\Phi", 
     Mass -> LesHouches, 
     OutputName -> "fphi", 
     PDG -> {1000111}, 
     Width -> Automatic}}, 

{FPhiB,{ 
     FeynArtsNr -> 690133, 
     LaTeX -> "{\\Phi}_{B}", 
     Mass -> LesHouches, 
     OutputName -> "fphib", 
     PDG -> {1000113}, 
     Width -> Automatic}}, 

{FsP,{ 
     FeynArtsNr -> 690135, 
     LaTeX -> "sP", 
     Mass -> LesHouches, 
     OutputName -> "fsp", 
     PDG -> {1000116}   (* adjusted number of PDGs to number of generations  *), 
     Width -> Automatic}}, 

{FsR,{ 
     FeynArtsNr -> 690137, 
     LaTeX -> "{s}_R", 
     Mass -> LesHouches, 
     OutputName -> "fsr", 
     PDG -> {1000119}, 
     Width -> Automatic}}, 

{FuL,{ 
     FeynArtsNr -> 690139, 
     LaTeX -> "{u}_L", 
     Mass -> LesHouches, 
     OutputName -> "ful", 
     PDG -> {1000123, 1000124, 1000125}, 
     Width -> Automatic}}, 

{FuR,{ 
     FeynArtsNr -> 690141, 
     LaTeX -> "{u}_R", 
     Mass -> LesHouches, 
     OutputName -> "fur", 
     PDG -> {1000129, 1000130, 1000131}, 
     Width -> Automatic}}, 

{FvL,{ 
     FeynArtsNr -> 690143, 
     LaTeX -> "{v}_L", 
     Mass -> LesHouches, 
     OutputName -> "fvl", 
     PDG -> {1000135, 1000136, 1000137}, 
     Width -> Automatic}}, 

{fWB,{ 
     FeynArtsNr -> 690145, 
     LaTeX -> "\\tilde{WB}", 
     Mass -> LesHouches, 
     OutputName -> "fwb", 
     PDG -> {1000141, 1000142, 1000143}, 
     Width -> Automatic}}, 

{FXd0,{ 
     FeynArtsNr -> 690147, 
     LaTeX -> "{Xd}^0", 
     Mass -> LesHouches, 
     OutputName -> "fxd0", 
     PDG -> {1000145}, 
     Width -> Automatic}}, 

{FXdm,{ 
     FeynArtsNr -> 690149, 
     LaTeX -> "Xdm", 
     Mass -> LesHouches, 
     OutputName -> "fxdm", 
     PDG -> {1000147}, 
     Width -> Automatic}}, 

{FXu0,{ 
     FeynArtsNr -> 690151, 
     LaTeX -> "{Xu}^0", 
     Mass -> LesHouches, 
     OutputName -> "fxu0", 
     PDG -> {1000149}, 
     Width -> Automatic}}, 

{FXup,{ 
     FeynArtsNr -> 690153, 
     LaTeX -> "Xup", 
     Mass -> LesHouches, 
     OutputName -> "fxup", 
     PDG -> {1000151}, 
     Width -> Automatic}}, 

{gB,{ 
     Description -> "B-Boson Ghost", 
     FeynArtsNr -> 1, 
     LaTeX -> "\\eta^B", 
     Mass -> 0, 
     OutputName -> "gB", 
     PDG -> {0}, 
     Width -> 0}}, 

{gBp,{ 
     FeynArtsNr -> 10, 
     LaTeX -> "g_Bp", 
     Mass -> LesHouches, 
     OutputName -> "gBp", 
     PDG -> {0}, 
     Width -> Automatic}}, 

{gG,{ 
     Description -> "Gluon Ghost", 
     FeynArtsNr -> 5, 
     LaTeX -> "\\eta^G", 
     Mass -> 0, 
     OutputName -> "gG", 
     PDG -> {0}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 

{gWB,{ 
     Description -> "W-Boson Ghost", 
     FeynArtsNr -> 2, 
     LaTeX -> "\\eta^W", 
     Mass -> 0, 
     OutputName -> "gW", 
     PDG -> {0}   (* adjusted number of PDGs to number of generations  *), 
     Width -> 0}}, 

{SdL,{ 
     Description -> "Left Down-Squarks", 
     FeynArtsNr -> 14, 
     LaTeX -> "\\tilde{d}_L", 
     Mass -> Automatic, 
     OutputName -> "dL", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SdR,{ 
     Description -> "Right Down-Squarks", 
     FeynArtsNr -> 15, 
     LaTeX -> "\\tilde{d}_R", 
     Mass -> Automatic, 
     OutputName -> "dR", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SDxbarR,{ 
     FeynArtsNr -> 690155, 
     LaTeX -> "\\tilde{\\bar{{Dx}_R}}", 
     Mass -> LesHouches, 
     OutputName -> "sdxbr", 
     PDG -> {1000155, 1000156, 1000157}, 
     Width -> Automatic}}, 

{SDxL,{ 
     FeynArtsNr -> 690157, 
     LaTeX -> "\\tilde{{Dx}_L}", 
     Mass -> LesHouches, 
     OutputName -> "sdxl", 
     PDG -> {1000161, 1000162, 1000163}, 
     Width -> Automatic}}, 

{SeL,{ 
     Description -> "Left Selectron", 
     FeynArtsNr -> 12, 
     LaTeX -> "\\tilde{e}_L", 
     Mass -> Automatic, 
     OutputName -> "eL", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SeR,{ 
     Description -> "Right Selectron", 
     FeynArtsNr -> 13, 
     LaTeX -> "\\tilde{e}_R", 
     Mass -> Automatic, 
     OutputName -> "eR", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SH1I0,{ 
     Description -> "Neutral Inert-Down-Higgs", 
     FeynArtsNr -> 101, 
     LaTeX -> "h^{0Inert}_{1}", 
     Mass -> LesHouches, 
     OutputName -> "SH1I0", 
     PDG -> {1000024, 1000025}, 
     Width -> Automatic}}, 

{SH1Im,{ 
     Description -> "Charged Inert-Down-Higgs", 
     FeynArtsNr -> 102, 
     LaTeX -> "h^{-Inert}_{1}", 
     Mass -> LesHouches, 
     OutputName -> "SH1Im", 
     PDG -> {1000028, 1000029}, 
     Width -> Automatic}}, 

{SH2I0,{ 
     Description -> "Neutral Inert-Up-Higgs", 
     FeynArtsNr -> 103, 
     LaTeX -> "h^{0Inert}_{2}", 
     Mass -> LesHouches, 
     OutputName -> "SH2I0", 
     PDG -> {1000032, 1000033}, 
     Width -> Automatic}}, 

{SH2Ip,{ 
     Description -> "Charged Inert-Up-Higgs", 
     FeynArtsNr -> 104, 
     LaTeX -> "h^{+Inert}_{2}", 
     Mass -> LesHouches, 
     OutputName -> "SH2Ip", 
     PDG -> {1000036, 1000037}, 
     Width -> Automatic}}, 

{SHd0,{ 
     Description -> "Neutral Down-Higgs", 
     FeynArtsNr -> 1, 
     LaTeX -> "H_d^0", 
     Mass -> Automatic, 
     OutputName -> "Hd0", 
     PDG -> {0}, 
     Width -> Automatic}}, 

{SHdm,{ 
     Description -> "Charged Down-Higgs", 
     FeynArtsNr -> 2, 
     LaTeX -> "H_d^-", 
     Mass -> Automatic, 
     OutputName -> "Hdm", 
     PDG -> {0}, 
     Width -> Automatic}}, 

{SHu0,{ 
     Description -> "Neutral Up-Higgs", 
     FeynArtsNr -> 3, 
     LaTeX -> "H_u^0", 
     Mass -> Automatic, 
     OutputName -> "Hu0", 
     PDG -> {0}, 
     Width -> Automatic}}, 

{SHup,{ 
     Description -> "Charged Up-Higgs", 
     FeynArtsNr -> 4, 
     LaTeX -> "H_u^+", 
     Mass -> Automatic, 
     OutputName -> "Hup", 
     PDG -> {0}, 
     Width -> Automatic}}, 

{SPhi,{ 
     FeynArtsNr -> 690159, 
     LaTeX -> "\\tilde{\\Phi}", 
     Mass -> LesHouches, 
     OutputName -> "sphi", 
     PDG -> {1000165}, 
     Width -> Automatic}}, 

{SPhiB,{ 
     FeynArtsNr -> 690161, 
     LaTeX -> "\\tilde{{\\Phi}_{B}}", 
     Mass -> LesHouches, 
     OutputName -> "sphib", 
     PDG -> {1000167}, 
     Width -> Automatic}}, 

{SsP,{ 
     FeynArtsNr -> 690163, 
     LaTeX -> "\\tilde{sP}", 
     Mass -> LesHouches, 
     OutputName -> "ssp", 
     PDG -> {1000170}   (* adjusted number of PDGs to number of generations  *), 
     Width -> Automatic}}, 

{SsR,{ 
     Description -> "Singlet", 
     FeynArtsNr -> 98, 
     LaTeX -> "S", 
     Mass -> Automatic, 
     OutputName -> "s", 
     PDG -> {0}, 
     Width -> 0}}, 

{SuL,{ 
     Description -> "Left Up-Squarks", 
     FeynArtsNr -> 16, 
     LaTeX -> "\\tilde{u}_L", 
     Mass -> Automatic, 
     OutputName -> "uL", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SuR,{ 
     Description -> "Right Up-Squarks", 
     FeynArtsNr -> 17, 
     LaTeX -> "\\tilde{u}_R", 
     Mass -> Automatic, 
     OutputName -> "uR", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SvL,{ 
     Description -> "Left Sneutrino", 
     FeynArtsNr -> 10, 
     LaTeX -> "\\tilde{\\nu}_L", 
     Mass -> Automatic, 
     OutputName -> "nL", 
     PDG -> {0, 0, 0}, 
     Width -> Automatic}}, 

{SXd0,{ 
     FeynArtsNr -> 690165, 
     LaTeX -> "\\tilde{{Xd}^0}", 
     Mass -> LesHouches, 
     OutputName -> "sxd0", 
     PDG -> {1000173}, 
     Width -> Automatic}}, 

{SXdm,{ 
     FeynArtsNr -> 690167, 
     LaTeX -> "\\tilde{Xdm}", 
     Mass -> LesHouches, 
     OutputName -> "sxdm", 
     PDG -> {1000175}, 
     Width -> Automatic}}, 

{SXu0,{ 
     FeynArtsNr -> 690169, 
     LaTeX -> "\\tilde{{Xu}^0}", 
     Mass -> LesHouches, 
     OutputName -> "sxu0", 
     PDG -> {1000177}, 
     Width -> Automatic}}, 

{SXup,{ 
     FeynArtsNr -> 690171, 
     LaTeX -> "\\tilde{Xup}", 
     Mass -> LesHouches, 
     OutputName -> "sxup", 
     PDG -> {1000179}, 
     Width -> Automatic}}, 

{VB,{ 
     Description -> "B-Boson", 
     FeynArtsNr -> 1, 
     LaTeX -> "B", 
     Mass -> 0, 
     OutputName -> "B", 
     PDG -> {0}, 
     Width -> 0}}, 

{VBp,{ 
     FeynArtsNr -> 10, 
     LaTeX -> "Bp", 
     Mass -> LesHouches, 
     OutputName -> "VBp", 
     PDG -> {1000039}, 
     Width -> Automatic}}, 

{VG,{ 
     Description -> "Gluon", 
     FeynArtsNr -> 5, 
     LaTeX -> "g", 
     Mass -> 0, 
     OutputName -> "g", 
     PDG -> {21}, 
     ElectricCharge -> 0, 
     Width -> 0}}, 



(*  ----------- Additional particles in the model ---------- *) 

{FsM,{ 
     FeynArtsNr -> 690172   (* auto generated FeynArts number *), 
     LaTeX -> "sM"   (* auto generated LaTeX name *), 
     Mass -> LesHouches, 
     OutputName -> "fsm"   (* auto generated Output name *), 
     PDG -> {1000181}   (* auto generated PDGs  *), 
     Width -> Automatic}}, 

{SsM,{ 
     FeynArtsNr -> 690174   (* auto generated FeynArts number *), 
     LaTeX -> "\\tilde{sM}"   (* auto generated LaTeX name *), 
     Mass -> LesHouches, 
     OutputName -> "ssm"   (* auto generated Output name *), 
     PDG -> {1000183}   (* auto generated PDGs  *), 
     Width -> Automatic}}
}; 




(* ###############            Weyl Spinors and intermediate states       ################# *) 

WeylFermionAndIndermediate = { 
 
(* ----------- Already defined particles in existing particles.m -------------- *) 

{fB,{ 
     Description -> "Bino Weyl-Spinor", 
     LaTeX -> "\\lambda_{\\tilde{B}}"}}, 

{fWB,{ 
     Description -> "Wino Weyl-Spinor", 
     LaTeX -> "\\lambda_{\\tilde{W}}"}}, 

{fG,{ 
     Description -> "Gluino Weyl-Spinor", 
     LaTeX -> "\\lambda_{\\tilde{g}}"}}, 

{fBp,{ 
     LaTeX -> "\\lambda_Bp"}}, 

{FdL,{ 
     Description -> "Left Down-Quark", 
     LaTeX -> "d_L"}}, 

{FuL,{ 
     Description -> "Left Up-Quark", 
     LaTeX -> "u_L"}}, 

{FeL,{ 
     Description -> "Left Electron", 
     LaTeX -> "e_L"}}, 

{FvL,{ 
     Description -> "Left Neutrino", 
     LaTeX -> "\\nu_L"}}, 

{FXd0,{ 
     LaTeX -> "{Xd}^0"}}, 

{FXdm,{ 
     LaTeX -> "Xdm"}}, 

{FXu0,{ 
     LaTeX -> "{Xu}^0"}}, 

{FXup,{ 
     LaTeX -> "Xup"}}, 

{FdR,{ 
     LaTeX -> "conjfdr"}}, 

{FuR,{ 
     LaTeX -> "conjfur"}}, 

{FeR,{ 
     LaTeX -> "conjfer"}}, 

{FsR,{ 
     Description -> "Weyl Spinor of Singlino", 
     LaTeX -> "\\tilde{S}"}}, 

{FHd0,{ 
     Description -> "Neutral Down-Higgsino", 
     LaTeX -> "\\tilde{H}_d^0"}}, 

{FHdm,{ 
     Description -> "Charged Down-Higgsino", 
     LaTeX -> "\\tilde{H}_d^-"}}, 

{FHu0,{ 
     Description -> "Neutral Up-Higgsino", 
     LaTeX -> "\\tilde{H}_u^0"}}, 

{FHup,{ 
     Description -> "Charged Up-Higgsino", 
     LaTeX -> "\\tilde{H}_u^+"}}, 

{FH1I0,{ 
     Description -> "Neutral Inert-down-Higgsino", 
     LaTeX -> "\\tilde{h}^{0,Inert}_{d}"}}, 

{FH1Im,{ 
     Description -> "Charged Inert-down-Higgsino", 
     LaTeX -> "\\tilde{h}^{-,Inert}_{d}"}}, 

{FH2I0,{ 
     Description -> "Neutral Inert-up-Higgsino", 
     LaTeX -> "\\tilde{h}^{0,Inert}_{u}"}}, 

{FH2Ip,{ 
     Description -> "Charged Inert-up-Higgsino", 
     LaTeX -> "\\tilde{h}^{+,Inert}_{u}"}}, 

{FDxL,{ 
     LaTeX -> "{Dx}_L"}}, 

{FDxbarR,{ 
     LaTeX -> "\\bar{{Dx}_R}"}}, 

{FsP,{ 
     LaTeX -> "sP"}}, 

{FPhi,{ 
     LaTeX -> "\\Phi"}}, 

{FPhiB,{ 
     LaTeX -> "{\\Phi}_{B}"}}, 

{fWm,{ 
     Description -> "Negative Wino", 
     LaTeX -> "\\tilde{W}^-"}}, 

{fWp,{ 
     Description -> "Positive Wino", 
     LaTeX -> "\\tilde{W}^+"}}, 

{fW0,{ 
     Description -> "Neutral Wino", 
     LaTeX -> "\\tilde{W}^0"}}, 

{FDL,{ 
     Description -> "Rotated Left Up-Quark", 
     LaTeX -> "D_L"}}, 

{FDR,{ 
     Description -> "Rotated Right Up-Quark", 
     LaTeX -> "D_R"}}, 

{FUL,{ 
     Description -> "Rotated Left Down-Quark", 
     LaTeX -> "U_L"}}, 

{FUR,{ 
     Description -> "Rotated Right Down-Quark", 
     LaTeX -> "U_R"}}, 

{L0,{ 
     Description -> "Neutralino Weyl-Spinor", 
     LaTeX -> "\\lambda^0"}}, 

{Lm,{ 
     Description -> "Negative Chargino Weyl-Spinor", 
     LaTeX -> "\\lambda^-"}}, 

{Lp,{ 
     Description -> "Positive Chargino Weyl-Spinor", 
     LaTeX -> "\\lambda^+"}}, 

{FEL,{ 
     Description -> "Rotated Left Electron", 
     LaTeX -> "E_L"}}, 

{FER,{ 
     Description -> "Rotated Right Electron", 
     LaTeX -> "E_R"}}, 

{FPvL,{ 
     LaTeX -> "{Pv}_L"}}, 

{FPvR,{ 
     LaTeX -> "{Pv}_R"}}, 

{FDXL,{ 
     LaTeX -> "{DX}_L"}}, 

{FDXR,{ 
     LaTeX -> "{DX}_R"}}, 

{sigmad,{ 
     Description -> "Pseudo Scalar Down", 
     LaTeX -> "\\sigma_{d}"}}, 

{phid,{ 
     Description -> "Scalar Down", 
     LaTeX -> "\\phi_{d}"}}, 

{sigmau,{ 
     Description -> "Pseudo Scalar Up", 
     LaTeX -> "\\sigma_{u}"}}, 

{phiu,{ 
     Description -> "Scalar Up", 
     LaTeX -> "\\phi_{u}"}}, 

{sigmaS,{ 
     Description -> "Scalar Singlet", 
     LaTeX -> "\\sigma_s"}}, 

{phiS,{ 
     Description -> "Pseudo Scalar Singlet", 
     LaTeX -> "\\phi_s"}}, 

{q,{ 
     Description -> "Left Quark Superfield", 
     LaTeX -> "\\hat{q}"}}, 

{l,{ 
     Description -> "left Lepton Superfield", 
     LaTeX -> "\\hat{l}"}}, 

{Xd,{ 
     LaTeX -> "\\hat{Xd}"}}, 

{Xu,{ 
     LaTeX -> "\\hat{Xu}"}}, 

{d,{ 
     Description -> "Right Down-Quark Superfield", 
     LaTeX -> "\\hat{d}"}}, 

{u,{ 
     Description -> "Right Up-Quark Superfield", 
     LaTeX -> "\\hat{u}"}}, 

{e,{ 
     Description -> "Right Electron Superfield", 
     LaTeX -> "\\hat{e}"}}, 

{s,{ 
     Description -> "Singlet Superfield", 
     LaTeX -> "\\hat{s}"}}, 

{Hd,{ 
     Description -> "Down-Higgs Superfield", 
     LaTeX -> "\\hat{H}_d"}}, 

{Hu,{ 
     Description -> "Up-Higgs Superfield", 
     LaTeX -> "\\hat{H}_u"}}, 

{H1I,{ 
     Description -> "Inert-Down-Higgs Superfield", 
     LaTeX -> "\\hat{H}^{Inert}_{1}"}}, 

{H2I,{ 
     LaTeX -> "\\hat{H2I}"}}, 

{Dx,{ 
     LaTeX -> "\\hat{Dx}"}}, 

{Dxbar,{ 
     LaTeX -> "\\hat{\\bar{Dx}}"}}, 

{sp,{ 
     LaTeX -> "\\hat{sp}"}}, 

{phi,{ 
     LaTeX -> "\\hat{\\phi}"}}, 

{phib,{ 
     LaTeX -> "\\hat{{\\phi}_{b}}"}}, 

{B,{ 
     Description -> "B Superfield", 
     LaTeX -> "\\hat{B}"}}, 

{WB,{ 
     Description -> "W Superfield", 
     LaTeX -> "\\hat{W}"}}, 

{G,{ 
     Description -> "Gluon Superfield", 
     LaTeX -> "\\hat{g}"}}, 

{Bp,{ 
     Description -> "U(1)' gauge Superfield", 
     LaTeX -> "\\hat{Bp}"}}, 

{Fq,{ 
     Description -> "Left Quarks", 
     LaTeX -> "q"}}, 

{Fl,{ 
     Description -> "Left Leptons", 
     LaTeX -> "l"}}, 

{FXd,{ 
     LaTeX -> "Xd"}}, 

{FXu,{ 
     LaTeX -> "Xu"}}, 



{FsR,{ 
     Description -> "Weyl Spinor of Singlino", 
     LaTeX -> "\\tilde{S}"}}, 

{FHd,{ 
     Description -> "Down-Higgsino", 
     LaTeX -> "\\tilde{H}_d"}}, 

{FHu,{ 
     Description -> "Up-Higgsino", 
     LaTeX -> "\\tilde{H}_u"}}, 

{FH1I,{ 
     LaTeX -> "H1I"}}, 

{FH2I,{ 
     LaTeX -> "H2I"}}, 

{FDxL,{ 
     LaTeX -> "{Dx}_L"}}, 


{FsP,{ 
     LaTeX -> "sP"}}, 

{FPhi,{ 
     LaTeX -> "\\Phi"}}, 

{FPhiB,{ 
     LaTeX -> "{\\Phi}_{B}"}}, 

{VB,{ 
     LaTeX -> "B"}}, 

{VWB,{ 
     LaTeX -> "WB"}}, 

{VG,{ 
     LaTeX -> "G"}}, 

{VBp,{ 
     LaTeX -> "Bp"}}, 

{fB,{ 
     Description -> "Bino Weyl-Spinor", 
     LaTeX -> "\\lambda_{\\tilde{B}}"}}, 

{fWB,{ 
     Description -> "Wino Weyl-Spinor", 
     LaTeX -> "\\lambda_{\\tilde{W}}"}}, 

{fG,{ 
     Description -> "Gluino Weyl-Spinor", 
     LaTeX -> "\\lambda_{\\tilde{g}}"}}, 

{fBp,{ 
     LaTeX -> "\\lambda_Bp"}}, 

{Sq,{ 
     Description -> "Left Squark", 
     LaTeX -> "\\tilde{q}"}}, 

{Sl,{ 
     Description -> "Left Slepton", 
     LaTeX -> "\\tilde{l}"}}, 

{SXd,{ 
     LaTeX -> "\\tilde{Xd}"}}, 

{SXu,{ 
     LaTeX -> "\\tilde{Xu}"}}, 

 

{SsR,{ 
     LaTeX -> "\\tilde{{s}_R}"}}, 

{SHd,{ 
     Description -> "Down-Higgs", 
     LaTeX -> "H_d"}}, 

{SHu,{ 
     Description -> "Up-Higgs", 
     LaTeX -> "H_u"}}, 

{SH1I,{ 
     Description -> "Scalar Inert Down Higgs", 
     LaTeX -> "H^{Inert}_1"}}, 

{SH2I,{ 
     Description -> "Scalar Inert Up Higgs", 
     LaTeX -> "H^{Inert}_2"}}, 

{SDxL,{ 
     LaTeX -> "\\tilde{{Dx}_L}"}}, 



{SsP,{ 
     LaTeX -> "\\tilde{sP}"}}, 

{SPhi,{ 
     LaTeX -> "\\tilde{\\Phi}"}}, 

{SPhiB,{ 
     LaTeX -> "\\tilde{{\\Phi}_{B}}"}}, 



(*  ----------- Additional particles in the model ---------- *) 

{FsM,{ 
     LaTeX -> "sM"   (* auto generated LaTeX name *)}}, 

{FCL,{ 
     LaTeX -> "{C}_L"   (* auto generated LaTeX name *)}}, 

{FCR,{ 
     LaTeX -> "{C}_R"   (* auto generated LaTeX name *)}}, 
(*
{FPIL,{ 
     LaTeX -> "{PI}_L"   (* auto generated LaTeX name *)}}, 

{FPIR,{ 
     LaTeX -> "{PI}_R"   (* auto generated LaTeX name *)}}, 
*)
{sm,{ 
     LaTeX -> "\\hat{sm}"   (* auto generated LaTeX name *)}}, 

{FsM,{ 
     LaTeX -> "sM"   (* auto generated LaTeX name *)}}, 

{SsM,{ 
     LaTeX -> "\\tilde{sM}"   (* auto generated LaTeX name *)}} 
}; 




