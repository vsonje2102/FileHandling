

### **FileHandling**

`FileHandling` is a collection of utilities for handling various file operations, including extracting comments, merging files, and splitting files. This project is implemented in C, and each utility is designed to perform a specific file-handling task efficiently.

---

#### **Contents**

1. **comment_extractor**  
   - Extracts comments from C source files.
   - Files:
     - `extract_comments.c`: Core logic for extracting comments.
     - `README.md`: Instructions specific to this utility.

2. **commment_extractor** (note: typo in directory name?)  
   - Handles nested comments and provides extracted outputs.
   - Files:
     - `extracted_nestedComment.c`: Logic for handling nested comments.

3. **Merge_File**  
   - Merges multiple text files into a single file.
   - Files:
     - `fileMerge.c`: Main code for file merging.
     - `README.md`: Documentation for usage.

4. **Split_File**  
   - Splits a large text file into smaller parts.
   - Files:
     - `README.md`: Instructions for this utility.

---

#### **How to Use**

1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```
2. Navigate to the desired utility folder, e.g., `comment_extractor`:
   ```bash
   cd FileHandling/comment_extractor
   ```
3. Compile the C code using `gcc`:
   ```bash
   gcc extract_comments.c -o extract_comments
   ```
4. Run the utility:
   ```bash
   ./extract_comments <input_file>
   ```

---

#### **Future Improvements**

- Standardize directory names (`commment_extractor`).
- Add comprehensive examples for each utility.
- Provide cross-platform support.

---

