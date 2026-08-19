# Official project catalog

This JSON on `Jarvis-Examples/main` is the **live source of truth** for
`Jarvis project list|browse|info|fetch`. It contains project metadata and the
Release URL for each fetchable project; it does **not** contain project archives.

```text
Jarvis project browse / list / info
        ↓
Jarvis-Examples/main/catalog/official_project_library.json
        ↓  (project metadata + archive_url)
Jarvis project fetch NAME
        ↓
GitHub Release asset (.tar.gz or .tar.gz.jenc)
```

There is no PyPI catalog package. `Jarvis-HEP` supplies the client, decrypt, and
unpack code only. End users and maintainers use the Jarvis CLI, not raw
`openssl` commands.

## Index URL

```text
https://raw.githubusercontent.com/Pengxuan-Zhu-Phys/Jarvis-Examples/main/catalog/official_project_library.json
```

```bash
# Optional override for local testing or a private mirror.
export JARVIS_OFFICIAL_LIBRARY_INDEX_URL=file:///path/to/official_project_library.json
```

## Resolution and offline behavior

The client resolves catalog metadata in this order:

1. the remote JSON URL above;
2. `~/.jarvis/cache/official_catalog.json`, written after a successful remote read;
3. Jarvis-HEP's packaged snapshot at `jarvishep2/card/official_project_library.json`.

The snapshot is metadata only and may be stale. It never embeds official project
archives. `fetch` always downloads the actual package from the selected row's
`archive_url`.

## End-user commands (only these)

```bash
# See which projects need a key.
Jarvis project list

# Public
Jarvis project fetch Eggbox

# Restricted (pick one)
Jarvis project fetch iDM --key 'YOUR_KEY'
export JARVIS_PROJECT_FETCH_KEY='YOUR_KEY'
Jarvis project fetch iDM

Jarvis project info iDM
```

`list` shows columns **Access** (`public` / `restricted`) and **Key** (`no` / `required`).

## Maintainer commands (also CLI only)

```bash
# Pack + encrypt in one step → *.tar.gz.jenc.
Jarvis project pack MyPrivate --repro --encrypt --key 'YOUR_KEY'

# Or encrypt an existing tarball
Jarvis project pack MyPrivate --repro
Jarvis project encrypt MyPrivate_repro_….tar.gz --key 'YOUR_KEY'
```

Upload the resulting `.tar.gz` or `.jenc` to a GitHub Release first, then add
or update the catalog row with its immutable asset URL. Do not commit official
project archives **or project worktrees** to this repository, and do not add a
row before its asset exists.

For example:

```json
{
  "name": "MyPrivate",
  "access": "restricted",
  "requires_key": true,
  "encryption": {
    "scheme": "openssl-aes-256-cbc",
    "hint": "Ask the collaboration lead for the fetch key"
  },
  "archive_url": "https://github.com/OWNER/Jarvis-Examples/releases/download/TAG/MyPrivate_repro_….tar.gz.jenc",
  "archive_root": ".",
  "entrypoint": "bin/….yaml",
  "summary": "…"
}
```

Do **not** push any project tree or archive to this repository. Keep project
sources local; GitHub stores only this catalog on `main` and the published
packages as Release assets. Restricted packages must be uploaded only as their
encrypted `.jenc` asset.

## Schema notes

| Field | Meaning |
|-------|---------|
| `name` | CLI project identifier; unique case-insensitively |
| `category` | Free-form grouping shown by `list` / `browse` |
| `summary` | One-line description |
| `entrypoint` | Relative YAML path shown after a successful fetch |
| `archive_url` | Release URL for the actual `.tar.gz` or `.jenc` package |
| `archive_root` | Root path inside the archive; use `.` for standard project packs |
| `access` | `public` or `restricted` |
| `requires_key` | if true, `fetch` needs `--key` / `JARVIS_PROJECT_FETCH_KEY` |
| `encryption.scheme` | `none` or `openssl-aes-256-cbc` |
| `encryption.hint` | shown in `info` / fetch error |
| `compatibility_notes` | Runtime or package-boundary notes shown by `info` |

Backend format is OpenSSL-compatible AES-256-CBC (PBKDF2). Jarvis uses system
`openssl` or optional `cryptography`; users only call `Jarvis project …`.
