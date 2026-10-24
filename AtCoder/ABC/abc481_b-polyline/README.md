# abc481_b · Polyline

**Platform:** AtCoder &nbsp;|&nbsp; **Contest type:** ABC &nbsp;|&nbsp; [Problem link](https://atcoder.jp/contests/abc481/tasks/abc481_b)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 15.2.0)](./solution.cpp) | 1 ms | 3592 KiB | 2026-10-24 | [link](https://atcoder.jp/contests/abc481/submissions/80319299) |

## Problem

Score : 200 points

Problem Statement

There are N points on the xy-plane, numbered 1,2,\ldots,N. The coordinates of point i are (i,A_i).

For i=1,2,\ldots,N-1, connect point i and point i+1 with a line segment to form one polyline.

Find the number of points on this polyline (including its endpoints) whose y-coordinate is K.

Here, the constraints guarantee that the number of points satisfying the condition is finite.

Constraints

- 2 \le N \le 100

- 1 \le A_i \le 100 (1 \le i \le N)

- A_i \ne A_{i+1} (1 \le i < N)

- 1 \le K \le 100

- All input values are integers.

Input

The input is given from Standard Input in the following format:

```
N K
A_1 A_2 \ldots A_N
```

Output

Print the number of points on the polyline whose y-coordinate is K.

Sample Input 1

```
5 3
1 3 1 5 1
```

Sample Output 1

```
3
```

As shown in the figure below, there are 3 points satisfying the condition: (2,3), (\frac{7}{2},3), and (\frac{9}{2},3).

Note that the point (2,3) is a common endpoint of the segment connecting points 1 and 2 and the segment connecting points 2 and 3, but it is counted as one point.

![](https://img.atcoder.jp/abc481/6b091bccaf9c134909377119703ded9f.png)

Sample Input 2

```
3 3
3 1 3
```

Sample Output 2

```
2
```

There are 2 points satisfying the condition: (1,3) and (3,3). Note that the points at the ends of the polyline are also counted.

Sample Input 3

```
2 100
1 2
```

Sample Output 3

```
0
```
