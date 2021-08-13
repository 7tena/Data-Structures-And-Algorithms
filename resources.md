### C++ tips and tricks
https://www.geeksforgeeks.org/c-tricks-competitive-programming-c-11/

### Memory Layout 
https://medium.com/@vivekkr1020/memory-layout-in-c-87f8b8c67fc5
1. Text Segment:
    - Also, know as Code segment, Contains executable instructions.
    - Usually, Text segment is sharable and hence only a single copy exists as well as its read-only.
2. Data Segment
    - Divided into two parts
    - Initialized Data Segment
      - Contains Global and static variables that are initialized. Its not a read-only segment and hence the values can be modified.
    - Uninitialized Data Segment
      - This is usually called BSS segment.
      - Data in this segment are initialized by the kernel to 0 before the program starts execution. This comes after the initialized Data segment in memory.
3. Stack:
    - Temporary variables are stored in this area. The virtual pointer is also stored here
    - Stack Frame: A set of values pushed for one function call is called Stack Frame.
4. Heap:
    - Here dynamic memory allocation takes place

### Kadanes algorithm
1. Kadanes algorithm is used to find the maximum subarray sum.
2. With a slight modification in the implementation of the algorithm, we can print the array elements in the maximum subarray sum.
3. With a slight modification in the implementation of the algorithm, we can print the starting and ending indices of maximum subarray sum.

### Misc
- You can uniquely identify a tree if the inorder traversal of the tree is given with any of the following three traversals (preorder, level order,  postorder)
- abs(), labs(), llabs() functions are defined in cstdlib header file. These functions return the absolute value of integer that is input to them as their argument.
- abs() function: Input to this function is value of type int in C and value of type int, long int or long long int in C++. In C output is of int type and in C++ the output has same data type as input.
- labs() function: This is the long int version of abs() function. Both the input and output are of long int type.
- llabs() function: This is the long long int version of abs() function. Both the input and output are of long long int type.
- The strtod() is a builtin function in C and C++ STL which interprets the contents of the string as a floating point number and return its value as a double. It sets a pointer to point to the first character after the last valid character of the string, only if there is any, otherwise it sets the pointer to null.
- The floating point number composed of four elements. They are sign, Base, Significand and Exponent.
