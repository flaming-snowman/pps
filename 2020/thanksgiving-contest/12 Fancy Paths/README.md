# Fancy Paths

* **Difficulty:** Hard
* **Points:** 600
* **Problem Creator:** Jason Liu

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/fancy-paths/

## Solution

The extremely low constraints tells us that we'll probably need to use some amount of brute forcing. Normally, we could just use a breadth/depth first search. However, the common divisor condition makes it much trickier. We cannot simply mark a vertex as visited as in a normal bfs/dfs because the edge leading to the vertex matters. Reaching a vertex through an edge of weight 2 and 3 are different, and must be calculated separately. Thus, we must maintain a separate visited array for each and every path, brute forcing every possible valid path to find the shortest one. We modify our bfs/dfs to also take a visited array as a parameter, which will be independent for each path. This makes the runtime very slow, but also produces a working program sufficient given the low problem constraints.
