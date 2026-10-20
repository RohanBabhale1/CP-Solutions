# 0771 · Jewels and Stones

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/jewels-and-stones/)

**Topics:** `Hash Table` `String`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 8.3 MB | 2026-03-24 | [link](https://leetcode.com/submissions/detail/1957947827/) |

## Problem

You're given strings `jewels` representing the types of stones that are jewels, and `stones` representing the stones you have. Each character in `stones` is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so `"a"` is considered a different type of stone from `"A"`.

**Example 1:**

```
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
```

**Example 2:**

```
Input: jewels = "z", stones = "ZZ"
Output: 0
```

**Constraints:**

	- `1 <= jewels.length, stones.length <= 50`

	- `jewels` and `stones` consist of only English letters.

	- All the characters of `jewels` are **unique**.
