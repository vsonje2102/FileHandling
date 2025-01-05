
# Line Filter Program

## Overview

This program reads lines from a specified input file, filters the lines based on multiple conditions, and then prints the remaining lines to the console. The filtering conditions are provided in the code and applied sequentially. The program uses a linked list to store and manipulate the lines from the file.

## Why Linked List?

A linked list is used instead of an array for several reasons:
- **Dynamic Size**: Unlike arrays, linked lists can dynamically adjust their size, which is useful when the number of lines in the file is unknown beforehand.
- **Efficient Deletion**: Deleting elements (lines) in a linked list is more efficient compared to arrays, especially when deleting elements in the middle of the list. This is because linked lists do not require shifting elements as arrays do.
- **Memory Management**: Linked lists can help manage memory more efficiently, as nodes are allocated as needed.

## Compilation

To compile the program, use the provided `Makefile`:

1. Run `make` to build the program:

    ```sh
    make
    ```

2. To clean up the generated files, use:

    ```sh
    make clean
    ```

## Usage

Run the program with the following command:

```sh
./ass3  <input_file>
```

Replace `<input_file>` with the path to your input file. The program will read the file, filter the lines based on predefined conditions, and print the remaining lines.

## Program Details

### Input File

The input file should contain lines of text. Each line will be stored in a linked list node.

### Filtering Conditions

The program applies the following conditions to filter the lines:
1. Lines containing `"MSc"` are retained.
2. Lines containing `"2024"` are retained.
3. Lines containing `"Female"` are retained.

Lines not matching any of these conditions are removed from the list.

### Code Structure

- `Node`: A structure representing a node in the linked list, containing a line of text and a pointer to the next node.
- `conditionCheck()`: A function that filters the linked list based on a given condition.
- `freeList()`: A function that frees the memory allocated for the linked list.

-------------------------------------------------------------------------------------------------------------------------------
