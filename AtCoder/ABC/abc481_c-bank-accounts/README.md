# abc481_c · Bank Accounts

**Platform:** AtCoder &nbsp;|&nbsp; **Contest type:** ABC &nbsp;|&nbsp; [Problem link](https://atcoder.jp/contests/abc481/tasks/abc481_c)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++23 (GCC 15.2.0)](./solution.cpp) | 169 ms | 19316 KiB | 2026-10-24 | [link](https://atcoder.jp/contests/abc481/submissions/80320744) |

## Problem

Score : 300 points

Problem Statement

In the backyard of Kowasugi Bank, ghosts are growing pumpkins. You have decided to open bank accounts for the pumpkins.

When a bank account for a pumpkin is opened, it is assigned one name and one ID. The ID is chosen as the smallest positive integer that is not yet used as an ID.

Initially, no bank accounts for pumpkins have been opened. The following event occurs Q times; process them in order.

- A pumpkin comes and introduces itself with the name s.

- If there is an account assigned the name s, print its ID.

- If there is no account assigned the name s, open one new account with the name s and print its ID.

Constraints

- Q is an integer between 1 and 2 \times 10^5, inclusive.

- In each event, s is a string of length between 1 and 10, inclusive, consisting of lowercase English letters.

Input

The input is given from Standard Input in the following format:

```
Q
\mathrm{query}_1
\vdots
\mathrm{query}_Q
```

\mathrm{query}_i represents the i-th event and is given in the following format:

```
s
```

Output

Print Q lines. The i-th line should contain the value to be printed in the i-th event.

Sample Input 1

```
8
pumpkin
hobak
pompoen
hobak
pumpkin
boga
boga
hobak
```

Sample Output 1

```
1
2
3
2
1
4
4
2
```

The events proceed as follows.

- In the 1-st event, a new account with the name `pumpkin` and ID 1 is opened.

- In the 2-nd event, a new account with the name `hobak` and ID 2 is opened.

- In the 3-rd event, a new account with the name `pompoen` and ID 3 is opened.

- In the 4-th event, an account with the name `hobak` already exists, and its ID is 2.

- In the 5-th event, an account with the name `pumpkin` already exists, and its ID is 1.

- In the 6-th event, a new account with the name `boga` and ID 4 is opened.

- In the 7-th event, an account with the name `boga` already exists, and its ID is 4.

- In the 8-th event, an account with the name `hobak` already exists, and its ID is 2.

Sample Input 2

```
7
joayo
joayo
joayo
joayo
joayo
joayo
joayo
```

Sample Output 2

```
1
1
1
1
1
1
1
```
