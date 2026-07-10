# GMFit Jarvis Project

This project stages the GM global-fit software inputs directly under `deps/`
and exposes them through Jarvis scan cards.

## Quick Start

Validate the native GMFit calculator with a small CSV point set:

```bash
Jarvis bin/GMFit_Validation_CSV.yaml
```

Run the Jarvis-driven random scan:

```bash
Jarvis bin/GMFit_Random.yaml
```

## Native IO Status

- The scan now writes one native `in.txt` file per scan point and runs the vendored
  `gmhb5.x` and `RGE.out` executables directly from Jarvis.
- The GMFit workspace is flat under `GMFit/@PackID`; no extra per-scan-point
  subdirectory is created.
- The active workflow keeps the legacy scan filenames (`gm_out.dat`,
  `rgeout.txt`, `get_high_lam.txt`, `scale_out.txt`) directly under
  `GMFit/@PackID`, so the file contract matches the old script without adopting
  `raw/<i>` sample directories.
- `gmhb5.x` now reads the scan contract from an explicit command-line JSON
  path, e.g. `./gmcalc1.5.3/gmhb5.x ./input.json`, while `RGE.out` still reads
  the matching native `in.txt` contract and writes a JSON summary plus raw text
  artifacts, so the bridge Python script is no longer part of the execution
  path.
- LoopTools, FeynHiggs, HiggsBounds, and HiggsSignals are installed once through
  `LibDeps` under `deps/library`, and the GMFit calculator build reuses that
  shared prefix instead of rebuilding them in every calculator workspace.
- The GMFit calculator install step is now a thin stage: copy the prepared
  `deps/gmcalc1.5.3J` source tree into the workspace, reuse `gmhb5.f` and
  `src/gmprint_slha.f` from that tree, and pass `LT`, `HS2`, `HB5`, and `LIB`
  directly on the `make` command line.

## Layout

- `.jarvis-project.json` / `jarvis.project.yaml`: markers that identify the standalone project root
- `bin/`: Jarvis scan cards
- `data/`: validation CSV input points
- `deps/library/`: shared `LibDeps` prefix for LoopTools, FeynHiggs, HiggsBounds, and HiggsSignals
- `deps/`: shared tarballs and source files consumed by `LibDeps` and the GMFit calculator
- `deps/gmcalc1.5.3J/`: prepared GMCalc source tree consumed by the calculator install step
- `deps/gmfit_input.in`: native input template copied into each sample directory
- `scripts/`: legacy bridge helpers are no longer used by the active workflow

Runtime directories are created automatically on first run:

- `outputs/<scan>/DATABASE`: HDF5, CSV, schema, and run metadata
- `outputs/<scan>/SAMPLE`: per-sample artifacts and sample-local logs
- `logs/<scan>/`: Jarvis / sampler / factory logs
- `images/<scan>/`: plots, generated plotting YAML, semantic flowchart JSON, and workflow flowcharts

## Path Rules

- `&J/...` resolves against the standalone project root
- Prefer `deps/` for project-local bundled defaults such as `&J/deps/environment_default.yaml`
- The legacy GMFit bundle is no longer used by the active workflow
- Shared GMCalc libraries live under `deps/library` and are reused across runs
