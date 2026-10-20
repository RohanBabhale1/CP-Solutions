# 0227 · Basic Calculator II

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Medium &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/basic-calculator-ii/)

**Topics:** `Math` `String` `Stack`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 4 ms | 11.9 MB | 2026-06-09 | [link](https://leetcode.com/submissions/detail/2027119063/) |

## Problem

Given a string `s` which represents an expression, *evaluate this expression and return its value*.

The integer division should truncate toward zero.

You may assume that the given expression is always valid. All intermediate results will be in the range of `[-2^31, 2^31 - 1]`.

**Note:** You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as `eval()`.

**Example 1:**

```
Input: s = "3+2*2"
Output: 7
```

**Example 2:**

```
Input: s = " 3/2 "
Output: 1
```

**Example 3:**

```
Input: s = " 3+5 / 2 "
Output: 5
```

**Constraints:**

	- `1 <= s.length <= 3 * 10^5`

	- `s` consists of integers and operators `('+', '-', '*', '/')` separated by some number of spaces.

	- `s` represents a valid expression.

	- All the integers in the expression are non-negative integers in the range `[0, 2^31 - 1]`.

	- The answer is **guaranteed** to fit in a **32-bit integer**.
