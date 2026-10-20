# 2703 · Return Length of Arguments Passed

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/return-length-of-arguments-passed/)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [JavaScript](./solution.js) | 41 ms | 53.1 MB | 2026-03-28 | [link](https://leetcode.com/submissions/detail/1961717066/) |

## Problem

Write a function `argumentsLength` that returns the count of arguments passed to it.

**Example 1:**

```
Input: args = [5]
Output: 1
Explanation:
argumentsLength(5); // 1

One value was passed to the function so it should return 1.
```

**Example 2:**

```
Input: args = [{}, null, "3"]
Output: 3
Explanation:
argumentsLength({}, null, "3"); // 3

Three values were passed to the function so it should return 3.
```

**Constraints:**

	- `args` is a valid JSON array

	- `0 <= args.length <= 100`
