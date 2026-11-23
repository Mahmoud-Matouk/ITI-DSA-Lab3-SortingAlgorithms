<p align="center">
  <img src="https://blog2.novaeg.net/wp-content/uploads/2024/07/iti_logo.5b9a0fd125be.png" alt="ITI Logo" width="480" />
</p>

<h1 align="center">DSA Lab 3 — Factorial via Stack, Sorting & Searching on Doubly Linked List</h1>

<p align="center">
  <strong>Information Technology Institute (ITI)</strong> • <em>Data Structures & Algorithms (DSA) — Lab 3</em>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-11%2F14-00599C?logo=c%2B%2B" alt="C++" />
  <img src="https://img.shields.io/badge/Windows-Linux-orange?logo=windows" alt="Platform" />
  <img src="https://img.shields.io/badge/GCC%2FMinGW-Compiler-green?logo=gnu" alt="GCC" />
  <img src="https://img.shields.io/badge/Data_Structures-Doubly_Linked_List_%26_Stack-blueviolet" alt="Data Structures" />
  <img src="https://img.shields.io/badge/Algorithms-Bubble_Sort_%7C_Selection_Sort_%7C_Binary_Search-success" alt="Algorithms" />
  <img src="https://img.shields.io/badge/ITI-Open%20Source_Track-red" alt="ITI" />
</p>

---

## Project Overview

This project is developed as part of the **Data Structures & Algorithms (DSA) track at the Information Technology Institute (ITI)** for **Lab 3**.

It focuses on implementing and demonstrating:
1. **Factorial Calculation using a Stack** — Computing $n!$ iteratively using a custom LIFO `StackLinkedList` instead of recursion.
2. **Doubly Linked List (`LinkedList`)** — Dynamic node allocation with bidirectional traversal capabilities (`next` and `prev`).
3. **Sorting Algorithms on Linked List**:
   - **Optimized Bubble Sort**: Compares adjacent nodes with swapped flags and shrinking boundaries.
   - **Selection Sort**: Iteratively selects the minimum node from the unsorted sublist and swaps node values.
4. **Binary Search on Linked List**:
   - Uses the two-pointer / slow-and-fast pointer technique (`getMid`) to locate the midpoint between boundaries.

---

## Key Algorithms & Implementations

### 1. Factorial Using Stack
- **Mechanism**: Pushes values $1$ through $n$ onto a `StackLinkedList`, then pops each element while multiplying into an accumulator.
- **Complexity**: $O(n)$ Time, $O(n)$ Space.

### 2. Bubble Sort (`BubbleSort(LinkedList* list)`)
- Iterates over adjacent nodes, swapping their `data` values when `curr->data > curr->next->data`.
- Uses an `isSwapped` flag for early termination if the list is already sorted.
- Tracks `sorted` tail boundary to avoid redundant comparisons.

### 3. Selection Sort (`SelectionSort(LinkedList* list)`)
- Iterates through the list, finding the minimum element in the remaining unsorted portion and swapping data with the current `sorted` node.

### 4. Binary Search (`binarySearch(LinkedList* list, int search)`)
- Uses `getMid(Node* start, Node* end)` implementing the slow/fast pointer technique:
  - `slow = slow->next`
  - `fast = fast->next->next`
- Shrinks the range using `start = mid->next` or `end = mid->prev`.

---

## Class Reference

### `Node`
- **Members**:
  - `int data`
  - `Node *next`
  - `Node *prev`
- **Constructor**: `Node(int data)` initializes pointers to `nullptr`.

### `StackLinkedList`
| Method | Description |
|---|---|
| `push(int data)` | Pushes a new element onto the top (tail) of the stack |
| `pop()` | Removes and returns the top element; returns `-1` if empty |
| `getNumberOfElements()` | Returns the current stack count |
| `display()` | Prints stack elements from top to bottom (tail → head) |

### `LinkedList` (Doubly Linked List)
| Method | Description |
|---|---|
| `append(int data)` | Appends a new node to the tail of the list |
| `getNumberOfNodes()` | Returns the number of nodes in the list |
| `display()` | Traverses and displays elements from head to tail |

---

## Technologies & Tools

- **Language:** C++ (C++11/C++14 standard)
- **Data Structures:** Stack (Linked List), Doubly Linked List
- **Algorithms:** Factorial (Stack Simulation), Bubble Sort, Selection Sort, Binary Search
- **Environment:** Visual Studio Code & MinGW / GCC

---

## Project Structure

```text
Lab3 (FactorialStack)/
├── include/
│   ├── Node.h               # Doubly linked node definition
│   ├── StackLinkedList.h    # Stack class declaration
│   └── LinkedList.h         # Doubly Linked List class declaration
├── src/
│   ├── StackLinkedList.cpp  # Stack method implementations
│   ├── LinkedList.cpp       # Doubly Linked List implementations
│   └── main.cpp             # Driver with Factorial, BubbleSort, SelectionSort, and Binary Search
├── .vscode/
│   ├── tasks.json           # VS Code build tasks
│   └── launch.json          # Debug configuration
└── README.md                # Project documentation
```

---

## Getting Started

### Prerequisites

- A C++ compiler (such as **MinGW / GCC**) or **Visual Studio / VS Code**.

### Build & Run

1. Open your terminal in the project directory:
   ```cmd
   cd path/to/Lab3 (SortingAlgorithms)
   ```

2. Compile with `g++`:
   ```cmd
   g++ -std=c++14 -I./include src/*.cpp -o main.exe
   ```

3. Run the executable:
   ```cmd
   .\main.exe
   ```

Or run directly using **VS Code build task** (`Ctrl+Shift+B`).
