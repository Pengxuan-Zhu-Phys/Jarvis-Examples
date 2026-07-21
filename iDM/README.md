# Jarvis-HEP — iDM examples

Vector / axial inelastic DM scans driven by micrOMEGAs (project-local `deps/`).

## Quick start (V2)

From this project root (needs `Jarvis2` on `PATH` and local Redis):

```bash
# Space-filling Bridson scan (2D mDM–gchiD)
Jarvis2 run bin/iDM_Vector_Bridson.yaml

# AdaptiveBridson: trace Ωh² ≈ 0.12 contour in the same plane
Jarvis2 run bin/iDM_Vector_AdaptiveBridson_Omega.yaml

# Module smoke only (CSV points if present, else ~10 sampler draws)
Jarvis2 check bin/iDM_Vector_AdaptiveBridson_Omega.yaml
```

`Method: AdaptiveBridson` (gen-0 Bridson-like fill → level-set refine).


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
