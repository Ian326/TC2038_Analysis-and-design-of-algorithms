# TC2038_Analysis-and-design-of-algorithms

## Description
An educational C++ system designed for learning and demonstrating sorting algorithms.

## Project Structure 📚
| Component       | File            | Primary Function                           | Key Symbols            |
| --------------- | --------------- | ------------------------------------------ | ---------------------- |
| Main Controller | main.cpp        | Menu interface and algorithm orchestration | main(), menu, opt      |
| Array Creation  | array_create.h  | Interactive array input and validation     | createArray(), isInt() |
| Data Structure  | array_info.h    | Array container and metadata               | ArrayInfo, array, size |
| Array Display   | array_print.h   | Console output formatting                  | printArray()           |
| Bubble Sort     | sort_bubble.h   | Simple comparison-based sorting            | BubbleSort()           |
| Merge Sort      | sort_merge.h    | Divide-and-conquer recursive sorting       | MergeSort()            |
| Quick Sort      | sort_quick.h    | Partition-based recursive sorting          | QuickSort()            |
| Counting Sort   | sort_counting.h | Non-comparison linear sorting              | CountingSort()         |


## Context ❔
This system follows a modular architecture centered around a single-run demonstration model. Each execution allows users to select one sorting algorithm, create an input array, and observe the sorting process from start to finish. Prioritizing educational clarity over performance optimization, making it ideal for understanding algorithm behavior and implementation patterns.

Key implementation characteristics include:
- **Menu-Driven Interface:** Users select algorithms through numbered options 
- **Dynamic Memory Management:** Arrays are created and managed through the ArrayInfo structure
- **Input Validation:** The isInt() function ensures robust user input handling 
- **Algorithm Dispatch:** A switch statement routes execution to the selected sorting algorithm 
- **Single-Run Design:** Each program execution demonstrates one algorithm before termination 

