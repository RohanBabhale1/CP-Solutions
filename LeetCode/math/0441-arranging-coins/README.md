# 0441 · Arranging Coins

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/arranging-coins/)

**Topics:** `Math` `Binary Search`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 8.8 MB | 2026-06-11 | [link](https://leetcode.com/submissions/detail/2029355522/) |

## Problem

You have `n` coins and you want to build a staircase with these coins. The staircase consists of `k` rows where the `i^th` row has exactly `i` coins. The last row of the staircase **may be** incomplete.

Given the integer `n`, return *the number of **complete rows** of the staircase you will build*.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/04/09/arrangecoins1-grid.jpg)

```
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/04/09/arrangecoins2-grid.jpg)

```
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
```

**Constraints:**

	- `1 <= n <= 2^31 - 1`
