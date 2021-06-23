# Greatest Factors (Harder Math)

* **Difficulty:** Easy
* **Points:** 40
* **Problem Creator:** Jack Chang 

## Problem

You have been tasked to solve an even harder math problem! For this problem, you are given a positive integer N, a positive integer M, and a positive prime integer K. Your task is to multiply the M highest factors of N. You have to output the remainder of the answer when divided by K (answer MOD K). It is guaranteed that N has at least M factors.

**Input Format**

Line 1 - N, M, and K, separated by a space each

**Constraints**

2 <= N <= 10 ^ 12
1 <= M <= 1000, N is guaranteed to have at least M factors
2 <= K < 10 ^ 10, K is prime

**Output Format**

Line 1 - The answer to the problem

## Solution

The key observation here is that N is large, so we will require an O(sqrt n) solution to not exceed the time limit. Luckily, we can perform factorizations in O(sqrt n). If we have ab=n, then one of a,b has to be less than or equal to sqrt(n).

From here, we simply add all the factors to a list, sort them, and mulitply out the answer.

Note: with the given problem constraints, it is possible for the answer to exceed 64 bits, which would require even longer integers. Luckily, the testcases did not have answers that exceeded 64 bits.
