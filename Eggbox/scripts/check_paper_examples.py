#!/usr/bin/env python3
"""Check the EggBox arXiv paper example entry cards."""

from __future__ import annotations

import argparse
import subprocess
import sys
from pathlib import Path


EXAMPLES = [
    ("Random", "bin/Example_Random.yaml"),
    ("Grid", "bin/Example_Grid.yaml"),
    ("Bridson", "bin/Example_Bridson.yaml"),
    ("MCMC", "bin/Example_MCMC.yaml"),
    ("PTMCMC", "bin/Example_PTMCMC.yaml"),
    ("Dynesty", "bin/Example_Dynesty.yaml"),
]


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Run lightweight checks for the EggBox arXiv paper examples."
    )
    parser.add_argument(
        "--run",
        action="store_true",
        help="Run real scans instead of Jarvis --check-modules validation.",
    )
    args = parser.parse_args()

    root = Path(__file__).resolve().parents[1]
    results = []
    for name, relpath in EXAMPLES:
        command = ["Jarvis", f"./{relpath}"]
        if not args.run:
            command.append("--check-modules")
        proc = subprocess.run(command, cwd=root)
        results.append((name, proc.returncode == 0))

    print("\nEggBox arXiv paper examples")
    print("Sampler  | Status")
    print("-------- | ------")
    for name, ok in results:
        print(f"{name:<8} | {'PASS' if ok else 'FAIL'}")

    return 0 if all(ok for _, ok in results) else 1


if __name__ == "__main__":
    sys.exit(main())
