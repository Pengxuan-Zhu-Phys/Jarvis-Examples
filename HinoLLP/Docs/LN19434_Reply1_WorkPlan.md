# LN19434 一审回复工作计划 / Referee Reply Round-1 Work Plan

**Paper**: *Probing compressed Higgsinos at the FASER experiment* (Su, Su, Yang, Zhu, Zhu)
**Journal ID**: LN19434 · **Referee report**: `TeX/ln19434_report_1_a.pdf` (全文已转录进 `TeX/1reply.tex` 的 `\RC` 块)
**Plan created**: 2026-07-10 · **Last updated**: 2026-07-11 (tool chain finalized, §0.1) · **Owner**: Pengxuan Zhu

---

## 中文摘要（给人看）

审稿人认可想法（FASER 2 探测长寿命中性 Higgsino）有新意，但提出 4 个问题：
**Q1** 质量劈裂 Δm⁰ ∈ [4, 30] MeV 处在精细相消区，树级近似 + 一句"圈修正只移动相消点"的定性说法不够；
**Q2** 信号区需要特殊的 M1/M2 关系，要么量化调节度（tuning），要么给出 UV 动机；
**Q3** 缺少光子（可见末态）的探测器层面处理：实验室系能谱、角分布、转换/重建效率、几何损失；
**Q4** 缺少本底讨论和统计方法，"3 事例判据"太隐含。

对策一句话：**Q1 的杀手锏论证是"reach 图以物理量 (m, Δm⁰) 为坐标，圈修正只改变 (M1,M2)→Δm⁰ 的映射位置，不改变给定 Δm⁰ 的 FASER 现象学"**；再用 SUSYHIT（树级）与 FlexibleSUSY（单圈）两代码对比 + 重整化标度变化证明映射本身稳定（质谱统一用 FlexibleSUSY 算，衰变宽度统一用 SUSYHIT/SDECAY 读入其 SLHA 输出算；SPheno 已测试并放弃，见 §0.1）。Q3 用外部 (p_χ₂, θ) MC 数据集写光子能谱程序（规格见 §4，输入只需 χ₁ 质量和衰变宽度，χ₂ 质量由 MC 样本元数据固定），证明实验室系 E_γ 被 boost 到 O(0.1–1) GeV。Q2 算 Barbieri–Giudice 度量 + 非普适 gaugino 质量文献。Q4 引 FASER 光子末态分析的实测本底（ALP 搜索）+ 明确 3 事例 = 零本底 95% CL。

**产出**：填好的 `TeX/1reply.tex` + 修订稿 `TeX/2short_draft.tex` + 3–4 张新图 + 所有引用数字的唯一来源 `Docs/reply_numbers.json`。

**执行顺序**：WP1 ∥ WP3（计算，先跑）→ WP2（复用 WP1 数据）∥ WP4（文献）→ WP5 + WP6（写作收尾）。
**当前阻塞项（需要用户提供）**：见 §2「Blocking inputs」。

---

## 0. Current state audit (verified 2026-07-10)

| File | Status |
|---|---|
| `TeX/1reply.tex` | Point-by-point reply skeleton (class `ar2rc`, `\RC` = referee, `\AR` = author reply). **All four `\AR` blocks are empty placeholders** ("Reply ONE", "Reply TWO", blank, blank). This is the file to fill (WP5). |
| `TeX/1short_draft.tex` | Submitted PRL manuscript (revtex4-2, twocolumn). Frozen as submission record — do **not** edit; revision goes to a new `TeX/2short_draft.tex` (WP6). |
| `TeX/0Reply_letter.tex` | Older article-class reply template, superseded by `1reply.tex`. Ignore. |
| `TeX/0Long_draft.tex`, `TeX/0short_draft.tex` | Historical versions. Do not touch. |
| `bin/*.yaml` | Jarvis-HEP cards for all three spectrum codes: `Grid_MSSM4D_{SUSYHIT,SPheno,FlexibleSUSY}.yaml`, `Grid_MSSM1D_{SUSYHIT,FlexibleSUSY}.yaml` (grid/line scans over M1, M2, Mu, Tb), per-code `*_Calculator_Validated_CSV.yaml` (used for the 3-code validation test, §0.1), Bridson scan cards per code. Sources vendored in `deps/program/` (SPheno 4.0.7, FlexibleSUSY 2.9.0 + SARAH + COLLIER, SUSYHIT). **SPheno cards/source are no longer used (§0.1) — reference only.** |
| `outputs/HinoLLP_MuTB@M2B2_FlexibleSUSY/` | One small FlexibleSUSY test scan (21 samples) — pipeline verified working. |
| External MC datasets | **Not in repo.** User holds (p_χ₂, θ) MC samples from Pythia8 (per-μ benchmarks). Data contract in §3. |

### 0.1 Spectrum/decay tool chain — finalized 2026-07-11

User validated all three candidate codes via the per-code `bin/*_Calculator_Validated_CSV.yaml` cards (SPheno, FlexibleSUSY, SUSYHIT all present in `bin/`). Decision:

- **SPheno is dropped** going forward — do not use its output for any number quoted in the reply or manuscript. Its cards/vendored source stay in `bin/`/`deps/program/` for reference only.
- **FlexibleSUSY 2.9.0** computes the mass spectrum (one-loop pole masses; SLHA `MASS` + `NMIX`/`UMIX`/`VMIX` blocks).
- **SUSYHIT (SDECAY module)** computes decay widths. Chaining mechanism (per user, 2026-07-11): FlexibleSUSY and SUSYHIT are both registered as Jarvis-HEP `Calculators`; FlexibleSUSY's output spectrum file is passed directly as SUSYHIT's input, and SUSYHIT has a built-in switch to run decay-only (skipping its own spectrum calculation, so the FlexibleSUSY loop-corrected masses/mixings are what feed the decay calculation). This chaining is native to Jarvis-HEP — no custom glue script needed. Γ(χ̃₂⁰→χ̃₁⁰γ) comes out via the SLHA `DECAY` block (`WN2`, already used in T1.1). Card-level wiring is the user's to set up.
- This resolves the gap T1.1 previously flagged ("FlexibleSUSY alone does not compute decays") — Γ always comes from this chain now, no Eq. (5) effective-coupling fallback needed.
- **Consequence for WP1 (T1.1/T1.2)**: the cross-code robustness argument is now a two-code tree-vs-one-loop comparison — SUSYHIT self-contained tree-level (spectrum + decay) vs. FlexibleSUSY-spectrum + SUSYHIT/SDECAY-decay one-loop chain. Updated below.
- Suggested phrasing for reply/manuscript: "The electroweakino spectrum is computed with FlexibleSUSY 2.9.0 at one-loop; the resulting SLHA output is passed to SDECAY (SUSYHIT) to obtain the neutralino decay widths, in particular Γ(χ̃₂⁰→χ̃₁⁰γ)."

Manuscript gaps mapped to referee questions (anchors in `1short_draft.tex`, quote-anchored because line numbers will drift):

- **Q1 anchor**: the single paragraph `"Loop corrections to electroweakino mass matrices primarily shift the mass matrix entries..."` (currently ~line 222). This is exactly the sentence the referee quotes back as inadequate. Replace + expand.
- **Q2 anchor**: after Eq. `\ref{eq:sim}` discussion (`"A highly compressed Higgsino spectrum occurs when..."`, ~line 212) and the Conclusions sentence `"A positive signal from FASER 2 not only points to..."` (~line 351).
- **Q3 anchor**: FASER section, after the `110-distri.png` figure discussion (`"The momenta typically range from a few hundred GeV to multi-TeV."`, ~line 315). Insert photon-kinematics paragraph + new figure.
- **Q4 anchor**: the sentence `"The expected 3 event FASER 2 detection reach..."` (~line 318). Insert background + statistics paragraph.

---

## 1. Deliverables

| ID | Deliverable | Path |
|---|---|---|
| D1 | Filled reply letter | `TeX/1reply.tex` (fill the four `\AR` blocks + summary `\AR`) |
| D2 | Revised manuscript with marked changes | `TeX/2short_draft.tex` (+ optional supplemental material section) |
| D3 | New figures | `TeX/FigR1_dm_loops.png` (WP1), `TeX/FigR2_scale_band.png` (WP1, optional), `TeX/FigR3_Egamma.png` (WP3), `TeX/FigR4_tuning.png` (WP2, optional) |
| D4 | Single source of truth for every number quoted in reply/manuscript | `Docs/reply_numbers.json` (schema in §5.0) |
| D5 | Photon spectrum tool | `scripts/photon_spectrum.py` (spec in §4; to be implemented by coding agent) |

---

## 2. Work packages

Legend — **Owner**: `[agent]` = coding agent can execute end-to-end; `[physicist]` = requires user judgment; `[mixed]` = agent drafts, user approves.
**Blocking inputs from user** (nothing else blocks start of WP1/WP2/WP4):
- (B1) External MC files (p_χ₂, θ) + metadata: μ value / m_χ₂ per file, weight column meaning & units, generator settings. → blocks WP3 runs (not WP3 tool implementation).
- (B2) The reach-pipeline scripts that produced `exp_constrain.png` / `M1M2_ctau.png` (they live outside this repo), or the decision to instead apply WP3 efficiency factors ε_γ(E_th) multiplicatively to existing curves. → blocks T3.4 only.
- (B3) Choice of benchmark points for figures (suggested defaults given in T1.1/T3.2 — confirm or replace).

---

### WP1 — Spectrum robustness at loop level (answers Q1)

**核心论证 / Key argument (write this first, it defuses half the objection):**
The FASER 2 reach is presented in the *physical* plane (m_χ, Δm⁰) [Fig. 2 left of draft] and depends only on (m_χ, Δm⁰, Γ). Loop corrections modify the *map* from Lagrangian parameters (M1, M2, μ, tanβ) to Δm⁰ — i.e. *where* in (M1, M2) the cancellation valley sits — but not the phenomenology of a given Δm⁰. The reach claim therefore does not rest on the precision of any perturbative expansion; what must be demonstrated is that (i) the map remains well defined and numerically stable at loop level, and (ii) the [4, 30] MeV window remains *reachable* over a viable parameter region. That is what the tasks below establish quantitatively.

#### T1.1 Tree-vs-one-loop Δm⁰(M1) comparison `[agent]`
- **Goal**: reproduce draft Fig. 1 (left) dip structure comparing two loop orders: SUSYHIT (tree-level, self-contained spectrum + SDECAY decay) vs. FlexibleSUSY 2.9.0 (one-loop pole masses) chained into SUSYHIT/SDECAY for decay widths. **SPheno is excluded** (tested and dropped, §0.1) — do not use it for any number here.
- **Inputs**: existing cards `bin/Grid_MSSM4D_{SUSYHIT,FlexibleSUSY}.yaml` (`Grid_MSSM4D_SPheno.yaml` kept for reference only, not run); vendored sources in `deps/program/`.
- **Steps**:
  1. Copy each grid card to a new card `bin/<CODE>_Line_M1scan_mu100.yaml`; change sampling to a 1-D fine scan: fixed μ = 100 GeV, tanβ = 2, M2 = −2000 GeV, M1 ∈ [500, 800] GeV with ≥ 600 points (log-dense near the dip; a second pass may zoom). Keep a second variant tanβ = 50, and a third with M2 = +2000 GeV / M1 < 0 (sign-flipped case as in draft Fig. 1).
  2. Decay widths: SUSYHIT produces `WN2` directly (self-contained tree-level run). For the FlexibleSUSY line, chain the two codes per benchmark point per §0.1 — both are Jarvis-HEP `Calculators`; feed FlexibleSUSY's output spectrum into SUSYHIT running decay-only, then read `WN2` from the resulting SLHA `DECAY` block. No fallback formula is needed anymore.
  3. Run: `Jarvis bin/<card>.yaml --skip-draw-flowchart`. Collect `outputs/<scan>/DATABASE/samples.*.csv`. For the FlexibleSUSY line, additionally batch-run the SDECAY chain step (2) over each row's SLHA output.
  4. Post-process into one tidy CSV `outputs/wp1/dm0_vs_M1_<code>_<variant>.csv` with columns `M1,M2,Mu,Tb,mN1,mN2,dm0_MeV,dmC_MeV,WN2`. Note `dm0_MeV = (|mN2| - |mN1|) * 1000` (SLHA masses can be negative; use absolute values).
- **Outputs**: the CSVs + `TeX/FigR1_dm_loops.png`: Δm⁰ vs M1, one curve per code (SUSYHIT tree vs. FlexibleSUSY one-loop), log-y, horizontal band marking [4, 30] MeV, inset zoom on the dip.
- **Done when**: both codes produce a dip; figure shows the [4,30] MeV band is crossed by both curves; the dip-location difference is measurable from the CSVs; `WN2` is populated for every row via the chain in step 2.

#### T1.2 Renormalization-scale / prescription variation `[agent]`
- **Goal**: quantify scheme/scale uncertainty of Δm⁰ in the cancellation region.
- **Steps**:
  1. FlexibleSUSY: rerun the T1.1 line scan with the renormalization/pole-mass scale forced to Q = m_Z/2, m_Z, 2 m_Z, and Q = μ, 2μ via its SLHA `FlexibleSUSY` block scale entry (entry 17 = pole-mass scale, entry 16/others control loop order — verify against FlexibleSUSY 2.9.0 docs in `deps/program/FlexibleSUSY`); rerun the SDECAY chain (T1.1 step 2) at each scale point so `WN2` tracks the scale variation too.
  2. For each M1 point compute the envelope max−min of Δm⁰ across scales → column `dm0_scale_band_MeV`.
- **Outputs**: `outputs/wp1/scale_band.csv`; optional `TeX/FigR2_scale_band.png` (band around the FlexibleSUSY curve). Numbers → `reply_numbers.json: wp1.scale_band_med_MeV`, `wp1.scale_band_max_MeV` (evaluated inside the [4,30] MeV window).
- **Done when**: band size in MeV is tabulated inside the signal window; statement "residual scale variation ≤ X MeV" is backed by the CSV.

#### T1.3 Cancellation-locus shift + numerical stability numbers `[agent]`
- **Goal**: the three headline numbers for the reply text.
- **Steps** (post-processing of T1.1/T1.2 CSVs, pure Python):
  1. For each code/variant find M1* = argmin Δm⁰ → report relative shift `(M1*_loop − M1*_tree)/M1*_tree` in % → `wp1.locus_shift_pct`.
  2. Width of the M1 interval where Δm⁰ ∈ [4, 30] MeV, per code → shows window *persists*; report min/max across codes → `wp1.window_width_GeV_by_code`.
  3. Code-to-code spread of Δm⁰ at the same (M1, M2, μ, tanβ) inside the window → `wp1.code_spread_MeV`.
  4. Numerical-precision sanity: double precision on ~100 GeV eigenvalues resolves ~10⁻⁵ relative splittings (MeV) with ~10⁻¹⁶ machine epsilon headroom; verify empirically by re-running 10 identical points and confirming bit-level reproducibility, and by checking solver convergence tolerances in the two codes. One short paragraph → `wp1.solver_precision_note`.
  5. Higher-order estimate: use the scale-variation envelope (T1.2) as the standard proxy for missing two-loop effects; translate the max band into a lifetime uncertainty via Γ ∝ (Δm⁰)³ ⇒ δΓ/Γ = 3 δΔm/Δm, and show the FASER band (Γ spans two orders of magnitude, 4.7×10⁻¹⁹–1.2×10⁻¹⁷ GeV) absorbs it → `wp1.width_uncert_factor`.
- **Done when**: `reply_numbers.json` block `wp1` fully populated; every number reproducible from a CSV in `outputs/wp1/`.

#### T1.4 Manuscript & reply text for Q1 `[mixed]`
- Replace the Q1 anchor paragraph in `2short_draft.tex` with ~1 paragraph + point to new Fig. R1 (main text or Supplemental Material — PRL length decides; default: FigR1 in main text replacing nothing, details in Supplemental). Draft reply text: §5.1.

---

### WP2 — Tuning quantification + UV motivation (answers Q2)

#### T2.1 Fine-tuning measure `[agent]`
- **Goal**: Barbieri–Giudice-style sensitivity Δ_BG = max_i |∂ ln Δm⁰ / ∂ ln p_i|, p_i ∈ {M1, M2, μ, tanβ}, evaluated on the FASER-sensitive region.
- **Steps**:
  1. Reuse T1.1 grids; add small cross-grids around 3 benchmark points inside the window (±1% steps in each parameter, SPheno) → central finite differences.
  2. Complementary, more transparent number: the fractional width of the M1/M2 interval that yields Δm⁰ ∈ [4, 30] MeV at fixed μ, tanβ (from T1.3 step 2) — e.g. "the ratio must sit within Y% of the cancellation value", Y ~ O(1–10)%. → `wp2.ratio_window_pct`.
  3. Contextualize: compare with the analogous number for other benchmark LLP scenarios cited in the draft (e.g. chargino cτ tuning, or Higgs-portal LLP coupling windows). `[physicist]` picks the comparison.
- **Outputs**: `outputs/wp2/tuning.csv`, `reply_numbers.json: wp2.*`, optional `TeX/FigR4_tuning.png` (heat map of Δ_BG over (M1/M2, tanβ)).
- **Done when**: Δ_BG quoted with parameter ranges; reply can say "tuning Δ ~ N, comparable to ...".

#### T2.2 UV motivation for M1/M2 ≈ −tan²θ_W `[mixed]`
- **Goal**: cite concrete SUSY-breaking schemes producing non-universal gaugino masses with negative relative sign, so the relation is a *target*, not an accident. Note −tan²θ_W ≈ −0.30, i.e. M2/M1 ≈ −3.3 (tree); the loop-shifted value from T1.3 goes in the text.
- **Steps** `[agent drafts, physicist approves]`:
  1. Literature search (INSPIRE/arXiv): non-universal gaugino masses from GUT-breaking F-term representations (SU(5): **24**, **75**, **200** and mixtures give fixed M1:M2:M3 ratios of either sign); mirage/moduli-anomaly mixed mediation (continuously tunable ratios); general gauge mediation. Candidate starting points to verify: Anderson–Castaño-type analyses, Choi–Nilles "gaugino masses" review, Martin's non-universal gaugino mass papers. **Verify every citation against INSPIRE before adding to `ref_type1.bib`** — do not trust remembered arXiv numbers.
  2. Check whether some pure representation or simple mixture lands near M1/M2 ≈ −0.3; if a two-representation mixture does, one sentence of algebra in the reply is a strong touch.
  3. Add the "inverse" argument (already half-present in draft Conclusions): a FASER 2 signal *measures* the ratio incl. sign → direct probe of the SUSY-breaking mediation pattern.
- **Done when**: 3–6 verified references + one drafted paragraph (§5.2 skeleton filled).

---

### WP3 — Photon observability (answers Q3) — **the E_γ spectrum tool**

物理要点：静止系光子能量 E* ≈ Δm⁰ 只有 4–30 MeV，但进入 FASER 2 接受度的 χ₂⁰ 必然是高 boost 的（存活到 620 m 要求 λ = βγcτ ≳ 百米量级，γ 典型 3–50）。实验室系 E_γ = γE*(1 + β cosθ*)，逐事例是 [γE*(1−β), γE*(1+β)] 上的平箱谱 → 接受度加权后的谱峰在 O(0.1–1) GeV。这正是回复审稿人的定量武器。**结论性数字必须由 MC 加权谱给出，不能只给公式。**

#### T3.1 Implement `scripts/photon_spectrum.py` `[agent]` — full spec in §4
- **Done when**: `python3 scripts/photon_spectrum.py --selftest` prints all PASS and exits 0 (selftest requirements in §4.5; no external data needed).

#### T3.2 Production runs per benchmark `[agent, blocked by B1]`
- **Inputs**: user MC files (§3 contract) + per-file m_χ₂; physics inputs per run: m_χ₁ (or Δm) and Γ.
- **Benchmark matrix (default, confirm under B3)**: μ ∈ {100, 110, 125} GeV × Δm⁰ ∈ {5, 15, 30} MeV, with Γ for each (μ, Δm⁰) point taken from the FlexibleSUSY→SUSYHIT/SDECAY chain (§0.1, T1.1) at the matching (M1, M2, μ, tanβ); fall back to the illustrative grid Γ ∈ {4.7e−19, 2e−18, 1.2e−17} GeV (the FASER-covered band quoted in the draft) only if the corresponding WP1 point is unavailable.
- **Command pattern**:
  `python3 scripts/photon_spectrum.py --mc <file> --mchi2 <m2> --dm-mev <dm> --width <G> --detector faser2 --out outputs/wp3/mu<m2>_dm<dm>_G<G> --tex-prefix <name>`
- **Outputs**: per-run `summary.json` + `spectrum.csv`; combined `TeX/FigR3_Egamma.png` — overlay of E_γ spectra for 3 representative runs, vertical lines at candidate thresholds {0.1, 0.3, 1} GeV, second panel or table with the fraction above threshold.
- **Done when**: `reply_numbers.json: wp3.*` filled (median E_γ, 16–84% range, ε_γ geometric, frac > 100 MeV / > 1 GeV per benchmark).

#### T3.3 Photon-performance citations `[mixed]`
- Collect and verify FASER/FASER 2 photon capability references: FASER calorimeter + preshower design (high-precision preshower TDR), the FASER ALP→γγ search (photon-only final state, demonstrates trigger + reconstruction of EM showers and quantifies backgrounds), Forward Physics Facility / FASER 2 detector documents. `[agent]` searches + drafts; `[physicist]` confirms which efficiency/threshold numbers are defensible for FASER 2 (the honest position: FASER 2 calorimetry for E_γ ≳ 0.1–1 GeV photons; quote reach vs. threshold rather than a single efficiency).
- **Done when**: verified BibTeX entries added to `TeX/ref_type1.bib`; threshold assumptions written down.

#### T3.4 Threshold-folded reach `[agent, blocked by B2]`
- **Goal**: show the headline reach survives realistic photon thresholds.
- **Steps**: multiply the event yield in the user's reach pipeline by ε(E_th) = (fraction of contained photons above E_th, from T3.2 as a function of (μ, Δm, Γ)); regenerate the FASER 2 curves of draft Fig. 2 left for E_th ∈ {0.1, 1} GeV. If the pipeline is unavailable, deliver ε tables + instructions so the user can apply them.
- **Done when**: revised reach curves exist, or ε tables delivered; the reply quotes the reach shift ("the μ reach changes by < Z GeV for E_th = 1 GeV") → `wp3.reach_shift_GeV`.

---

### WP4 — Backgrounds & statistics (answers Q4)

#### T4.1 Background paragraph with anchored numbers `[mixed]`
- **Content plan** (agent drafts with verified citations, physicist signs off):
  1. **Neutrino-induced**: ν interactions in the decay-volume *air* are rare (the large FASERν rates are in the tungsten target); the relevant photon-like background was quantified by FASER's own ALP→γγ analysis — cite their measured/estimated background (O(0.4) events class, verify exact number) and note FASER 2 will add veto + timing + preshower discrimination.
  2. **Muon-induced** (bremsstrahlung photons, secondaries): suppressed by front veto layers with measured inefficiency < 10⁻⁴-ish (verify from FASER dark-photon search, which achieved a background-free A′→e⁺e⁻ analysis); ~100 m of rock removes hadronic debris.
  3. **Cosmic / beam-halo**: directionality + timing.
  4. Honest scope statement: a full FASER 2 background simulation is beyond a phenomenology letter; the signature (single EM shower pointing back to the IP, no charged track, no veto activity) matches the classes FASER has already shown to be near-background-free.
- **Done when**: paragraph drafted with ≥ 3 verified experimental citations; numbers in `reply_numbers.json: wp4.*`.

#### T4.2 Statistics statement `[agent]`
- Make the criterion explicit: 3 signal events = 95% CL exclusion for a zero-background Poisson counting experiment (P(0|3) = e⁻³ ≈ 5%). Add robustness: if b = 1 instead, the 95% CL yield is ≈ 4.7 events (Feldman–Cousins mean upper limit — verify the exact FC number or use the simpler CLs-style statement); recompute the μ reach shift under N = 5 from the existing yield curves → show it is a few GeV → `wp4.reach_shift_N5_GeV`. Requires the yield-vs-μ data from the reach pipeline (B2) or a scaling estimate from the draft's Γ window.
- **Done when**: one crisp paragraph + one number.

---

### WP5 — Assemble the reply letter `[mixed]`

1. Fill the four `\AR` blocks in `TeX/1reply.tex` using §5 skeletons with `<<NUM:...>>` placeholders replaced from `Docs/reply_numbers.json`. Tone: appreciative, precise, no defensiveness; each reply = (a) restate the point charitably, (b) what we did, (c) what changed in the manuscript (quote new text/figure numbers), (d) the number(s) that settle it.
2. Add a final summary `\AR` after the referee's Summary block.
3. Every quoted number MUST match `reply_numbers.json` (agent runs a consistency grep before building).
4. Build check: `cd TeX && pdflatex 1reply && bibtex 1reply && pdflatex 1reply && pdflatex 1reply` — zero errors, references resolved.

### WP6 — Revised manuscript `[mixed]`

1. `cp TeX/1short_draft.tex TeX/2short_draft.tex`; edit only `2short_draft.tex`.
2. Insertions at the four anchors (§0), marked for the referee: wrap new text in a `\add{}`-style green macro (define `\newcommand{\add}[1]{\textcolor{green2}{#1}}` locally; a clean unmarked copy is produced later by stripping the macro).
3. New figures FigR1 (+FigR3) into main text or a new Supplemental Material section — decision `[physicist]` (PRL length budget; default: one new figure in main text, the rest supplemental).
4. Update abstract/conclusions only if numbers moved (e.g. reach after threshold folding).
5. Build both marked and clean PDFs; verify page count vs PRL limit.
6. Final cross-check `[agent]`: numbers in `2short_draft.tex` == `1reply.tex` == `reply_numbers.json`.

---

## 3. External MC data contract (Blocking input B1)

One CSV per production benchmark, header row required:

| column | unit | required | meaning |
|---|---|---|---|
| `p` | GeV | yes | total momentum of χ₂⁰ at the IP |
| `theta` | rad | yes | polar angle w.r.t. beam axis, θ ∈ [0, π] (forward hemisphere used; backward rows get zero acceptance automatically) |
| `weight` | fb | recommended | differential cross section carried by the row (so Σweight = σ_total × sample coverage). If absent, spectra are shape-only and yields are not computed. |

Per-file metadata (a sidecar `<file>.meta.json` or a table in the run notes): m_χ₂ used in generation [GeV], generator + settings (Pythia8.3, pT̂ < 50 GeV cut as in the draft), number of events, which production channels are included, whether both hemispheres are present.
Different column names/units are acceptable — the tool takes `--p-col/--theta-col/--weight-col/--theta-unit {rad,mrad,deg}`.
Suggested drop location: `data/mc/` (e.g. `data/mc/chi2_mu110.csv`).

---

## 4. Spec: `scripts/photon_spectrum.py` (for the coding agent)

**Purpose**: lab-frame photon observables for χ₂⁰ → χ₁⁰ γ decays inside FASER/FASER 2, driven by the external (p, θ) MC. Pure Python, `numpy` core, `matplotlib` optional (skip plots gracefully if missing). Single file, CLI, deterministic via `--seed`.

### 4.1 Inputs
- `--mc FILE` (CSV per §3), `--mchi2 M2` [GeV] (from MC metadata).
- Physics per run: `--mchi1 M1` [GeV] **or** `--dm-mev DM` (mutually exclusive), `--width G` [GeV], `--br B` (default 1.0).
- Detector: `--detector {faser,faser2}` presets `faser: L=480, D=1.5, R=0.1 m, lumi=150 fb⁻¹`; `faser2: L=620, D=10, R=1 m, lumi=3000 fb⁻¹`; overridable `--L --D --R --lumi-fb`.
- `--thresholds` list [GeV], default `0.1 0.3 1 3 10`; `--nsamples K` decays per MC event (default 16); `--seed` (default 42); `--out DIR`; `--tex-prefix NAME` (optional LaTeX macros).

### 4.2 Physics (exact formulas to implement)
1. Constants: ħc = 1.973269804×10⁻¹⁶ GeV·m; cτ [m] = ħc / Γ[GeV].
2. Per event: E = √(p² + m₂²), γ = E/m₂, β = p/E, λ = (p/m₂)·cτ.
3. Rest-frame photon energy (exact two-body): E* = (m₂² − m₁²)/(2 m₂).
4. Geometry: straight line from IP at angle θ. Chord inside the cylinder {L < z < L+D, r < R}: entry z_in = L; exit z_out = min(L+D, R·cosθ/sinθ) (the second term = side-wall exit; θ→0 ⇒ ∞). Event contributes only if cosθ > 0 and z_out > z_in. Path lengths s = z/cosθ.
5. In-volume decay probability, numerically stable form:
   `P_dec = exp(−s_in/λ) · (−expm1(−(s_out−s_in)/λ))`.
   (This is the exact version of draft Eq. (8); the draft's `D/λ·e^{−L/λ}` is its λ≫D limit — mention in reply.)
   Drop events with P_dec < 10⁻¹⁵.
6. Vertex sampling (K per event), inverse CDF of truncated exponential, stable form:
   `s_dec = s_in − λ·log1p(u·expm1(−(s_out−s_in)/λ))`, u ~ U(0,1).
7. Decay isotropic in χ₂⁰ rest frame (unpolarized assumption — put one caveat sentence in the reply): cosθ* ~ U(−1,1), φ* ~ U(0,2π).
8. Boost along the χ₂ flight direction n̂ (parent azimuth φ ~ U(0,2π) since MC has only θ; use polar/azimuthal unit vectors ê_θ, ê_φ as the transverse basis — no singularity at θ=0):
   - E_γ = γE*(1 + β cosθ*) — per event a flat box on [γE*(1−β), γE*(1+β)].
   - photon momentum: p_∥ = γE*(β + cosθ*) along n̂; p_⊥ = E* sinθ* in the (ê_θ, ê_φ) plane.
9. Containment: decay point x⃗ = s_dec·n̂; propagate photon direction to plane z = L+D; require forward (dir_z > 0) and radial position r_cal < R. Report ε_γ = Σw(contained)/Σw(decayed).
10. Per-sample weight: w_row · P_dec · BR / K [fb].

### 4.3 Outputs (all into `--out` dir)
- `spectrum.csv`: log-spaced E_γ histogram of contained photons: `bin_lo_gev, bin_hi_gev, sigma_fb, dsigma_dE_fb_per_gev`.
- `summary.json`: full args + params echo; σ(decay in volume) [fb], σ(photon contained) [fb], N at lumi for both; ε_γ; weighted E_γ quantiles (5/16/50/84/95%) and mean; threshold table {E_th: frac_above, sigma_fb, N_at_lumi}; counts of MC events kept / decay samples.
- `spectrum.png/.pdf`: log-log spectrum, threshold vlines, parameter title.
- `macros.tex` (only with `--tex-prefix`): `\newcommand{\<prefix>EgMedianGeV}{...}` etc.
- stdout: one `[result]` line per headline number (agent-parsable).

### 4.4 Implementation constraints
- Vectorized numpy throughout; process in chunks of ≤ 50k events × K samples to bound memory; accumulate accepted samples only (acceptance is tiny, memory is trivial).
- Handle: θ given in [0,π] incl. backward rows (auto-zero); p or weight non-finite → drop with count; weight column absent → unit weights + all absolute yields reported as `null`.
- No pandas dependency required (fallback `np.genfromtxt(names=True)`), pandas used if available.

### 4.5 `--selftest` (must run with zero external data, exit 1 on any failure)
- T1: E* exactness vs Δm(1 − Δm/2m₂) for m₂ = 110 GeV, Δm = 15 MeV.
- T2: single event (p = 1000 GeV, θ = 0.3 mrad, K = 2×10⁵): (a) spectrum support = [γE*(1−β), γE*(1+β)] within 1%; (b) mean = γE* within 0.5%; (c) flat: 20-bin relative spread < 5%.
- T3: mean sampled vertex matches truncated-exp conditional mean `s_in + λ − Δs/expm1(Δs/λ)` within 5 MC sigma.
- T4: synthetic end-to-end (p ~ lognormal(ln 800, 0.6), θ ~ |N(0, 0.8 mrad)|, 2×10⁴ events, Γ = 2×10⁻¹⁸ GeV): pipeline runs; ε_γ ∈ (0.3, 1]; median E_γ ∈ (0.01, 5) GeV; outputs written.

### 4.6 Expected physics ballpark (agent sanity check, not assertions)
For μ = 110 GeV, Γ ~ 10⁻¹⁸ GeV (cτ ≈ 200 m): accepted events have γ ~ 3–50 (acceptance-biased upward by e^{−L/λ}); E_γ median ~ O(0.1–1) GeV for Δm = 15 MeV; ε_γ close to 1 (photon collinear within ~1/γ; only the rare backward-θ* soft photons and edge trajectories fail).

---

## 5. Reply text skeletons (WP5) — fill `<<NUM:key>>` from `Docs/reply_numbers.json`

### 5.0 `reply_numbers.json` schema (create with `null`s at project start)
```json
{
  "wp1": {"locus_shift_pct": null, "window_width_GeV_by_code": null,
           "code_spread_MeV": null, "scale_band_med_MeV": null,
           "scale_band_max_MeV": null, "width_uncert_factor": null},
  "wp2": {"delta_BG_range": null, "ratio_window_pct": null},
  "wp3": {"eg_median_MeV_by_bench": null, "eg_16_84_MeV_by_bench": null,
           "eps_gamma_geo": null, "frac_above_100MeV": null,
           "frac_above_1GeV": null, "reach_shift_GeV": null},
  "wp4": {"nu_bg_events_ref": null, "veto_ineff_ref": null, "reach_shift_N5_GeV": null}
}
```

### 5.1 Reply to Q1 (loop robustness) — key structure
1. Thank + agree the window is cancellation-driven and deserves a quantitative treatment.
2. **Physical-plane argument**: reach is a statement in (m_χ, Δm⁰, Γ); loops relocate the (M1, M2) preimage of the window, not the window's phenomenology. (One figure reference.)
3. New analysis: Δm⁰ recomputed with full one-loop SPheno and FlexibleSUSY vs tree-level SUSYHIT along the Fig.-1 scan; cancellation locus shifts by `<<NUM:wp1.locus_shift_pct>>`%; the [4,30] MeV window persists with width `<<NUM:wp1.window_width_GeV_by_code>>` in M1 for every code.
4. Stability: code-to-code spread `<<NUM:wp1.code_spread_MeV>>` MeV; scale variation band `<<NUM:wp1.scale_band_med_MeV>>` (median) / `<<NUM:wp1.scale_band_max_MeV>>` (max) MeV inside the window; solver-precision paragraph.
5. Higher orders: scale-envelope proxy → lifetime uncertainty factor `<<NUM:wp1.width_uncert_factor>>`, absorbed by the two-decade Γ band FASER 2 covers.
6. Manuscript changes: replaced the qualitative loop sentence with a quantitative paragraph + Fig. R1 (+ Supplemental).

### 5.2 Reply to Q2 (tuning/motivation)
1. Quantified: Δ_BG = `<<NUM:wp2.delta_BG_range>>` over the window; equivalently M1/M2 within `<<NUM:wp2.ratio_window_pct>>`% of the cancellation value.
2. UV: non-universal gaugino masses (GUT F-term representations / mirage mediation) naturally give O(1) negative ratios; refs added.
3. Flip the framing: FASER 2 signal ⇒ measurement of sign(M1 M2) and |M1/M2| ⇒ direct probe of the mediation pattern.

### 5.3 Reply to Q3 (photon)
1. Agree rest-frame E* is 4–30 MeV; but FASER-accepted χ₂⁰ are necessarily boosted (γ ~ 3–50, acceptance-weighted): MC-derived lab spectrum gives median E_γ = `<<NUM:wp3.eg_median_MeV_by_bench>>` with 16–84% range `<<NUM:wp3.eg_16_84_MeV_by_bench>>`.
2. Photon collinear with the parent within ~1/γ: geometric containment ε_γ = `<<NUM:wp3.eps_gamma_geo>>`.
3. Detectability anchored to FASER's demonstrated photon program (ALP→γγ search; preshower + calorimeter for FASER 2); reach quoted vs. explicit threshold: fraction above 100 MeV = `<<NUM:wp3.frac_above_100MeV>>`, above 1 GeV = `<<NUM:wp3.frac_above_1GeV>>`; reach shift `<<NUM:wp3.reach_shift_GeV>>`.
4. Manuscript changes: new Fig. R3 + kinematics paragraph + threshold-folded reach curves.

### 5.4 Reply to Q4 (backgrounds/statistics)
1. Background classes with experimental anchors (ν-induced from FASER ALP analysis `<<NUM:wp4.nu_bg_events_ref>>`; veto inefficiency `<<NUM:wp4.veto_ineff_ref>>`; rock shielding; timing).
2. Statistics made explicit: 3 events = 95% CL for b = 0 (P(0|3) = e⁻³ ≈ 5%); robustness: with b = 1 and N = 5 the μ reach shifts by `<<NUM:wp4.reach_shift_N5_GeV>>` GeV.
3. Scope statement: full detector simulation belongs to the experimental collaboration; our signature matches classes FASER has shown near-background-free.

### 5.5 Summary reply
Short, gracious; list of manuscript changes (numbered), no new claims.

---

## 6. Conventions for coding agents

1. **Never modify**: `TeX/0*.tex`, `TeX/1short_draft.tex`, `TeX/ln19434_report_1_a.pdf`, anything under `deps/`. Fill `TeX/1reply.tex`; new manuscript work only in `TeX/2short_draft.tex`.
2. **Units**: energies/masses GeV, Δm quoted in MeV where labeled, lengths m, angles rad, cross sections fb, widths GeV. Every CSV column name carries the unit suffix where ambiguity is possible (`dm0_MeV`, `sigma_fb`).
3. **Numbers discipline**: any number destined for TeX goes through `Docs/reply_numbers.json` first; scripts print `[result]` lines; a final grep-based consistency check compares TeX vs JSON.
4. **New files**: analysis scripts → `scripts/`; post-processed CSVs → `outputs/wp{1,2,3}/`; figures for the paper → `TeX/FigR*.png` (+ the generating script path in a comment inside the TeX `\caption` as `% made by scripts/...`).
5. **Scan cards**: never edit the existing `bin/*.yaml` in place — copy to a new descriptive name (`bin/FlexibleSUSY_Line_M1scan_mu100_TB2.yaml`). Run via `Jarvis <card> --skip-draw-flowchart`. Outputs land in `outputs/<Scan.name>/DATABASE/samples.*.csv`. For any FlexibleSUSY run that needs a decay width, chain into SUSYHIT running decay-only per §0.1 (both registered as Jarvis-HEP `Calculators`; parse `WN2` from the resulting `DECAY` block) — **do not** use SPheno for spectrum or decay numbers (dropped, §0.1).
6. **Reproducibility**: every script deterministic (`--seed`), every figure regenerable from a single command recorded in `Docs/reply_numbers.json` under a `provenance` key.
7. **Citations**: every new BibTeX entry verified against INSPIRE (title/authors/eprint) before insertion into `TeX/ref_type1.bib`; never invent arXiv numbers from memory.
8. **Builds**: reply letter `pdflatex 1reply && bibtex 1reply && pdflatex ×2` in `TeX/`; manuscript same for `2short_draft`. Zero LaTeX errors and zero undefined references required.

---

## 7. Execution order & dependency graph

```
WP1 (T1.1 → T1.2 → T1.3 → T1.4)  ──┐
WP3 (T3.1 → [B1] T3.2 → T3.3 → [B2] T3.4) ─┤
WP2 (T2.1 needs T1.1 grids; T2.2 independent) ─┼──→ WP5 (reply letter) → WP6 (manuscript) → final consistency + builds
WP4 (T4.1 independent; T4.2 needs B2 or estimate) ─┘
```

Suggested first three agent tasks (no user input needed):
1. T1.1 line-scan cards + runs (longest wall-clock — start first).
2. T3.1 implement + selftest `photon_spectrum.py`.
3. Create `Docs/reply_numbers.json` skeleton (§5.0) and `outputs/wp{1,2,3}/` directories.
