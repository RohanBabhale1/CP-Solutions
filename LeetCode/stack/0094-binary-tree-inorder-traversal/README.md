# 0094 · Binary Tree Inorder Traversal

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/binary-tree-inorder-traversal/)

**Topics:** `Stack` `Tree` `Depth-First Search` `Binary Tree`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 2 ms | 12.4 MB | 2026-10-20 | [link](https://leetcode.com/submissions/detail/2176749588/) |

## Problem

Given the `root` of a binary tree, return *the inorder traversal of its nodes' values*.

**Example 1:**

**Input:** root = [1,null,2,3]

**Output:** [1,3,2]

**Explanation:**

![](https://assets.leetcode.com/uploads/2024/08/29/screenshot-2024-08-29-202743.png)

**Example 2:**

**Input:** root = [1,2,3,4,5,null,8,null,null,6,7,9]

**Output:** [4,2,6,5,7,1,3,9,8]

**Explanation:**

![](https://assets.leetcode.com/uploads/2024/08/29/tree_2.png)

**Example 3:**

**Input:** root = []

**Output:** []

**Example 4:**

**Input:** root = [1]

**Output:** [1]

**Constraints:**

	- The number of nodes in the tree is in the range `[0, 100]`.

	- `-100 <= Node.val <= 100`

**Follow up:** Recursive solution is trivial, could you do it iteratively?
