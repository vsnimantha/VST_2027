# SynCR

SynCR is a grammar-based program generation and analysis framework designed to generate structured C/C++ program variants, export AST representations, and evaluate them through differential testing and crash-fuzzing experiments.

This repository contains the SynCR project code and the experimental report archive used for validation and research analysis.

## Availability

This dataset package is available in the current workspace as a structured research archive and is suitable for:

- reproducibility review,
- supplementary material in a paper,
- benchmarking and comparison studies,
- archival research data sharing.

The experimental outputs are organized by timestamped run, which makes them traceable and easier to review.

## What is included

The project contains two main parts:

1. The SynCR implementation
   - grammar and parser components,
   - template management,
   - program generation logic,
   - output formatting and analysis utilities.

2. The experiment archive
   - `differential testing/`
   - `crash_fuzzing/`
   - AST JSON outputs,
   - generated C++ programs,
   - diagram exports,
   - summary analysis spreadsheet.

## Repository structure

```text
VST_2027/
├── SynCR/
│   ├── Code_Formatter/
│   ├── Config/
│   ├── Data/
│   ├── Feedback_Manager/
│   ├── Grammar/
│   ├── Grammar_Parser/
│   ├── Program_Dispatcher/
│   ├── Program_Generator/
│   ├── Program_Templates/
│   ├── Template_Manager/
│   ├── Utilities/
│   ├── notes.txt
│   ├── requirements.txt
│   └── ...
├── SynCR-Experiment-reports-main/
│   ├── README.md
│   ├── LICENSE
│   ├── metadata/
│   ├── scripts/
│   ├── differential testing/
│   ├── crash_fuzzing/
│   ├── Analysis.xlsx
│   └── ...
└── ...
```

## How to use SynCR

### 1. Install dependencies

From the `SynCR` folder:

```bash
pip install -r requirements.txt
```

If formatting is needed, install clang-format:

- macOS:
  ```bash
  brew install clang-format
  ```

- Linux:
  ```bash
  sudo apt install clang-format
  ```

### 2. Configure the project

The project configuration is stored in the `Config` directory. Check the generated config and template settings before running generation.

### 3. Generate a program

The current verified entry point for direct generation is the generator module itself:

```bash
cd /path/to/SynCR
python3 -m Program_Generator.program_generator_tmpl
```

This is the main program-generation entry point for the current version. The module contains the `if __name__ == '__main__': generate_program_main()` block that triggers generation from the project root.

The script can also be executed directly:

```bash
cd /path/to/SynCR
python3 Program_Generator/program_generator_tmpl.py
```

Both approaches start the same generator workflow and use the configured template manager, grammar rules, and static-analysis/formatting options.

### 4. Run the dispatcher

The dispatcher is a separate workflow entry point for downstream processing and feedback integration:

```bash
cd /path/to/SynCR
python3 -m Program_Dispatcher.program_dispatcher
```

This script creates generated C++ output and sends it to the configured feedback destination.

> Important: for pure generation, the correct entry point is `Program_Generator.program_generator_tmpl`. The dispatcher is for workflow execution beyond plain generation.

### 5. Review generated artifacts

Generated outputs and AST artifacts are stored in the experiment report archive and can be inspected in:

- `SynCR-Experiment-reports-main/differential testing/`
- `SynCR-Experiment-reports-main/crash_fuzzing/`

These folders contain the generated programs, AST JSON files, and diagram exports for each run.

## Experimental dataset

The experiment archive captures repeated program-generation and validation runs over time.

Each run directory includes:

- AST outputs,
- JSON-structured intermediate data,
- generated C++ code,
- diagrammatic views,
- repeated experiment snapshots.

The dataset is designed to be reviewable and shareable as supplementary research material.

## Additional documentation

- `metadata/data_dictionary.md` explains the dataset structure
- `metadata/dataset_manifest.csv` summarizes the archive contents
- `scripts/generate_dataset_manifest.py` can regenerate the manifest

## License

This project is distributed under the MIT License. See `LICENSE` for details.

## Notes

This is a research-oriented project and the experimental outputs should be interpreted with the corresponding SynCR generation pipeline and configuration. For publication use, the selected run set and experimental methodology should be described explicitly in the paper.
