# Electroweakino 一圈极点质量技术核查

**项目**：HinoLLP  
**核查日期**：2026-07-10  
**程序版本**：SPheno v4.0.7；FlexibleSUSY 2.9.0；SARAH 4.15.4  
**核查对象**：当前 Jarvis YAML 所读取的 SLHA `MASS` block 中 neutralino/chargino 质量是否包含一圈修正，以及相应的质量本征态和混合矩阵如何得到。

## 1. 结论

当前配置下，**SPheno 和 FlexibleSUSY 写入 `MASS` block 的 electroweakino 质量都是含完整一圈自能修正的极点质量，不是树级质量，也不是单纯的 DR-bar 运行质量。**

| 程序 | 当前状态 | 关键证据 |
|---|---|---|
| FlexibleSUSY 2.9.0 | 明确开启一圈 BSM pole masses | 输入卡 `FlexibleSUSY[4]=1` 且 `FlexibleSUSY[23]=1`；生成代码调用 `calculate_MChi_pole()` 和 `calculate_MCha_pole()`；`MASS` block 从 `physical.MChi/MCha` 写出 |
| SPheno v4.0.7 | low-energy MSSM 路径固定执行一圈谱计算 | `CalculateSpectrum()` 调用 `LoopMassesMSSM_3()`；后者无条件调用 `CharginoMass_Loop()` 和 `NeutralinoMass_Loop()`；返回的一圈质量覆盖 `mC/mN`，随后写入 `MASS` block |

这里的“含一圈修正”具体指：先用某个重整化尺度 (Q) 上的 DR-bar 参数构造树级质量矩阵，再加入动量依赖的一圈费米子自能，重新对修正后的矩阵进行对角化或奇异值分解，得到 pole masses 和对应的 pole mixing matrices。

需要同时强调：

1. “使用一圈极点质量”不等于两个程序必须给出相同数字。当前两套卡的重整化尺度已经对齐到约 5 TeV，但低能阈值处理和 Higgs-sector 输入仍未完全对齐。
2. neutralino 在 SLHA `MASS` block 中可以带负号。负号编码 Majorana 相位约定，物理质量是绝对值；计算质量劈裂时应使用 `Abs(mNi)`。
3. 当前 FlexibleSUSY 的 `force output = 1` 会在存在问题标记时仍尝试输出。它不关闭一圈修正，但扫描分析必须同时检查 `SPINFO`/运行状态，不能只检查 `MASS` block 是否存在。

## 2. 三类质量不能混淆

### 2.1 DR-bar 运行参数和树级本征值

在尺度 (Q) 上，程序先得到

$$
M_1(Q),\quad M_2(Q),\quad \mu(Q),\quad g'(Q),\quad g(Q),\quad
v_d(Q),\quad v_u(Q).
$$

neutralino 的树级质量矩阵为

$$
\mathcal M_N^{(0)}=
\begin{pmatrix}
M_1 & 0 & -g'v_d/2 & g'v_u/2\\
0 & M_2 & gv_d/2 & -gv_u/2\\
-g'v_d/2 & gv_d/2 & 0 & -\mu\\
g'v_u/2 & -gv_u/2 & -\mu & 0
\end{pmatrix},
$$

chargino 的树级质量矩阵为

$$
\mathcal M_C^{(0)}=
\begin{pmatrix}
M_2 & gv_u/\sqrt{2}\\
gv_d/\sqrt{2} & \mu
\end{pmatrix}.
$$

对这些矩阵直接对角化得到的只是由 DR-bar 参数构造的树级本征值，不是最终 pole masses。

### 2.2 一圈极点质量

对一般费米子，自能可以写成手征结构

$$
\Sigma(p)=\slashed p\,P_L\Sigma_L(p^2)
+\slashed p\,P_R\Sigma_R(p^2)
+P_L\Sigma_S(p^2)+P_R\Sigma_S^\dagger(p^2).
$$

程序用这些自能修正树级质量矩阵，再求修正后传播子的极点。两套程序的代码组织和符号略有差异，但核心结构相同：

$$
\mathcal M^{(1)}(p^2)
=\mathcal M^{(0)}
-\Sigma_S
-\Sigma_R\mathcal M^{(0)}
-\mathcal M^{(0)}\Sigma_L,
$$

Majorana neutralino 情形还要按 Majorana 对称性对矩阵作对称化。

### 2.3 SLHA `MASS` block

当前两个 YAML 都从输出文件的 `MASS` block 读取：

| 物理态              | PDG code |
| ---------------- | -------: |
| $\tilde\chi^0_1$ |  1000022 |
| $\tilde\chi^0_2$ |  1000023 |
| $\tilde\chi^0_3$ |  1000025 |
| $\tilde\chi^0_4$ |  1000035 |
| $\tilde\chi^+_1$ |  1000024 |
| $\tilde\chi^+_2$ |  1000037 |

下面的源码追踪证明这些条目来自一圈修正后的 physical spectrum。

## 3. FlexibleSUSY 的实际计算路径

### 3.1 当前输入开关

当前输入文件：

`deps/program/FlexibleSUSY/model_files/lowMSSM/LesHouches.in.lowMSSM_HinoLLP`

相关设置为：

```text
Block FlexibleSUSY
    4   1   # pole mass loop order
    5   1   # EWSB loop order
   12   1   # force output
   16   0   # do not force positive Majorana masses
   23   1   # calculate BSM pole masses
```

其中：

- `[4]=1`：pole-mass calculation 的最高圈阶是一圈；
- `[23]=1`：实际计算 BSM pole masses；
- `[5]=1`：EWSB 条件也在一圈处理，与官方文档对 `[4]`、`[5]` 同阶的建议一致；
- `[16]=0`：允许 SLHA 用带符号 neutralino mass 表达 Majorana 相位；
- `[12]=1`：只影响有问题点是否仍输出，不改变 pole-mass 圈阶。

`FlexibleSUSY[6]` 是 beta function 圈阶，`[7]` 是低能 threshold correction 圈阶，`[8]` 及后续若干项主要控制 Higgs 高阶修正；它们不能替代 `[4]` 和 `[23]`。

### 3.2 调用链

当前生成的 lowMSSM 代码按下面的路径执行：

```text
SLHA FlexibleSUSY[4], [23]
  -> lowMSSM_spectrum_generator_interface::set_settings()
  -> model.set_pole_mass_loop_order(1)
  -> model.do_calculate_bsm_pole_masses(true)
  -> lowMSSM_mass_eigenstates::calculate_spectrum()
  -> calculate_DRbar_masses()
  -> calculate_pole_masses()
  -> calculate_MChi_pole()
  -> calculate_MCha_pole()
  -> lowMSSM_slha_io::set_mass(physical)
  -> SLHA MASS block
```

可复查的核心位置：

| 作用 | 源码位置 |
|---|---|
| 把设置传给模型 | `calculators/flexiblesusy/_build/models/lowMSSM/lowMSSM_spectrum_generator_interface.hpp:96` |
| `[23]` 传给 BSM pole-mass 开关 | `calculators/flexiblesusy/_build/models/lowMSSM/lowMSSM_two_scale_spectrum_generator.cpp:69` |
| DR-bar masses 与 pole masses 分支 | `calculators/flexiblesusy/_build/models/lowMSSM/lowMSSM_mass_eigenstates.cpp:570-758` |
| neutralino 一圈 pole matrix | 同文件 `:9589-9621` |
| chargino 一圈 pole matrix | 同文件 `:9624-9655` |
| `MASS` block 写 physical masses | `calculators/flexiblesusy/_build/models/lowMSSM/lowMSSM_slha_io.cpp:298-318` |
| `NMIX/UMIX/VMIX` 写 physical mixings | 同文件 `:371-380` |

### 3.3 Neutralino

`calculate_MChi_pole()` 对每个外部 neutralino 状态取

```cpp
p = Abs(MChi(es));
self_energy_1  = Re(self_energy_Chi_1loop_1(p));
self_energy_PL = Re(self_energy_Chi_1loop_PL(p));
self_energy_PR = Re(self_energy_Chi_1loop_PR(p));
```

然后构造

```text
delta_M = -Sigma_PR M_tree - M_tree Sigma_PL - Sigma_1
M_loop  = M_tree + 1/2 (delta_M + delta_M^T)
```

并对 `M_loop` 作对称矩阵对角化。这里显式取一圈自能的实部，外部动量取相应 DR-bar/tree-level mass，得到 fixed-order one-loop pole mass。

生成的 `self_energy_Chi_1loop_*` 函数包含由 SARAH 为 lowMSSM 生成的完整一圈拓扑和耦合，并统一带有 `1/(16 pi^2)` 因子。

### 3.4 Chargino

`calculate_MCha_pole()` 使用同样的三类自能，构造

```text
delta_M = -Sigma_PR M_tree - M_tree Sigma_PL - Sigma_1
M_loop  = M_tree + delta_M
```

由于 chargino 是 Dirac 型质量矩阵，程序对 `M_loop` 作 SVD，得到正的 singular values 和左右混合矩阵 `UM`、`UP`。这些 pole quantities 被分别写到 `MASS`、`UMIX`、`VMIX`。

### 3.5 输出确实来自 pole spectrum

`calculate_spectrum()` 的逻辑是：

```text
pole_mass_loop_order > 0  -> calculate_pole_masses()
pole_mass_loop_order == 0 -> copy_DRbar_masses_to_pole_masses()
```

当前 `[4]=1`，因此不会走“把 DR-bar masses 直接复制成 physical masses”的树级分支。`lowMSSM_slha_io::set_mass()` 随后从 `physical.MChi` 和 `physical.MCha` 写出 `MASS` block。

## 4. SPheno 的实际计算路径

### 4.1 当前输入和模型分支

当前输入文件：

`deps/program/SPheno/input/LesHouches.in.lowMSSM_HinoLLP`

关键设置：

```text
Block MODSEL
 1  0       # general MSSM low-scale input
Block SPhenoInput
 2  0       # disable SPA scale; use EXTPAR[0]
11  1       # calculate branching ratios
80  1       # non-zero exit on fatal problems
```

`MODSEL[1]=0` 进入 low-energy MSSM。当前同时给定 `mu` 和 pole `mA`，最终调用 `LoopMassesMSSM_3()` 分支。

与 FlexibleSUSY 不同，这条 SPheno v4.0.7 MSSM 路径没有一个“electroweakino pole mass loop order = 0/1”的普通输入开关。完整一圈谱计算是主流程的一部分。

特别注意：

- `SPhenoInput[38]` 控制 RGE 圈阶，不控制 electroweakino pole-mass 圈阶；
- `SPhenoInput[7]` 只控制 Higgs mass 是否限制为一圈；
- `SPhenoInput[34]` 是质量计算精度；
- `SPhenoInput[70]` 与 self-energy 外部动量迭代有关，不能理解为“打开一圈修正”。

### 4.2 调用链

```text
SPheno4 main
  -> CalculateSpectrum()
  -> LoopMassesMSSM_3()
  -> CharginoMass_Loop()
  -> NeutralinoMass_Loop()
  -> mC = mC_1L; U = U_1L; V = V_1L
  -> mN = mN_1L; N = N_1L
  -> LesHouches_Out()
  -> SLHA MASS / NMIX / UMIX / VMIX
```

可复查的核心位置：

| 作用 | 源码位置 |
|---|---|
| 当前 MSSM 分支调用 `LoopMassesMSSM_3` | `deps/program/SPheno/src/SPheno4.f90:623-630` |
| chargino/neutralino 一圈子程序调用 | `deps/program/SPheno/src/LoopMasses.F90:784-823` |
| `CharginoMass_Loop` | 同文件 `:3125-3527` |
| `NeutralinoMass_Loop` | 同文件 `:4688-5126` |
| 用一圈结果覆盖后续物理谱 | 同文件 `:1006-1014` |
| `MASS` block 写出 | `deps/program/SPheno/src/InputOutput.F90:4548`、`:5080-5086` |

### 4.3 Chargino

SPheno 先构造树级矩阵 `mat2a`：

```fortran
mat2a(1,1) = M2
mat2a(1,2) = gSU2 * vu / sqrt(2)
mat2a(2,1) = gSU2 * vd / sqrt(2)
mat2a(2,2) = mu
```

对每个 chargino 状态，默认先在 (p^2=m_{C,i,\mathrm{tree}}^2) 计算 `Sigma_Chargino`，再构造

```fortran
mat2 = mat2a - SigS - SigR*mat2a - mat2a*SigL
```

程序通过 `mat2^dagger mat2` 和 `mat2 mat2^dagger` 求一圈质量及左右混合矩阵，返回 `mC1L`、`U1L`、`V1L`。

### 4.4 Neutralino

SPheno 对每个 neutralino 状态默认在 (p^2=m_{N,i,\mathrm{tree}}^2) 调用 `Sigma_Neutralino`，并构造满足 Majorana 对称性的修正矩阵：

```fortran
mat4 = mat4a - 1/2 * (
       SigS + Transpose(SigS)
     + Transpose(SigL)*mat4a + SigR*mat4a
     + mat4a*Transpose(SigR) + mat4a*SigL )
```

随后重新对角化 `mat4`，按绝对质量排序，并返回 `mN1L`、`N1L`。

### 4.5 `SPhenoInput[70]` 的重要细节

当前输入未设置 entry 70，因此 `mass_calc_iteration = .False.`。这并不关闭一圈修正；它表示自能按树级 (p^2) 评价一次，是清晰的 fixed-order one-loop 结果。

源码中 entry 70 附近的注释与实际条件存在表述冲突：代码在 entry 70 等于 1 时把 `mass_calc_iteration` 设为 true，并进一步用更新后的一圈质量重复评价自能。`LoopMasses.F90` 自身还明确警告，这种迭代会混合不同微扰阶。

因此本项目建议：

- 默认保持 entry 70 未设置，用固定阶一圈结果作为主结果；
- 只有在专门研究外部动量迭代/部分重求和效应时才设置 entry 70；
- 不要把 entry 70 当作“一圈质量开关”。

### 4.6 输出确实来自一圈结果

完成 `CharginoMass_Loop` 和 `NeutralinoMass_Loop` 后，SPheno 显式执行：

```fortran
mC = mC_1L
U  = U_1L
V  = V_1L
mN = mN_1L
N  = N_1L
```

`LesHouches_Out` 再从这些变量写出 `MASS` 以及混合矩阵。因此当前 Jarvis YAML 读取到的是一圈修正后的质量本征态。

## 5. 数值审计

### 5.1 Benchmark

本次只做机制验证，使用：

```text
M1 = 1500 GeV
M2 = -3500 GeV
mu = 130 GeV
tan(beta) = 3.5
```

FlexibleSUSY 还使用当前模板的 `BMu = 2.8e5 GeV^2`；SPheno 使用当前模板的 `mA(pole) = 1000 GeV`。因此下面两张表分别验证各程序内部的 tree/loop 差异，**不能把两张表之间的程序差异当成严格的同输入 code comparison**。

### 5.2 FlexibleSUSY：直接切换 `[4]=0/1`

两次运行均 `rc=0`。除 `[4]` 外保持输入相同。

| 状态 | tree `[4]=0` (GeV) | one-loop `[4]=1` (GeV) |
|---|---:|---:|
| \(|m_{\chi^0_1}|\) | 129.876137 | 136.188271 |
| \(|m_{\chi^0_2}|\) | 130.156572 | 136.455894 |
| \(m_{\chi^+_1}\) | 130.882219 | 137.456273 |
| \(|m_{\chi^0_2}|-|m_{\chi^0_1}|\) | 0.280435 | 0.267623 |
| \(m_{\chi^+_1}-|m_{\chi^0_1}|\) | 1.006082 | 1.268002 |

结果显示一圈修正不仅整体移动质量，也改变了压缩谱中的质量劈裂。对 LLP 研究而言，不能用共同的整体 mass shift 抵消掉这一效应。

### 5.3 SPheno：从其 DR-bar 输出重建 tree matrix

关闭 SPA convention 后，当前 SPheno 使用 `EXTPAR[0]`，输出尺度为 (Q=5.00170583\,\mathrm{TeV})。使用输出中的

```text
g'(Q) = 0.366503443
g(Q)  = 0.636256180
v(Q)  = 242.798605 GeV
M1(Q) = 1500 GeV
M2(Q) = -3500 GeV
mu(Q) = 130 GeV
tan(beta)(Q) = 3.5
```

重建第 2.1 节树级矩阵，并与 SPheno 的 `MASS` block 比较：

| 状态 | reconstructed tree (GeV) | SPheno one-loop `MASS` (GeV) |
|---|---:|---:|
| \(|m_{\chi^0_1}|\) | 129.869151 | 162.182703 |
| \(|m_{\chi^0_2}|\) | 130.151594 | 162.452359 |
| \(m_{\chi^+_1}\) | 130.838015 | 163.759251 |
| \(|m_{\chi^0_2}|-|m_{\chi^0_1}|\) | 0.282443 | 0.269656 |
| \(m_{\chi^+_1}-|m_{\chi^0_1}|\) | 0.968864 | 1.576548 |

SPheno 运行 `rc=0`，输出 `SPINFO` 标记版本 v4.0.7，没有错误条目。数值和源码链路共同确认 `MASS` block 不是树级矩阵的本征值。

## 6. 当前两程序不能直接逐点比较的原因

### 6.1 重整化尺度已经对齐

当前 SPheno 输入关闭 SPA convention，并使用 `EXTPAR[0]`：

```text
EXTPAR[0]       = 5.00170583E+03
SPhenoInput[2]  = 0   # disable SPA scale
```

实际输出显示：

```text
Block gauge Q=5.00170583E+03
```

当前 FlexibleSUSY lowMSSM model 使用基于 stop masses 的 SUSY scale，本 benchmark 输出：

```text
FlexibleSUSYOutput[1] = 5.00178853E+03 GeV
Block gauge Q=5.00178853E+03
```

因此当前 benchmark 中 SPheno 与 FlexibleSUSY 的尺度分别约为 5.00171 TeV 和 5.00179 TeV，已经在所需精度下对齐。SUSYHIT/SuSpect 现有扫描点使用约 5.00175 TeV，也处于同一尺度。需要注意，SPheno 当前取固定 `EXTPAR[0]`，而 FlexibleSUSY 和 SuSpect 使用由 stop masses 决定的动态 SUSY/EWSB scale；如果未来扫描 stop-sector 参数，应重新检查三个尺度是否仍然一致。

### 6.2 Higgs-sector 输入不完全相同

FlexibleSUSY 模板直接输入 `BMu`，SPheno 模板输入 `mA(pole)`，两者通过各自的 EWSB 和 loop treatment 转换，不能简单视为相同输入。

### 6.3 低能参数和阈值处理不同

两程序对 (g',g,v,y_t,y_b\) 等 DR-bar 参数的提取、SM-to-MSSM threshold correction 和迭代流程不同。这些运行参数进入 tree matrix 和 self-energy，都会影响最终 mass splitting。

因此，后续三代码比较至少要同时记录：

```text
program/version
Q used for running parameters and pole masses
M1(Q), M2(Q), mu(Q), tan(beta)(Q), g'(Q), g(Q), v(Q)
tree-level reconstructed masses
one-loop MASS entries
NMIX, UMIX, VMIX
SPINFO/problem flags
```

## 7. 对本项目扫描配置的判定

### 7.1 FlexibleSUSY YAML

下列文件都调用同一个已生成的 lowMSSM executable，并读取其 `MASS` block：

- `bin/FlexibleSUSY_Calculator_Validated_CSV.yaml`
- `bin/FlexibleSUSY_Grid_MSSM4D.yaml`
- `bin/Bridson_Higgsino_LLP_muTB_M2_FlexibleSUSY.yaml`

判定：**当前读到的是一圈 pole masses。**

### 7.2 SPheno YAML

下列文件都执行 SPheno v4.0.7 的 low-energy MSSM 流程，并读取 `SPheno.spc` 的 `MASS` block：

- `bin/SPheno_Calculator_Validated_CSV.yaml`
- `bin/SPheno_Grid_MSSM4D.yaml`
- `bin/Bridson_Higgsino_LLP_muTB_M2_SPheno.yaml`

判定：**当前读到的是一圈 pole masses。**

### 7.3 “保证”成立所需的运行时条件

每个点仍需满足：

1. spectrum generator 返回码为 0；
2. 输出文件来自本次运行，不是上次残留；
3. `SPINFO` 没有 fatal/error 条目；
4. 所需 PDG entries 存在且为有限数；
5. 计算质量劈裂时对 neutralino 使用绝对值；
6. 对 FlexibleSUSY 的 `force output=1` 点，不能仅凭文件存在就接受。

## 8. 可用于论文/回复的严谨表述

下面这段英文可以作为技术说明的基础，但正式使用前应补上统一尺度的三代码数值比较：

> The electroweakino masses used in our scan are loop-corrected pole masses rather than tree-level eigenvalues. In FlexibleSUSY 2.9.0 we set the pole-mass loop order to one and explicitly enable BSM pole-mass calculations. The generated lowMSSM code evaluates the full one-loop neutralino and chargino self-energies and re-diagonalizes the corrected mass matrices before writing the SLHA MASS block. In SPheno 4.0.7 the low-energy MSSM spectrum routine likewise calls the one-loop chargino and neutralino mass routines, replaces the tree-level masses and mixing matrices by the one-loop results, and then writes them to the SLHA output. We evaluate mass splittings using the absolute values of the signed Majorana masses.

当前还**不建议**直接写“FlexibleSUSY 与 SPheno 在相同输入下数值一致”。现有卡片的计算尺度和 Higgs-sector 输入不同，必须先做统一 scheme/scale 的 comparison scan。

## 9. 参考资料

1. P. Athron et al., *FlexibleSUSY -- A spectrum generator generator for supersymmetric models*, [arXiv:1406.2319](https://arxiv.org/abs/1406.2319). 论文说明生成器计算 loop-corrected pole masses，并生成 self-energies、RGEs 和 EWSB 条件。
2. P. Athron et al., *FlexibleSUSY 2.0: Extensions to investigate the phenomenology of SUSY and non-SUSY models*, [arXiv:1710.03760](https://arxiv.org/abs/1710.03760).
3. W. Porod, *SPheno, a program for calculating supersymmetric spectra, SUSY particle decays and SUSY particle production at e+e- colliders*, [doi:10.1016/S0010-4655(03)00222-4](https://doi.org/10.1016/S0010-4655(03)00222-4). 原始 SPheno 论文明确说明 SUSY masses 使用完整一圈公式，neutral Higgs 等另含高阶贡献。
4. 本项目 FlexibleSUSY 设置说明：`deps/program/FlexibleSUSY/doc/slha_input.rst`。
5. 本项目实际生成代码和 SPheno v4.0.7 源码，具体位置见第 3、4 节源码追踪表。
