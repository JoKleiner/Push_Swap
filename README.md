# push_swap – 42 Project
**About:**<br/>
push_swap is an algorithmic sorting project in C.<br/>
The goal is to sort a stack of integers using a limited set of stack operations, with as few moves as possible.<br/>
It is an exercise in sorting algorithms, data structures, and optimization.<br/>

**Rules:**<br/>
You have two stacks: A (input) and B (empty)<br/>
You must sort stack A in ascending order using the smallest number of instructions<br/>
Only a few operations are allowed:
- sa, sb, ss – swap top two elements
- pa, pb – push from one stack to the other
- ra, rb, rr – rotate (top to bottom)
- rra, rrb, rrr – reverse rotate (bottom to top)

**Features:**<br/>
Handles input errors and duplicates<br/>
Sorts stacks of different sizes (from 3 up to 1000 elements)<br/>
Clean and leak-free C code<br/>
Uses different strategies depending on stack size:<br/>
- Hardcoded solutions for very small stacks
- Custom sorting algorithm based on push cost calculation for larger stacks:
    - For each element in stack A, the program calculates the lowest cost to push it to the correct position in stack B
    - Then, it pushes the element with the minimal push cost

**Compile:**<br/>

    make

**Run:**<br/>

    ./push_swap <list of integers>

**Example:**<br/>

    ./push_swap 3 2 1

**Output:**<br/>
sa<br/>
rra<br/>
