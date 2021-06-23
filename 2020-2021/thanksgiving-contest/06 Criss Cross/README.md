# Criss Cross

* **Difficulty:** Medium
* **Points:** 300
* **Problem Creator:** Jason Liu

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/criss-cross-1

## Solution

The key observation is to notice when 2 lines cross. Let line 1 be the line connecting the 1s and line 2 be the line connecting the 2s. Line 1 and line 2 cross if and only if the number 2 appears before 1 in the input. Essentially, we are counting the number of inversions in the input.

We can do this by looping through every pair of numbers and checking if they are out of order. This solution runs in O(n^2) time. There are also several ways to count inversions in O(n log n) time. I have included a solution using a binary indexed tree.
