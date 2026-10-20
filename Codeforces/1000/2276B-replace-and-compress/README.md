# 2276B · Replace and Compress

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** 1000 &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2276/problem/B)

**Topics:** `implementation` `strings`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 46 ms | 1000 KB | 2026-10-14 | [link](https://codeforces.com/contest/2276/submission/394552687) |

## Problem

You are given a string $$$s$$$ of length $$$n$$$ consisting of the characters 0 and/or 1. You need to perform exactly one operation consisting of two steps:

 - choose at most one character with index from $$$2$$$ to $$$n-1$$$ inclusive and replace it with the opposite one: 0 to 1 or 1 to 0. You may choose not to change any character. The first and the last characters of the string cannot be changed;
- replace each maximal block of consecutive equal characters with one such character.

A block is called maximal if it cannot be extended to the left or to the right by adding the same character. For example, after the second step, the string 100111011 will become 10101.

Count the number of different strings that can be obtained after performing this operation.

### Input

The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.

Each test case consists of one line containing a string $$$s$$$ ($$$3 \le |s| \le 3 \cdot 10^5$$$) consisting only of the characters 0 and 1.

Additional constraints on the input:

 - the sum of the lengths of strings $$$s$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.

### Output

For each test case, print one integer — the number of different strings that can be obtained after performing the operation.

### Example

Input

```
7001000010000101001110110010110101111
```

Output

```
1223322
```

### Note

In the first test case, you may choose not to change any character or replace the second character. Before compression, the resulting strings are 001 and 011, respectively. After compression, both strings become 01, so the answer is $$$1$$$.

In the fifth test case:

 - if no character is changed, after compression we get 10101;
- if the second character is replaced, we get 110111011, and after compression — 10101;
- if the fifth character is replaced, we get 100101011, and after compression — 1010101;
- if the seventh character is replaced, we get 100111111, and after compression — 101.

In total, three different strings can be obtained: 101, 10101, and 1010101.
