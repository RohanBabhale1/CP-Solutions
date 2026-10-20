# 2274B · Prefix

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** 1100 &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2274/problem/B)

**Topics:** `greedy`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 62 ms | 0 KB | 2026-10-11 | [link](https://codeforces.com/contest/2274/submission/394181809) |

## Problem

You are given an array $$$a_1, a_2, \ldots, a_n$$$.

For each index $$$i = 2, 3, \ldots, n$$$ in order, perform the following:

 - Define $$$s = a_1 + a_2 + \ldots + a_{i-1}$$$.
- Replace $$$a_i$$$ with one of the following three values: $$$a_i - s$$$, $$$a_i$$$, or $$$a_i + s$$$.

Over all possible choices, find the maximum value of $$$\max(a_1, a_2, \ldots, a_n)$$$ after the process described above.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 50$$$).

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-50 \le a_i \le 50$$$).

### Output

For each test case, output a single integer — the maximum achievable value of $$$\max(a_1, a_2, \ldots, a_n)$$$.

Please note that the answer for some test cases won't fit into a 32-bit integer type, so you should use at least a 64-bit integer type in your programming language (like long long in C++).

### Example

Input

```
453 -5 1 -4 22-1 231 2 33-2 -2 -2
```

Output

```
24374
```

### Note

In the first test case, the final array can be made $$$[3, -8, -4, -13, 24]$$$, so the answer is $$$24$$$.

In the second test case, for $$$i = 2$$$, $$$s = a_1 = -1$$$. Replacing $$$a_2$$$ with $$$a_2 - s = 2 - (-1) = 3$$$ gives the answer $$$3$$$.

In the third test case, the final array can be made $$$[1, 3, 7]$$$, so the answer is $$$7$$$.

In the fourth test case, replacing $$$a_2$$$ with $$$a_2 + s = -4$$$ makes $$$s = -6$$$ for $$$i = 3$$$. Replacing $$$a_3$$$ with $$$a_3 - s = -2 - (-6) = 4$$$ gives the final array $$$[-2, -4, 4]$$$, so the answer is $$$4$$$.
