
### **FileHandling Utilities**

This repository contains various file-handling utilities implemented in C. Each utility addresses a specific task, such as merging files, parsing lines, splitting files, and extracting comments. Below is an overview of the available utilities.

---

#### **Contents**

1. [Merge_File](#merge_file)  
2. [ParseLine_fromFile](#parseline_fromfile)  
3. [Split_File](#split_file)  
4. [comment_extractor](#comment_extractor)  
5. [commment_extractor](#commment_extractor)

---

### **Merge_File**

**Description**:  
This utility merges the contents of multiple text files into a single output file. It is useful for combining smaller files into a cohesive document.

**Files**:  
- `fileMerge.c`: C program to perform the merge operation.
- `README.md`: Documentation specific to this utility.

**Usage**:
1. Compile the program:
   ```bash
   gcc fileMerge.c -o fileMerge
   ```
2. Run the program:
   ```bash
   ./fileMerge file1.txt file2.txt output.txt
   ```

---

### **ParseLine_fromFile**

**Description**:  
This utility parses specific lines from a text file based on user-defined criteria. It is ideal for extracting or analyzing particular lines in a file.

**Files**:  
- `parse_lines.c`: Main logic for parsing lines from a file.
- `README.md`: Documentation specific to this utility.

**Usage**:
1. Compile the program:
   ```bash
   gcc main.c -o parseLines
   ```
2. Run the program:
   ```bash
   ./parseLines input.txt
   ```

---

### **Split_File**

**Description**:  
This utility splits a large file into smaller chunks. It is particularly useful for managing large datasets or log files.

**Files**:  
- `split_file.c`: Core logic for splitting files.
- `README.md`: Instructions for this utility.

**Usage**:
1. Compile the program:
   ```bash
   gcc split_file.c -o splitFile
   ```
2. Run the program:
   ```bash
   ./splitFile largeFile.txt 100
   ```
   *`100` specifies the number of lines per chunk.*

---

### **comment_extractor**

**Description**:  
Extracts comments from C source files, including single-line (`//`) and multi-line (`/* ... */`) comments.

**Files**:  
- `extract_comments.c`: Core logic for extracting comments.
- `README.md`: Documentation specific to this utility.

**Usage**:
1. Compile the program:
   ```bash
   gcc extract_comments.c -o extractComments
   ```
2. Run the program:
   ```bash
   ./extractComments source.c
   ```

---

### **commment_extractor**

**Description**:  
Similar to `comment_extractor`, but specifically handles nested comments and provides more detailed output.

**Files**:  
- `extracted_nestedComment.c`: Logic for extracting and processing nested comments.
- `README.md`: Utility-specific documentation.

**Usage**:
1. Compile the program:
   ```bash
   gcc extracted_nestedComment.c -o nestedCommentExtractor
   ```
2. Run the program:
   ```bash
   ./nestedCommentExtractor source_with_nested_comments.c
   ```

---

### **How to Use the Repository**

1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```
2. Navigate to the desired folder and compile the program(s).


