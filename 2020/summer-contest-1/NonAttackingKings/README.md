# Non-Attacking Kings

* **Difficulty:** Medium
* **Points:** 100
* **Problem Creator:** Jason Liu

## Problem

You have N kings, which you must place on an NxN chessboard with exactly one king in each row and column such that no king is attacking another king (a king can attack any of the 8 adjacent cells). The chessboard contains obstacles where you cannot place a king.

**Input Format**

Line 1: N The next N lines contain N characters each, representing the chessboard with open spaces (.) and obstacles (\*).

**Constraints**

N <= 10

Output Format

A single number - the number of ways to place the kings

## Solution

The condition that there is exactly one king in each row and column leads to a permutation problem. There are N ways to place a king in the first row, N-1 in the second row (can't be same column as before), and so on. Since N<=10, an O(N!) solution works.

Using your permutation code of choice, permutation[i] represents the column of the (i+1)th king. Thus, adding code to ensure kings are not attacking and are not on an obstacle is the only thing left.

There is one tricky case to consider. Test case 12 has N=0. There is in fact one way to place your 0 kings on a 0 by 0 chessboard, which is by doing nothing. This may be unintuitive to anyone without counting and probability knowledge.
