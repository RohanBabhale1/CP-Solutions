# 0171 · Excel Sheet Column Number

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/excel-sheet-column-number/)

**Topics:** `Math` `String`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 8.8 MB | 2026-04-14 | [link](https://leetcode.com/submissions/detail/1978309097/) |

## Problem

Given a string `columnTitle` that represents the column title as appears in an Excel sheet, return *its corresponding column number*.

For example:

```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...
```

**Example 1:**

```
Input: columnTitle = "A"
Output: 1
```

**Example 2:**

```
Input: columnTitle = "AB"
Output: 28
```

**Example 3:**

```
Input: columnTitle = "ZY"
Output: 701
```

**Constraints:**

	- `1 <= columnTitle.length <= 7`

	- `columnTitle` consists only of uppercase English letters.

	- `columnTitle` is in the range `["A", "FXSHRXW"]`.
