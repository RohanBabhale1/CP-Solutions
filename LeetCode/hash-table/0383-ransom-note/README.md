# 0383 · Ransom Note

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/ransom-note/)

**Topics:** `Hash Table` `String` `Counting`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 0 ms | 11.8 MB | 2026-04-29 | [link](https://leetcode.com/submissions/detail/1990725851/) |

## Problem

Given two strings `ransomNote` and `magazine`, return `true`* if *`ransomNote`* can be constructed by using the letters from *`magazine`* and *`false`* otherwise*.

Each letter in `magazine` can only be used once in `ransomNote`.

**Example 1:**

```
Input: ransomNote = "a", magazine = "b"
Output: false
```

**Example 2:**

```
Input: ransomNote = "aa", magazine = "ab"
Output: false
```

**Example 3:**

```
Input: ransomNote = "aa", magazine = "aab"
Output: true
```

**Constraints:**

	- `1 <= ransomNote.length, magazine.length <= 10^5`

	- `ransomNote` and `magazine` consist of lowercase English letters.
