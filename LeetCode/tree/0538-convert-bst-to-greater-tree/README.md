# 0538 · Convert BST to Greater Tree

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Medium &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/convert-bst-to-greater-tree/)

**Topics:** `Tree` `Depth-First Search` `Binary Search Tree` `Binary Tree`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 35 MB | 2026-03-30 | [link](https://leetcode.com/submissions/detail/1963694310/) |

## Problem

Given the `root` of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

As a reminder, a *binary search tree* is a tree that satisfies these constraints:

	- The left subtree of a node contains only nodes with keys **less than** the node's key.

	- The right subtree of a node contains only nodes with keys **greater than** the node's key.

	- Both the left and right subtrees must also be binary search trees.

**Example 1:**

![](https://assets.leetcode.com/uploads/2019/05/02/tree.png)

```
Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
```

**Example 2:**

```
Input: root = [0,null,1]
Output: [1,null,1]
```

**Constraints:**

	- The number of nodes in the tree is in the range `[0, 10^4]`.

	- `-10^4 <= Node.val <= 10^4`

	- All the values in the tree are **unique**.

	- `root` is guaranteed to be a valid binary search tree.

**Note:** This question is the same as 1038: [https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/)
