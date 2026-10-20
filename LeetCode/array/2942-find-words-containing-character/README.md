# 2942 · Find Words Containing Character

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/find-words-containing-character/)

**Topics:** `Array` `String`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 32.9 MB | 2026-03-18 | [link](https://leetcode.com/submissions/detail/1951965205/) |

## Problem

You are given a **0-indexed** array of strings `words` and a character `x`.

Return *an **array of indices** representing the words that contain the character *`x`.

**Note** that the returned array may be in **any** order.

**Example 1:**

```
Input: words = ["leet","code"], x = "e"
Output: [0,1]
Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.
```

**Example 2:**

```
Input: words = ["abc","bcd","aaaa","cbc"], x = "a"
Output: [0,2]
Explanation: "a" occurs in "abc", and "aaaa". Hence, we return indices 0 and 2.
```

**Example 3:**

```
Input: words = ["abc","bcd","aaaa","cbc"], x = "z"
Output: []
Explanation: "z" does not occur in any of the words. Hence, we return an empty array.
```

**Constraints:**

	- `1 <= words.length <= 50`

	- `1 <= words[i].length <= 50`

	- `x` is a lowercase English letter.

	- `words[i]` consists only of lowercase English letters.
