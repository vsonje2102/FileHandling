Here’s a README for your C program that merges files from a specified directory into a single destination file. This README provides an overview of the program, its usage, and some implementation details.

---

# File Merger Program

## Overview

This C program merges all regular files from a specified source directory into a single destination file. The program uses the `scandir` function to list and sort the files in the directory, then copies their contents into the destination file.

## Features

- Merges all regular files from the source directory.
- Files are sorted by name before merging.
- Error handling for file operations.

## Prerequisites

- C compiler (e.g., `gcc`).
- Standard C libraries (`stdio.h`, `stdlib.h`, `dirent.h`).

## Compilation

To compile the program, use the following command:

```sh
gcc -o file_merger file_merger.c
```

Replace `file_merger.c` with the name of your source file if different.

## Usage

```sh
./file_merger <directory_name> <destination_file>
```

- `<directory_name>`: The path to the directory containing the files to be merged.
- `<destination_file>`: The path to the destination file where the merged content will be saved.

## Example

To merge all files from the directory `source_dir` into `merged_output.txt`, run:

```sh
./file_merger source_dir merged_output.txt
```

## Description

1. **Command-line Arguments**:
   - The program expects two arguments: a directory path and a destination file path.

2. **Opening Files**:
   - The destination file is opened for writing.
   - Each file in the source directory is opened for reading.

3. **Scanning and Sorting**:
   - The `scandir` function is used to get a sorted list of files in the source directory.
   - The files are sorted alphabetically.

4. **Merging Files**:
   - Each regular file's content is read and written to the destination file.
   - Progress messages are printed to indicate which files have been processed.

5. **Error Handling**:
   - Errors in opening files are reported, and the program exits if any issues are encountered.

## Error Handling

- If the source directory or destination file cannot be opened, an error message is printed.
- If `scandir` fails, a corresponding error message is displayed.

## Notes

- Ensure the destination file does not already exist, as it will be overwritten.
- The program does not handle subdirectories or special files.

