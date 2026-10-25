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

5. Queue using arrays
