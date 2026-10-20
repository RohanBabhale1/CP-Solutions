# LEREO · Learning Resource Optimization

**Platform:** CodeChef &nbsp;|&nbsp; **Difficulty:** 2316 &nbsp;|&nbsp; [Problem link](https://www.codechef.com/problems/LEREO)

## Accepted solutions

| Language | Runtime | Memory | Date | Submission |
| --- | --- | --- | --- | --- |
| [C++](./solution.cpp) | — | — | 2026-10-20 | [link](https://www.codechef.com/viewsolution/1377239961) |

## Problem

As everybody knows, Reza Shiri is the favourite Iranian artist. Since we love Reza Shiri and his songs, we never download them for free. Reza Shiri’s songs must be purchased from authorised stores. However, what if there is not enough money to buy all the songs?

There are $N$ songs (numbered $1$ through $N$) and $M$ albums (numbered $1$ through $M$) available. For each valid $i$, the $i$-th song has *greatness* $v_i$, price $p_i$ and belongs to the album $a_i$. For each valid $i$, the $i$-th album has price $b_i$. If we buy an album, then all songs from this album count as bought. It is also possible to buy any songs individually.

Your task is simple ― given the budget $P$ (the amount of money we have), calculate the maximum total greatness of songs we can buy. The total greatness is defined as the sum of greatness values of all distinct songs that are bought (either individually or as part of albums).

### Input
- The first line of the input contains three space-separated integers $N$, $M$ and $P$.
- $N$ lines follow. For each $i$ ($1 \le i \le N$), the $i$-th of these lines contains three space-separated integers $a_i$, $p_i$ and $v_i$.
- The last line contains $M$ space-separated integers $b_1, b_2, \ldots, b_M$.

### Output
Print a single line containing one integer ― the maximum total greatness of songs we can afford to buy.

### Constraints
- $1 \le N, M, P \le 1,000$
- $1 \le b_i, p_i \le P$ for each valid $i$
- $1 \le v_i \le 10^6$ for each valid $i$
- $1 \le a_i \le M$ for each valid $i$

### Example Input
```
5 2 24
1 7 2
1 5 2
1 4 1
2 9 1
2 13 2
10 15
```

### Example Output
```
7
```

All submissions for this problem are available.

**Time limit:** 1 s
