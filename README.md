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
Handles input errors and duplicates
Sorts stacks of different sizes (from 3 up to 500 elements)
Uses different strategies depending on stack size:
Hardcoded solutions for very small stacks
Optimized radix or chunk-based sorting for larger stacks
Clean and leak-free C code

**Compile:**<br/>

    make

**Run:**<br/>

    ./push_swap <list of integers>

**Example:**<br/>

    ./push_swap 3 2 1

**Output:**<br/>
sa<br/>
rra<br/>
