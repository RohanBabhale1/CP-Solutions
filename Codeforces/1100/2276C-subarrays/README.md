# 2276C · Subarrays

**Platform:** Codeforces &nbsp;|&nbsp; **Rating:** 1100 &nbsp;|&nbsp; [Problem link](https://codeforces.com/contest/2276/problem/C)

**Topics:** `math` `number theory`

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 14-64, msys2)](./solution.cpp) | 78 ms | 3200 KB | 2026-10-14 | [link](https://codeforces.com/contest/2276/submission/394561523) |

## Problem

Monocarp has an array $$$a$$$ consisting of $$$n$$$ positive integers. He also has a favorite integer $$$k$$$ ($$$k  \lt  n$$$).

A sequence of consecutive elements of the array with indices from $$$l$$$ to $$$r$$$ ($$$1 \le l \le r \le n$$$) is called a subarray. Monocarp calls a subarray $$$k$$$-balanced if the following conditions hold:

 - the sum of all elements in the subarray from $$$l$$$ to $$$r$$$ inclusive is divisible by $$$k$$$;
- the length of this subarray is strictly greater than $$$k$$$ (that is, $$$r - l + 1  \gt  k$$$).

Help Monocarp determine the total number of $$$k$$$-balanced subarrays in the array $$$a$$$.

### Input

The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.

The descriptions of the test cases follow.

The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k  \lt  n \le 2 \cdot 10^5$$$) — the number of elements in the array $$$a$$$ and the number $$$k$$$.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of the array $$$a$$$.

Additional constraints on the input:

 - the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

### Output

For each test case, print one integer — the number of $$$k$$$-balanced subarrays in the array $$$a$$$.

### Example

Input

```
35 22 1 3 1 49 31 1 1 1 1 1 1 1 14 32 8 5 7
```

Output

```
250
```

### Note

In the first test case of the example, the suitable subarrays are:

 - $$$[2, 1, 3]$$$ (the sum of all elements $$$2 + 1 + 3 = 6$$$ is divisible by $$$2$$$);
- $$$[3, 1, 4]$$$ (the sum of all elements $$$3 + 1 + 4 = 8$$$ is divisible by $$$2$$$).

In the second test case, all elements are equal to $$$1$$$, and $$$k = 3$$$. The suitable subarrays have lengths $$$6$$$ and $$$9$$$: there are four subarrays of length $$$6$$$ and one subarray of length $$$9$$$, so the answer is $$$5$$$.

In the third test case, the only subarray of length strictly greater than $$$3$$$ is the entire array. Its sum is $$$22$$$, which is not divisible by $$$3$$$, so the answer is $$$0$$$.
