# HeapSort and Random Array Generator

## 📚 **Project Overview**

This project focuses on generating random arrays, building d-ary max heaps, and sorting these arrays using the HeapSort algorithm. The implementation supports configurable heap structures (d-ary heaps) and provides insights into algorithm performance by tracking comparison and swap statistics.

## 🚀 Key Features
**Random Array Generator**: Generates multiple random arrays with configurable sizes.

**HeapSort Implementation:** Supports sorting arrays using d-ary heap structures (e.g., binary heap, ternary heap, etc.).

**Custom Visualization:** Displays sorted arrays in a visually distinct format with colored output.

**Performance Metrics:** Tracks and displays the number of comparisons and swaps during sorting.

## 🛠️ Technologies Used
**C++17**

**Makefile:** for build automation

**Standard Libraries:** **`<vector>`**, **`<map>`**, **`<cstdlib>`**, **`<ctime>`**

## 📁 Project Structure
**Header/:** Contains class definitions for HeapSort and RandomNumbers.

**Source/:** Contains implementations of the respective classes.

**main.cpp:** Entry point for the program.

**Makefile:** Build automation script.

## ⚙️ How to Build and Run the Project
 #### 1. Build the project using Makefile: **`make`**
#### 2. Run the program: **`./program`**
#### 3. Clean build artifacts (optional): **`make clean`**

## 📊 Program Workflow
**1. Random Array Generation:**

* Generates three random arrays (A, B, C) with different sizes (e.g., 50, 100, 200 elements).

**2. HeapSort Execution:**

* Sorts each array using d-ary heaps (d = 2, 3, 4, 5).

* Displays the sorted arrays.

**3. Performance Metrics:**

* Prints the number of comparisons and swaps for each sorting operation.

## 🧠 Understanding the Key Concepts
**Heapify:** Ensures the max-heap property for a d-ary heap.

**Build Heap:** Constructs the initial heap from the input array.

**HeapSort:** Sorts the array by repeatedly extracting the maximum element.
