# Official project catalog

This directory is the **single source of truth** for `Jarvis2 project list|browse|fetch|info`.

There is **no PyPI package**. Jarvis-HEP-v2 only stores:

- the default index URL pointing at this JSON on GitHub
- download / decrypt / unpack logic
- a small packaged snapshot for offline fallback

## Index URL

```text
https://raw.githubusercontent.com/Pengxuan-Zhu-Phys/Jarvis-Examples/main/catalog/official_project_library.json
```

Override for private mirrors or local testing:

```bash
export JARVIS_OFFICIAL_LIBRARY_INDEX_URL=file:///path/to/official_project_library.json
# or a fork URL
```

## Schema (schema_version 1)

| Field | Required | Description |
|-------|----------|-------------|
| `name` | yes | Project id used by `fetch` / `info` |
| `category` | no | Free label (sampling, calculator, …) |
| `summary` | no | One-line description |
| `entrypoint` | no | Relative YAML path shown after fetch |
| `archive_url` | yes (for fetch) | HTTPS / file URL of tarball (or encrypted blob) |
| `archive_root` | no | Subdir inside archive; `.` = archive root |
| `access` | no | `public` (default) or `restricted` |
| `requires_key` | no | If true, fetch needs a decryption key |
| `encryption.scheme` | no | `none` (default) or `openssl-aes-256-cbc` |
| `encryption.hint` | no | Where collaborators get the key |
| `compatibility_notes` | no | Human notes |

## Public vs restricted

- **public** (e.g. Eggbox): plain `.tar.gz`, `requires_key: false`. Anyone can fetch.
- **restricted**: archive is **OpenSSL AES-256-CBC (PBKDF2)** encrypted (often `*.tar.gz.jenc`).  
  List/browse shows `Key: required`. Fetch with:

```bash
export JARVIS_PROJECT_FETCH_KEY='…'
Jarvis2 project fetch SecretProject
# or
Jarvis2 project fetch SecretProject --key '…'
```

### Encrypt a release tarball (maintainers)

```bash
# After: Jarvis2 project pack MyPrivate --repro
openssl enc -aes-256-cbc -pbkdf2 -salt \
  -in MyPrivate_repro_….tar.gz \
  -out MyPrivate_repro_….tar.gz.jenc \
  -pass pass:"$JARVIS_PROJECT_FETCH_KEY"
```

Upload the `.jenc` to a Release (can be a private release or opaque URL).  
Catalog entry:

```json
{
  "name": "MyPrivate",
  "access": "restricted",
  "requires_key": true,
  "encryption": {
    "scheme": "openssl-aes-256-cbc",
    "hint": "Ask the collaboration lead for the fetch key"
  },
  "archive_url": "https://…/MyPrivate_repro_….tar.gz.jenc",
  "archive_root": "."
}
```

`Jarvis2 project list` will show:

```text
Name        Access       Key         Category    Summary
Eggbox      public       no          sampling    …
MyPrivate   restricted   required    …           …
```

## Adding a public example

1. Keep the project under this repo (e.g. `Eggbox/`).
2. `Jarvis2 project pack Eggbox --repro` and attach the tarball to a GitHub Release.
3. Append/update an entry in `official_project_library.json` with `access: public`.
4. No Jarvis-HEP-v2 release is required.
