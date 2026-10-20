# 2769 · Find the Maximum Achievable Number

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/find-the-maximum-achievable-number/)

**Topics:** `Math`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 9.5 MB | 2026-03-14 | [link](https://leetcode.com/submissions/detail/1948264097/) |

## Problem

Given two integers, `num` and `t`. A **number **`x`** **is** achievable** if it can become equal to `num` after applying the following operation **at most** `t` times:

	- Increase or decrease `x` by `1`, and *simultaneously* increase or decrease `num` by `1`.

Return the **maximum **possible value of `x`.

**Example 1:**

**Input:** num = 4, t = 1

**Output:** 6

**Explanation:**

Apply the following operation once to make the maximum achievable number equal to `num`:

	- Decrease the maximum achievable number by 1, and increase `num` by 1.

**Example 2:**

**Input:** num = 3, t = 2

**Output:** 7

**Explanation:**

Apply the following operation twice to make the maximum achievable number equal to `num`:

	- Decrease the maximum achievable number by 1, and increase `num` by 1.

**Constraints:**

	- `1 <= num, t <= 50`
