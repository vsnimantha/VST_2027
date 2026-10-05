# Dataset data dictionary

This document describes the main entities and folder conventions used in the SynCR experiment dataset package.

## Top-level folders

### differential testing/

This directory contains repeated differential-testing experiment runs. Each timestamped subfolder represents a single run instance.

#### Common subfolders

- `AST/`: abstract syntax tree outputs
- `AST/Json/`: AST serialized as JSON
- `AST/Diagram/`: diagrammatic or graph-style AST renderings
- `Generated_Programs/`: generated C++ program outputs for that run

#### Interpretation

The timestamped folder names identify the run date, time and experiment ID. These folders are the primary unit of analysis for repeated generated-program comparison.

### crash_fuzzing/

This directory stores crash-focused experiments and related generated programs.

#### Common subfolders

- `c_reports/`: crash-focused report set in the C context
- `c++_reports/`: crash-focused report set in the C++ context
- `Generated_Programs/`: generated source programs for a given run
- `AST/`: AST outputs for crashes or generated variants

## File-level schema

### JSON AST files

These files describe AST structure using a nested object schema. They provide a machine-readable view of generated program structures.

Typical fields include:

- `type`: node type
- `placeholder_name`: template or construct identifier
- `value`: terminal value, when applicable
- `children`: nested AST nodes

### Generated source files

Files such as `generated_program_*.cpp` contain the generated C++ code artifacts that were produced during a run.

### Diagram files

Diagram files represent the AST graph or source structure visually and are useful for review or qualitative analysis.

## Analysis file

### Analysis.xlsx

This workbook is intended to provide aggregated summaries or analysis derived from the experiment results. It may be used as a high-level overview when the raw run directories are too detailed for quick review.

## Provenance notes

The directory naming convention is date- and timestamp-based, which supports run-level traceability. Each run should be treated as an independent experimental observation unless otherwise documented in the analysis materials.

## Recommendation for reuse

For a paper or reproducibility study, the recommended unit of analysis is:

- a timestamped run folder,
- the associated generated program files,
- the AST export files,
- the matching crash or differential outcome summary.

A publication should explicitly define which run set was selected for final analysis and why.
