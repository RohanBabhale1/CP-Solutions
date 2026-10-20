# 0678 · Valid Parenthesis String

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Medium &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/valid-parenthesis-string/)

**Topics:** `String` `Dynamic Programming` `Stack` `Greedy` `Bracket Sequences`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 8 MB | 2026-10-04 | [link](https://leetcode.com/submissions/detail/2161551179/) |

## Problem

Given a string `s` containing only three types of characters: `'('`, `')'` and `'*'`, return `true` *if* `s` *is **valid***.

The following rules define a **valid** string:

	- Any left parenthesis `'('` must have a corresponding right parenthesis `')'`.

	- Any right parenthesis `')'` must have a corresponding left parenthesis `'('`.

	- Left parenthesis `'('` must go before the corresponding right parenthesis `')'`.

	- `'*'` could be treated as a single right parenthesis `')'` or a single left parenthesis `'('` or an empty string `""`.

**Example 1:**

```
Input: s = "()"
Output: true
```

**Example 2:**

```
Input: s = "(*)"
Output: true
```

**Example 3:**

```
Input: s = "(*))"
Output: true
```

**Example 4:**

```
Input: s = "("
Output: false
```

**Constraints:**

	- `1 <= s.length <= 100`

	- `s[i]` is `'('`, `')'` or `'*'`.
