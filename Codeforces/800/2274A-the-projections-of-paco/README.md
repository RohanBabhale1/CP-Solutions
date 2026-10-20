# 2274A · The Projections of Paco

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** 800 &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2274/problem/A)

**Topics:** `dfs and similar` `dp` `hashing` `implementation` `math`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 46 ms | 0 KB | 2026-10-11 | [link](https://codeforces.com/contest/2274/submission/394178556) |

## Problem

You are given $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ representing points on a number line. Paco has a token that starts at coordinate $$$0$$$.

Reflecting the token about a point moves it to the other side of that point, keeping the same distance from it. If the token is already at that point, it stays there.

 ![](https://espresso.codeforces.com/d9f83dd023e5d17101574cd63956b3f58dc5bc89.png)   Paco's token (blue) being reflected about a point (red).

Choose an integer $$$p$$$. Paco's token is reflected about the points with coordinates $$$p, a_1, a_2, \ldots, a_n$$$, in this order, exactly once each.

Help Paco find $$$p$$$ such that his token ends at exactly coordinate $$$0$$$. This is very important for him. It can be shown that exactly one such integer exists.

### Input

Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$).

The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-10^4 \le a_i \le 10^4$$$).

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.

### Output

For each test case, print the integer $$$p$$$.

### Example

Input

```
51322 532 7 14-3 0 -3 010
```

Output

```
3-3-4-60
```

### Note

In the first test case, choose $$$p=3$$$. Paco's token moves from $$$0$$$ to $$$6$$$ and then back to $$$0$$$.

In the second test case, choose $$$p=-3$$$. Paco's token visits coordinates $$$0 \to -6 \to 10 \to 0$$$.

In the third test case, choose $$$p=-4$$$. Paco's token visits coordinates $$$0 \to -8 \to 12 \to 2 \to 0$$$.
