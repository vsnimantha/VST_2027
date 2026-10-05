#!/usr/bin/env python3
"""Generate a dataset manifest summarizing the research archive."""

from __future__ import annotations

import csv
from datetime import datetime, timezone
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
OUTPUT_FILE = ROOT / "metadata" / "dataset_manifest.csv"


def count_files(directory: Path) -> int:
    if not directory.exists():
        return 0
    return sum(1 for _ in directory.rglob('*') if _.is_file())


def count_directories(directory: Path) -> int:
    if not directory.exists():
        return 0
    return sum(1 for _ in directory.iterdir() if _.is_dir())


def build_row(name: str, path: Path, description: str) -> dict:
    return {
        "section": name,
        "path": str(path.relative_to(ROOT)),
        "run_folder_count": count_directories(path),
        "file_count": count_files(path),
        "description": description,
    }


def main() -> None:
    rows = [
        build_row(
            "differential_testing",
            ROOT / "differential testing",
            "Timestamped differential-testing experiment runs and generated program artifacts.",
        ),
        build_row(
            "crash_fuzzing_c_reports",
            ROOT / "crash_fuzzing" / "c_reports",
            "Crash-fuzzing reports for C-based generated programs.",
        ),
        build_row(
            "crash_fuzzing_cpp_reports",
            ROOT / "crash_fuzzing" / "c++_reports",
            "Crash-fuzzing reports for C++-based generated programs.",
        ),
    ]

    OUTPUT_FILE.parent.mkdir(parents=True, exist_ok=True)
    with OUTPUT_FILE.open("w", newline="", encoding="utf-8") as f:
        writer = csv.DictWriter(
            f,
            fieldnames=[
                "section",
                "path",
                "run_folder_count",
                "file_count",
                "description",
            ],
        )
        writer.writeheader()
        writer.writerows(rows)

    total_files = sum(int(r["file_count"]) for r in rows)
    total_runs = sum(int(r["run_folder_count"]) for r in rows)
    print(f"Generated manifest at {OUTPUT_FILE}")
    print(f"Total run folders: {total_runs}")
    print(f"Total files: {total_files}")
    print(f"Generated at: {datetime.now(timezone.utc).isoformat()}")


if __name__ == "__main__":
    main()
