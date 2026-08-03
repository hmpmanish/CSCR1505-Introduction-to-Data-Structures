# CSCR1505: Introduction to Data Structures

Welcome to the laboratory repository for **CSCR1505 - Introduction to Data Structures**. This university course repository serves as a practical codebase containing modular, efficient, and well-structured implementations of core linear data structures, abstract data types, expression evaluators, and fundamental algorithmic concepts written in Standard C.

---

## 📘 Subject Information
* **Course Code**: CSCR1505
* **Course Title**: Introduction to Data Structures
* **Academic Level**: Undergraduate Computer Science & Engineering
* **Core Topics Covered**: Singly Linked Lists, Doubly Linked Lists, Circular Linked Lists, Stacks, Expression Parsing (Infix/Postfix), String Manipulations, and File I/O.

---

## 📂 Repository Folder Structure

The repository is logically organized by data structure and topic area to facilitate intuitive exploration and study:

```
CSCR1505-Introduction-to-Data-Structures/
│
├── Linked_Lists/
│   ├── Singly_Linked_List/
│   │   ├── Singly_Linked_List_Append.c
│   │   ├── Singly_Linked_List_Count_Nodes.c
│   │   ├── Singly_Linked_List_Count_Specific_Value.c
│   │   ├── Singly_Linked_List_Reverse.c
│   │   ├── Singly_Linked_List_Insert_At_Location.c
│   │   ├── Singly_Linked_List_Sequential_Demo.c
│   │   ├── Singly_Linked_List_Basic_Operations.c
│   │   ├── Singly_Linked_List_Middle_Position.c
│   │   ├── Singly_Linked_List_Swap_By_Position.c
│   │   └── Singly_Linked_List_Full_Operations.c
│   ├── Doubly_Linked_List/
│   │   └── Doubly_Linked_List_Operations.c
│   └── Circular_Linked_List/
│       └── Circular_Linked_List_Operations.c
│
├── Stacks/
│   ├── Stack_Using_Array.c
│   ├── Infix_To_Postfix_Conversion.c
│   ├── Postfix_Expression_Evaluator.c
│   └── Infix_To_Postfix_With_Evaluation.c
│
├── Strings/
│   └── String_Length_And_Reverse.c
│
├── File_Handling/
│   ├── Read_File_Contents.c
│   └── demo.txt
│
└── README.md
```

---

## 📋 List of Programs

### 1. Singly Linked Lists (`Linked_Lists/Singly_Linked_List/`)
| Program File | Description | Key Operations / Features |
| :--- | :--- | :--- |
| **`Singly_Linked_List_Append.c`** | Basic initialization of a linear singly linked list. | Dynamic memory allocation (`malloc`), node creation, append to end, traversal, display. |
| **`Singly_Linked_List_Count_Nodes.c`** | Interactive linked list builder and length calculation. | Append multiple nodes via loop, calculate total node count (`countnodes()`), print formatted chain. |
| **`Singly_Linked_List_Count_Specific_Value.c`** | Frequency analysis within a linked list. | Traversing nodes to count exact occurrences of a target integer value ($10$). |
| **`Singly_Linked_List_Reverse.c`** | In-place iterative linked list reversal algorithm. | Three-pointer technique (`prev`, `curr`, `next`) to reverse link pointers without allocating new memory. |
| **`Singly_Linked_List_Insert_At_Location.c`** | Positional insertion algorithm. | Validating length bounds and inserting a node at any generic $N^{th}$ position in the chain. |
| **`Singly_Linked_List_Sequential_Demo.c`** | Automated demonstration of linked list CRUD operations. | Sequential script executing append, prepend (`add_begin`), positional insert, deletion, and length calculation. |
| **`Singly_Linked_List_Basic_Operations.c`** | Interactive CLI menu for standard linked list manipulation. | Switch-case loop for real-time interaction: Append, Display, Insert at location, Delete from location, Length. |
| **`Singly_Linked_List_Middle_Position.c`** | Mathematical midpoint positioning calculation. | Computing odd/even midpoints of a linked structure using traversal length division. |
| **`Singly_Linked_List_Swap_By_Position.c`** | Adjacent node link pointer swapping algorithm. | Modifying adjacent physical node pointers ($P$ and $P+1$) without copying data fields; includes two-pointer mid detection and reversal. |
| **`Singly_Linked_List_Full_Operations.c`** | **Comprehensive Singly Linked List Suite** (10-Option CLI). | Full implementation of all operations: Append, Prepend, Insert, Delete, Fast/Slow Pointer Middle Detection, Swap Nodes by Data Value ($X \leftrightarrow Y$), Reverse, and Length. |

### 2. Doubly & Circular Linked Lists
| Program File | Category | Description & Features |
| :--- | :--- | :--- |
| **`Doubly_Linked_List_Operations.c`** | `Linked_Lists/Doubly_Linked_List/` | Interactive CLI menu for Doubly Linked List management using bidirectional `left` and `right` pointers. Supports append, prepend, positional insertion, deletion, and bidirectional formatting. |
| **`Circular_Linked_List_Operations.c`** | `Linked_Lists/Circular_Linked_List/` | Circular structure implementation utilizing a dedicated `tail` reference where `tail->link` points directly back to the head node. Features append, traversal, length calculation, insertion, and deletion. |

### 3. Stacks & Expression Evaluation (`Stacks/`)
| Program File | Description | Algorithmic Highlights |
| :--- | :--- | :--- |
| **`Stack_Using_Array.c`** | Fixed-size array implementation of a LIFO Stack. | Operations: `push()`, `pop()`, `peek()`, and stack traversal with overflow/underflow boundary detection. |
| **`Infix_To_Postfix_Conversion.c`** | Shunting-Yard parser for infix expression conversion. | Translates parenthesized algebraic expressions ($+, -, *, /, \hat{}$) from Infix to Postfix notation using operator precedence rules and character stacks. |
| **`Postfix_Expression_Evaluator.c`** | Integer postfix arithmetic expression evaluation. | Parses operands and operators from a postfix sequence, using an integer stack to compute arithmetic evaluations including division-by-zero validation. |
| **`Infix_To_Postfix_With_Evaluation.c`** | Complete end-to-end algebraic parsing and evaluation engine. | Combines character expression transformation with floating-point evaluation and power functions (`pow`) to directly calculate answers from standard Infix input. |

### 4. Strings & File Handling
| Program File | Category | Description & Features |
| :--- | :--- | :--- |
| **`String_Length_And_Reverse.c`** | `Strings/` | Standalone string processing program that determines character string length and reverses characters in-place using standard indexing without reliance on library reverse utilities. |
| **`Read_File_Contents.c`** | `File_Handling/` | Demonstrates file input operations in C using file stream pointers (`FILE*`, `fopen`, `fgetc`, `fclose`) to open and display the contents of an academic demonstration file (`demo.txt`). |

---

## 🛠️ Technologies Used
* **Language**: Standard C (compatible with ISO C99 and modern C specifications)
* **Libraries Used**:
  * `<stdio.h>` — Standard input/output operations (`printf`, `scanf`, file streams)
  * `<stdlib.h>` — Dynamic memory management and execution control (`malloc`, `free`, `exit`)
  * `<string.h>` — String character array interrogation
  * `<ctype.h>` — Character classification utilities (`isalnum`, `isdigit`)
  * `<math.h>` — Floating-point mathematics (`pow` for exponential evaluations)
* **Compiler Support**: Fully verified and compatible across **GCC** (GNU Compiler Collection), **Clang**, and **MinGW** on Windows, macOS, and Linux environments (legacy MS-DOS Turbo C console commands neutralized for universal compilation).

---

## 💻 How to Compile and Run

Every individual source file is built as an independent command-line program with its own main entry point. You can compile and run them easily using any standard C compiler.

### Terminal Instructions (GCC / MinGW / Clang)

1. **Open a terminal/command prompt** and navigate to the desired folder inside the cloned repository:
   ```bash
   cd CSCR1505-Introduction-to-Data-Structures/Linked_Lists/Singly_Linked_List/
   ```

2. **Compile the program** using `gcc` (or `clang`). We recommend passing `-o` to designate the output binary name:
   ```bash
   # Compile Singly Linked List suite
   gcc Singly_Linked_List_Full_Operations.c -o singly_ll
   
   # Note: For Stack evaluation programs using <math.h> on Linux, link the math library using -lm:
   gcc ../../Stacks/Infix_To_Postfix_With_Evaluation.c -o infix_eval -lm
   ```

3. **Execute the compiled program**:
   ```bash
   # On Linux / macOS:
   ./singly_ll
   
   # On Windows (Command Prompt or PowerShell):
   .\singly_ll.exe
   ```

### Running File Handling Programs
When running `Read_File_Contents.c`, ensure your working directory is focused inside the `File_Handling/` directory so that the relative path to `demo.txt` resolves seamlessly:
```bash
cd File_Handling/
gcc Read_File_Contents.c -o file_reader
./file_reader
```

---
*Maintained with adherence to clean academic repository architecture and Git chronological integrity.*