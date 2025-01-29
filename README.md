Push Swap: Sorting Algorithm with Two Stacks

📌 Overview

This project implements a sorting algorithm using two stacks, designed as part of the 42 School curriculum. The goal is to sort a sequence of numbers with a limited set of stack operations while keeping the number of moves as low as possible.

The algorithm is designed to handle various input cases, including already sorted lists, reversed lists, and random distributions of numbers. It leverages an efficient combination of push, swap, rotate, and reverse rotate operations to achieve the sorted order with the least number of moves. The implementation follows a structured approach, dividing responsibilities among different source files and ensuring modularity for ease of debugging and optimization.

To achieve optimal performance, the algorithm follows a hybrid approach:

Small inputs (≤ 5 elements): A simple sorting method is used.

Larger inputs: A more advanced sorting technique is implemented using a mix of chunking, median partitioning, and optimized rotations to minimize the number of operations.

This project also includes a custom implementation of a linked list-based stack data structure to efficiently manage operations. Memory management is carefully handled to prevent leaks, ensuring that all allocated resources are freed correctly.

📂 Project Structure

Sorting-Algorithm-with-2-Stacks/
├── src/             # Source files for sorting logic
├── operator/        # Stack operations (swap, push, rotate, reverse rotate)
├── libft/           # Custom C library (libft)
├── push_swap.h      # Header file
├── Makefile         # Compilation rules
└── README.md        # Project documentation

🔧 Available Operations

The sorting algorithm uses the following stack operations:

sa, sb: Swap the top two elements of stack A or B.

ss: Swap the top two elements of both stacks simultaneously.

pa, pb: Push the top element from one stack to another.

ra, rb: Rotate stack A or B (shift all elements up).

rr: Rotate both stacks simultaneously.

rra, rrb: Reverse rotate stack A or B (shift all elements down).

rrr: Reverse rotate both stacks simultaneously.

🏗 Algorithm Logic

Parse and validate input.

Push values into stack A.

Sort elements efficiently using stack B.

Optimize moves to reduce the total operation count.

Output the optimized sequence of operations.



✨ Example Output

./push_swap 3 2 1 5 4

pb
pb
sa
ra
ra
pa
ra
pa
rra
rra

This sequence sorts [3, 2, 1, 5, 4] into [1, 2, 3, 4, 5].
