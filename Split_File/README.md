# File Splitter Program

## Overview

This C program splits a large file into smaller partitions. It takes three command-line arguments:
1. The name of the input file to split.
2. The number of partitions to create.
3. The name of the output directory where the partitions will be saved.

The program reads the input file, calculates the number of bytes each partition should contain, and creates the specified number of partitions. Each partition is saved as a separate file in the specified output directory.

## Features

- **File Size Calculation:** Determines the total size of the input file in bytes.
- **Partitioning:** Splits the file into approximately equal-sized partitions.
- **Output Directory:** Creates an output directory if it doesn't already exist.
- **File Creation:** Generates partition files with sequential names.

## Usage

### Command-Line Syntax

./file_splitter <input_file_name_to_split> <partition_count> <output_directory_name>

### Parameters

- `<input_file_name_to_split>`: The name of the file you want to split.
- `<partition_count>`: The number of partitions you want to create.
- `<output_directory_name>`: The name of the directory where the partition files will be saved.

### Example

```sh
./file_splitter largefile.txt 5 output_dir
```

This command will split `largefile.txt` into 5 partitions and save them in the `output_dir` directory.

## Detailed Explanation

1. **File Opening:**
   - The program opens the input file for reading.

2. **Directory Creation:**
   - It creates the specified output directory with permissions set to `0755`.

3. **Size Calculation:**
   - It calculates the total size of the input file in bytes using the `countBytes` function.

4. **Partition Size Calculation:**
   - Computes the number of bytes each partition should contain.

5. **File Splitting:**
   - Reads chunks of the input file and writes them to new partition files. Each file is named `copy0.txt`, `copy1.txt`, etc., within the specified output directory.

6. **Error Handling:**
   - The program checks for errors in file operations and prints appropriate error messages if any issues are encountered.

## Compilation

To compile the program, use the following command:

```sh
gcc -o file_splitter file_splitter.c
```

## Limitations

- The program assumes that the input file can fit into memory and that each partition is smaller than the available memory.
- The partition size calculation does not handle very small files or cases where the file size is not evenly divisible by the number of partitions.

