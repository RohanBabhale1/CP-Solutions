# abc480_e · Product-Bounded Arithmetic Sequences

**Platform:** AtCoder &nbsp;|&nbsp; **Contest type:** ABC &nbsp;|&nbsp; [Problem link](https://atcoder.jp/contests/abc480/tasks/abc480_e)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 15.2.0)](./solution.cpp) | 193 ms | 3608 KiB | 2026-10-20 | [link](https://atcoder.jp/contests/abc480/submissions/80126452) |

## Problem

Score : 450 points

Problem Statement

A sequence of positive integers A=(A_1,\dots,A_{|A|}) is called a **good sequence** if it satisfies all of the following conditions.

- |A|\geq 3

- A is an arithmetic progression; that is, A_{i+1}-A_{i}=A_2-A_1 for all 1 \leq i \leq |A|-1.

- A_2-A_1 > 0

Find the number of good sequences such that the product of all elements is at most N.

It can be proved that the answer is at most 10^{18} under the constraints.

Constraints

- 1 \leq N \leq 10^{18}

- N is an integer.

Input

The input is given from Standard Input in the following format:

```
N
```

Output

Print the answer.

Sample Input 1

```
120
```

Sample Output 1

```
18
```

There are 4 good sequences whose product is at most 24: (1,2,3),(1,2,3,4),(1,3,5),(2,3,4).

Sample Input 2

```
1000000000000000000
```

Sample Output 2

```
1051148114007
```
