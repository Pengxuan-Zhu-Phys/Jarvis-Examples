# Official project catalog

**Single source of truth** for `Jarvis2 project list|browse|fetch|info`.

No PyPI package. Catalog = this GitHub JSON. End users only need the **Jarvis2 CLI**
(not raw `openssl` commands).

## Index URL

```text
https://raw.githubusercontent.com/Pengxuan-Zhu-Phys/Jarvis-Examples/main/catalog/official_project_library.json
```

```bash
# optional override (local testing / private mirror)
export JARVIS_OFFICIAL_LIBRARY_INDEX_URL=file:///path/to/official_project_library.json
```

## End-user commands (only these)

```bash
# See which projects need a key
Jarvis2 project list

# Public
Jarvis2 project fetch Eggbox

# Restricted (pick one)
Jarvis2 project fetch SecretName --key 'YOUR_KEY'
export JARVIS_PROJECT_FETCH_KEY='YOUR_KEY'
Jarvis2 project fetch SecretName

Jarvis2 project info SecretName
```

`list` shows columns **Access** (`public` / `restricted`) and **Key** (`no` / `required`).

## Maintainer commands (also CLI only)

```bash
# Pack + encrypt in one step → *.tar.gz.jenc
Jarvis2 project pack MyPrivate --repro --encrypt --key 'YOUR_KEY'

# Or encrypt an existing tarball
Jarvis2 project pack MyPrivate --repro
Jarvis2 project encrypt MyPrivate_repro_….tar.gz --key 'YOUR_KEY'
```

Upload the `.jenc` (Release or private URL), then add a catalog row:

```json
{
  "name": "MyPrivate",
  "access": "restricted",
  "requires_key": true,
  "encryption": {
    "scheme": "openssl-aes-256-cbc",
    "hint": "Ask the collaboration lead for the fetch key"
  },
  "archive_url": "https://…/MyPrivate_….tar.gz.jenc",
  "archive_root": ".",
  "entrypoint": "bin/….yaml",
  "summary": "…"
}
```

Do **not** push the plaintext private project tree to the public Examples repo.

## Schema notes

| Field | Meaning |
|-------|---------|
| `access` | `public` or `restricted` |
| `requires_key` | if true, `fetch` needs `--key` / `JARVIS_PROJECT_FETCH_KEY` |
| `encryption.scheme` | `none` or `openssl-aes-256-cbc` |
| `encryption.hint` | shown in `info` / fetch error |

Backend format is OpenSSL-compatible AES-256-CBC (PBKDF2). Jarvis2 uses system
`openssl` or optional `cryptography`; users only call `Jarvis2 project …`.
