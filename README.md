# DSA-SEM-3
DSA PRACTICAL
//description; test cases and time complexity

  # 1. Singly Linked List
- **Question Description:** Implement a singly linked list supporting insertion at the beginning (`push_front`), insertion at the end (`push_back`), deletion from the beginning (`pop_front`), deletion from the end (`pop_back`), insertion at a given position (`insert`), and traversal (`show`).

- **Test Cases:**
  - **Test Case 1:** Insert elements using `push_front(1)`, `push_back(3)`, `insert(2, 2)`.
    - **Expected Output:** `1 2 3`
  - **Test Case 2:** Delete the last element using `pop_back()` after the above insertions.
    - **Expected Output:** `1 2`

- **Time Complexity:**
  - Insertion at front (`push_front`): **O(1)**
  - Insertion at end (`push_back`): **O(1)**
  - Deletion from front (`pop_front`): **O(1)**
  - Deletion from end (`pop_back`): **O(n)**
  - Insertion at a position (`insert`): **O(n)**
  - Traversal (`show`): **O(n)**

  # 2. Doubly Linked List

- **Question Description:** Implement a doubly linked list supporting insertion at the beginning (`push_front`), insertion at the end (`push_back`), deletion from the beginning (`pop_front`), and traversal (`show`). Each node maintains pointers to both the next and previous nodes.

- **Test Cases:**
  - **Test Case 1:** Insert `1, 2, 3` at the front, followed by `0` at the back.
    - **Expected Output:** `3 <=> 2 <=> 1 <=> 0 <=> NULL`
  - **Test Case 2:** Delete the first node using `pop_front()`.
    - **Expected Output:** `2 <=> 1 <=> 0 <=> NULL`

- **Time Complexity:**
  - Insertion at front (`push_front`): **O(1)**
  - Insertion at end (`push_back`): **O(1)**
  - Deletion from front (`pop_front`): **O(1)**
  - Traversal (`show`): **O(n)**

# 3. Stack Using Array
- **Question Description:** Implement a stack using a dynamically allocated array, supporting `push` (insert), `pop` (remove the top element), `peek` (access the top element), `is_empty` (check if empty), and `is_full` (check if full). Handle stack overflow and underflow conditions.

- **Test Cases:**
  - **Test Case 1:** Create a stack of size `3` and push `10, 20, 30`.
    - **Expected Output:** Stack contains `10, 20, 30` (top: `30`).
  - **Test Case 2:** Push `40` into the full stack.
    - **Expected Output:** `stack overflow`
  - **Test Case 3:** Pop an element from an empty stack.
    - **Expected Output:** `Stack underflow`

- **Time Complexity:**
  - Push (`push`): **O(1)**
  - Pop (`pop`): **O(1)**
  - Peek (`peek`): **O(1)**
  - Check empty/full: **O(1)**

# 4. Stack Using Linked List

- **Question Description:** Implement a stack using a singly linked list, supporting `push` (insert at the top), `pop` (remove the top element), `peek` (access the top element), and `is_empty` (check whether the stack is empty).

- **Test Cases:**
  - **Test Case 1:** Push `10, 20, 30` onto the stack.
    - **Expected Output (`peek`):** `30`
  - **Test Case 2:** Pop an element after the above insertions.
    - **Expected Output (`peek`):** `20`
  - **Test Case 3:** Call `peek()` on an empty stack.
    - **Expected Output:** `Error -- empty stack` followed by `-1`.

- **Time Complexity:**
  - Push (`push`): **O(1)**
  - Pop (`pop`): **O(1)**
  - Peek (`peek`): **O(1)**
  - Check empty (`is_empty`): **O(1)**

# 5. Simple Queue Using Array

- **Question Description:** Implement a linear queue using a dynamically allocated array, supporting `enqueue` (insert at rear), `dequeue` (remove from front), `get_front` (access the front element), and `empty` (check whether the queue is empty). Handle overflow and underflow conditions.

- **Test Cases:**
  - **Test Case 1:** Enqueue `1, 2` and call `get_front()`.
    - **Expected Output:** `1`
  - **Test Case 2:** Dequeue an element and call `get_front()`.
    - **Expected Output:** `2`
  - **Test Case 3:** Fill the queue beyond its capacity of `5`.
    - **Expected Output:** `Queue is Full`

- **Time Complexity:**
  - Enqueue (`enqueue`): **O(1)**
  - Dequeue (`dequeue`): **O(1)**
  - Get front (`get_front`): **O(1)**
  - Check empty (`empty`): **O(1)**

# 6. Circular Queue Using Array

- **Question Description:** Implement a circular queue using a dynamically allocated array, supporting `enqueue` (insert at rear), `dequeue` (remove from front), `get_front` (access the front element), and `empty` (check whether the queue is empty). Circular indexing allows previously occupied array positions to be reused.

- **Test Cases:**
  - **Test Case 1:** Enqueue `1, 2` and call `get_front()`.
    - **Expected Output:** `1`
  - **Test Case 2:** Dequeue an element and call `get_front()`.
    - **Expected Output:** `2`
  - **Test Case 3:** Enqueue elements until the queue reaches capacity.
    - **Expected Output:** `Queue is Full` when the queue is full.

- **Time Complexity:**
  - Enqueue (`enqueue`): **O(1)**
  - Dequeue (`dequeue`): **O(1)**
  - Get front (`get_front`): **O(1)**
  - Check empty (`empty`): **O(1)**

# 7. Queue Using Linked List

- **Question Description:** Implement a queue using a singly linked list, supporting `Enqueue` (insert at rear), `Dequeue` (remove from front), `get_front` (access the front node), `get_back` (access the rear node), `empty` (check whether the queue is empty), and `count` (return the number of elements).

- **Test Cases:**
  - **Test Case 1:** Enqueue `7, 3, 5` and call `get_front()` and `count()`.
    - **Expected Output:** `7`, `3`
  - **Test Case 2:** Dequeue twice and call `get_front()`.
    - **Expected Output:** `5`
  - **Test Case 3:** Dequeue all elements and check `empty()`.
    - **Expected Output:** `1` (true)

- **Time Complexity:**
  - Enqueue (`Enqueue`): **O(1)**
  - Dequeue (`Dequeue`): **O(1)**
  - Get front/back (`get_front`, `get_back`): **O(1)**
  - Check empty (`empty`): **O(1)**
  - Count elements (`count`): **O(n)**
 
# 8. Merge Sort

- **Question Description:** Implement the Merge Sort algorithm to sort an array in ascending order using the divide-and-conquer approach. The array is recursively divided into smaller subarrays, which are then sorted and merged.

- **Test Cases:**
  - **Test Case 1:** Input: `[5, 4, 6, 2, 1]`
    - **Expected Output:** `1 2 4 5 6`
  - **Test Case 2:** Input: `[3, 1, 2]`
    - **Expected Output:** `1 2 3`
  - **Test Case 3:** Input: `[5, 5, 2, 2, 1]`
    - **Expected Output:** `1 2 2 5 5`

- **Time Complexity:**
  - Best Case: **O(n log n)**
  - Average Case: **O(n log n)**
  - Worst Case: **O(n log n)**

# 9. Quick Sort

- **Question Description:** Implement the Quick Sort algorithm to sort an array in ascending order using the divide-and-conquer approach. The algorithm selects a pivot, partitions the array around it, and recursively sorts the resulting subarrays.

- **Test Cases:**
  - **Test Case 1:** Input: `[5, 4, 6, 2, 1]`
    - **Expected Output:** `1 2 4 5 6`
  - **Test Case 2:** Input: `[3, 1, 2]`
    - **Expected Output:** `1 2 3`
  - **Test Case 3:** Input: `[5, 5, 2, 2, 1]`
    - **Expected Output:** `1 2 2 5 5`

- **Time Complexity:**
  - Best Case: **O(n log n)**
  - Average Case: **O(n log n)**
  - Worst Case: **O(n²)**
 
# 10. Radix Sort

- **Question Description:** Implement Radix Sort to sort non-negative integers in ascending order. The algorithm groups elements by individual digits, starting from the one's place and moving to higher places until all digits have been processed.

- **Test Cases:**
  - **Test Case 1:** Input: `[124, 345, 98, 541, 665]`
    - **Expected Output:** `98 124 345 541 665`
  - **Test Case 2:** Input: `[170, 45, 75, 90, 802]`
    - **Expected Output:** `45 75 90 170 802`
  - **Test Case 3:** Input: `[5, 2, 9, 1, 0]`
    - **Expected Output:** `0 1 2 5 9`

- **Time Complexity:**
  - **O(d × (n + 10))**, where `d` is the maximum number of digits and `n` is the number of elements.

# 11. Heap Sort

- **Question Description:** Implement Heap Sort to sort an array in ascending order using a max heap. The algorithm builds a max heap, repeatedly swaps the root with the last element, and restores the heap property until the array is sorted.

- **Test Cases:**
  - **Test Case 1:** Input: `[1, 9, 8, 6, 5, 4, 3, 2, 0]`
    - **Expected Output:** `0 1 2 3 4 5 6 8 9`
  - **Test Case 2:** Input: `[4, 1, 3, 2]`
    - **Expected Output:** `1 2 3 4`
  - **Test Case 3:** Input: `[5, 5, 2, 1, 2]`
    - **Expected Output:** `1 2 2 5 5`

- **Time Complexity:**
  - Build Heap: **O(n)**
  - Heap Sort: **O(n log n)**
 
# 12. Bucket Sort

- **Question Description:** Sort an array of floating-point numbers between `0` and `1` using Bucket Sort. Distribute elements into buckets based on their values, sort each bucket individually, and combine the buckets to produce the sorted array.

- **Test Cases:**
  - **Test Case 1:** Input: `{0.42, 0.32, 0.23, 0.52, 0.25, 0.47}`
    - **Expected Output:** `0.23 0.25 0.32 0.42 0.47 0.52`

- **Time Complexity:**
  - Distributing Elements: **O(n)**
  - Sorting Individual Buckets: **O(n log n)** average overall
  - Combining Buckets: **O(n)**
  - **Average: O(n + k)** under uniform distribution with insertion sort; this implementation uses `std::sort` for each bucket, so its typical average performance is **O(n log n)**.
13. K smallest elements
# 14. Bin Sort

Question Description: Sort an array of non-negative integers using bins. Each bin represents an integer value and stores its frequency. Collect the elements from the bins in ascending order to obtain the sorted array.

Test Cases:

Test Case 1: Input: {4, 2, 7, 1, 4, 3, 2}

Expected Output: 1 2 2 3 4 4 7

Time Complexity:

Finding Maximum: O(n)

Distributing Elements into Bins: O(n)

Collecting Sorted Elements: O(n + k), where k is the maximum element plus one.

Overall: O(n + k)

Note: This implementation assumes the array is non-empty and all elements are non-negative. Its memory usage depends on the maximum value in the array.


# 15. Tower of Hanoi Using Stacks

- **Question Description:** Implement the Tower of Hanoi problem using three stacks: source, auxiliary, and target. Use recursion to transfer disks from the source stack to the target stack while following the recursive movement pattern.

- **Test Cases:**
  - **Test Case 1:** Move 3 disks from the source stack to the target stack.
    - **Expected Output:** `1 2 3`

- **Time Complexity:**
  - Recursive Algorithm: **O(2ⁿ)**, where `n` is the number of disks.


# 16. Binary Trees

- **Question Description:** Implement a binary tree in C++ where each node has at most two children. Implement tree traversals (`preorder`, `inorder`, `postorder`), count total nodes (`count_nodes`), calculate height (`height`), count leaf nodes (`count_leaf_nodes`), search for a value (`search`), create a mirror tree (`Mirror`), and check whether two trees are identical (`identical`).

- **Test Cases:**
  - **Test Case 1:** Preorder traversal of the constructed tree.
    - **Expected Output:** `1 2 4 5 3 6 7`
  - **Test Case 2:** Mirror the tree and perform preorder traversal.
    - **Expected Output:** `1 3 7 6 2 5 4`
  - **Test Case 3:** Count nodes in the original tree.
    - **Expected Output:** `7`

- **Time Complexity:**
  - Tree Traversals: **O(n)**
  - Count Nodes / Leaf Nodes: **O(n)**
  - Height Calculation: **O(n)**
  - Search: **O(n)**
  - Mirror Tree: **O(n)**
  - Check Identical Trees: **O(n)**
 
# 17. Binary Search Tree (BST)

- **Question Description:** Implement a Binary Search Tree (BST) using elements from a singly linked list. Implement insertion, searching, inorder traversal, finding the maximum node, and deletion of nodes. Deletion handles three cases: leaf node, one child, and two children.

- **Test Cases:**
  - **Test Case 1:** Create a BST from the linked list and display its inorder traversal.
    - **Expected Output:** `3 5 11 17 25 30 33 37 39 42 50 51 66 66 68 69 74 86 90 93`
  - **Test Case 2:** Delete nodes `17`, `66`, `33`, and `25`, then display the inorder traversal.
    - **Expected Output:** `3 5 11 30 37 39 42 50 51 66 68 69 74 86 90 93`

- **Time Complexity:**
  - BST Insertion: **O(h)** per insertion
  - BST Search: **O(h)** per search
  - Inorder Traversal: **O(n)**
  - Find Maximum: **O(h)**
  - Node Deletion: **O(h)**
  - Here, `n` is the number of nodes and `h` is the tree height. In the worst case, `h = O(n)`.

18. AVL TREES
# 19. Valid Parentheses Using Stack

- **Question Description:** Check whether an equation contains correctly balanced and nested parentheses using a stack implemented with a singly linked list. Supports three types of brackets: `()`, `{}`, and `[]`. Opening brackets are pushed onto the stack, and matching closing brackets pop them.

- **Test Cases:**
  - **Test Case 1:** Input: `{[()]}`
    - **Expected Output:** `Correct equation`
  - **Test Case 2:** Input: `{[(])}`
    - **Expected Output:** `Invalid equation`
  - **Test Case 3:** Input: `((()))`
    - **Expected Output:** `Correct equation`
  - **Test Case 4:** Input: `(()`
    - **Expected Output:** `incorrect equation`

- **Time Complexity:**
  - Checking Parentheses: **O(n)**
  - Stack Push/Pop Operations: **O(1)** per operation
  - **Overall: O(n)**, where `n` is the length of the input string.
