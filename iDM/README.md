# Jarvis-HEP — iDM examples

Vector / axial inelastic DM scans driven by micrOMEGAs (project-local `deps/`).

## Quick start (V2)

From this project root (needs `Jarvis` on `PATH` and the declared local dependencies):

```bash
# Space-filling Bridson scan (2D mDM–gchiD)
Jarvis run bin/iDM_Vector_Bridson.yaml

# AdaptiveBridson: live-band densify toward Ωh² ≈ 0.12 (MChi–Y plane)
Jarvis run bin/iDM_Vector_AdaptiveBridson_Omega.yaml

# Module smoke only (CSV points if present, else ~10 sampler draws)
Jarvis check bin/iDM_Vector_AdaptiveBridson_Omega.yaml --timeout 600
```

`Method: AdaptiveBridson` — gen-0 Bridson → best/Voronoi band → local-core densify
until `(t_max - t_min) < threshold` (see card comments).


## Layout

- `.jarvis-project.json` / `jarvis.project.yaml`: project-root markers
- `bin/`: runnable YAML entry cards
- `data/`: project input datasets
- `deps/`: project-local dependency baseline (`environment_default.yaml`)

Runtime directories are created automatically on first run:

- `outputs/<scan>/DATABASE`: HDF5, CSV, schema, run metadata
- `outputs/<scan>/SAMPLE`: per-sample artifacts and sample-local logs
- `logs/<scan>/`: Jarvis / sampler / factory logs
- `images/<scan>/`: plots, generated plotting YAML, and workflow flowcharts

Add optional project directories such as `calculators/`, `configs/`, `scripts/`,
`assets/`, and `docs/` only when your workflow actually needs them.

Path rules:
- `&J/...` resolves against project root.
- Use `deps/` for project-local bundled defaults such as `&J/deps/environment_default.yaml`.

## V2 migration notes

All task cards use the current Jarvis-HEP V2 layout. Runtime worker settings are
under `EnvReqs.V2`, sampler-specific settings are under `Sampling.Bounds`, and
calculator concurrency is declared in `Calculators.Pools`. The unused V1
`Utils.interpolations_1D` block was removed from `bin/Bridson.yaml`; current
custom interpolation workflows should use the Opera `interp1.*` interface.

For a card-level validation and smoke test:

```bash
Jarvis validate --strict --json bin/iDM_Vector_Bridson.yaml
Jarvis check bin/iDM_Vector_Bridson.yaml --timeout 600
```

The smoke test may require ROOT, the project-local micrOMEGAs build, and the
Jarvis-managed Redis broker.

The representative check run on 2026-08-14 reached Redis, worker, archiver,
and sample creation successfully, but all 10 samples failed in the external
micrOMEGAs build because the linked source tree did not provide
`CalcHEP_src/FlagsForMake` in the per-sample calculator pack. This is a local
CalcHEP/micrOMEGAs build prerequisite, not a V2 schema validation failure;
rerun the check after the base micrOMEGAs tree has been compiled successfully.
