# 0412 · Fizz Buzz

**Platform:** LeetCode &nbsp;|&nbsp; **Difficulty:** Easy &nbsp;|&nbsp; [Problem link](https://leetcode.com/problems/fizz-buzz/)

**Topics:** `Math` `String` `Simulation`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | 1 ms | 11.9 MB | 2026-06-19 | [link](https://leetcode.com/submissions/detail/2038498783/) |

## Problem

Given an integer `n`, return *a string array *`answer`* (**1-indexed**) where*:

	- `answer[i] == "FizzBuzz"` if `i` is divisible by `3` and `5`.

	- `answer[i] == "Fizz"` if `i` is divisible by `3`.

	- `answer[i] == "Buzz"` if `i` is divisible by `5`.

	- `answer[i] == i` (as a string) if none of the above conditions are true.

**Example 1:**

```
Input: n = 3
Output: ["1","2","Fizz"]
```

**Example 2:**

```
Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
```

**Example 3:**

```
Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
```

**Constraints:**

	- `1 <= n <= 10^4`
