# Jarvis-HEP Standalone Project

This folder was created by:

```bash
Jarvis --mkproject <PROJECT_NAME>
```

## Quick Start

Run the built-in toy workflow:

```bash
Jarvis bin/quickstart_mcmc_operas.yaml
```

Run CSV replay example:

```bash
Jarvis bin/quickstart_csv_operas.yaml
```

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

The `_paper.yaml` files under `images/` are preserved Jarvis-PLOT configurations
for reproducing the arXiv figures. Newly generated Jarvis-PLOT YAML files may
use default names; the `_paper.yaml` files are kept stable to avoid being
overwritten.

Add optional project directories such as `calculators/`, `configs/`, `scripts/`,
`assets/`, and `docs/` only when your workflow actually needs them.

Path rules:
- `&J/...` resolves against project root.
- Use `deps/` for project-local bundled defaults such as `&J/deps/environment_default.yaml`.
