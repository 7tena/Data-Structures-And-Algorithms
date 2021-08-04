## Tree
- Non linear data structure.
- Hierarchical data structure.
- Terminologies:
    - `height of x` : no of edges in the longest path from x to a leaf node.
    - `depth of node x` : length of path from root to x.
    - `leaf` : nodes that doesn't have children.
    - `height of tree` : height of root node.
    - `root` : topmost node.
    - `max depth` = height
    - `children`
    - `parent`

### Binary Trees
- `Binary Tree` : Tree in which nodes can have atmost 2 children
- `Strict/Proper binary tree` : Each node has either 2 or 0 children
- `Complete binary tree` : All levels except possibly the last one are completely filled and all nodes are as left as possible
- `Balanced binary tree` : 
    - Difference between height of left and right subtree for every node is not more than k(usually 1)
    - diff = | h.left - h.right |
- `Perfect binary tree` : All levels are completely filled except for the last one in a binary tree.
- `Heaps` : It is a special tree-based data structure in which the tree is a complete binary tree. 
    - max heap
    - min heap
- `Binary Search Tree` :
    - The left subtree of a node contains only nodes with keys lesser than the node’s key.
    - The right subtree of a node contains only nodes with keys greater than the node’s key.
    - The left and right subtree each must also be a binary search tree.
    - TC : O(log(n)) for insertion, deletion and searching.
    - In worst case (when tree has either no left subtree or right subtree and it is equivalent to a linked list) : O(n)
    - Worst case can be avoided by using balanced binary search tree

### Properties
- For *n* nodes, there are `n-1` edges.
- Max no of nodes at level *i* is `2^i`
- Max no of nodes in a binary tree with height h = `2^(h+1) - 1` or `2^level -1`
- Height of perfect binary tree with n nodes : `log(n+1) -1`
- Height of a complete binary tree : `floor(log(n))`
- Perfect binary tree is also a complete binary tree
- With n nodes
    - max height : `floor(log(n))`
    - min height : `n-1`
-  Diff = | h.left - h.right |
-  Height of an empty tree : -1
-  Height of a tree with 1 node : 0

### Implementation
- Dynamically created nodes
- Arrays : used for *complete binary trees, heaps*. For node at index i,
    - left-child-index : `2i + 1`
    - right-child-index : `2i + 2` 

### Applications:
- Storing naturally hierarchical data
    - file system
- Trie
    - used to store dictionary
    - fast and efficient
    - dynamic spell checking
- Network routing algorithm
- Organize data for
    - quick search
    - insertion
    - deletion
