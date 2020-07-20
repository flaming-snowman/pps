# Cutting Sticks (Hard Math)

* **Difficulty:** Easy
* **Points:** 30
* **Problem Creator:** Jack Chang 

## Problem

You have been tasked to solve a hard math problem! For this problem, you are given a non-negative integer N and the lengths of N sticks. You are also given an integer M. You can perform cuts that break a piece of up to length M off of the end of a stick, and you must continue cutting until there are no sticks remaining with length greater than M. Your task is to calculate the minimum number of cuts required to do this.

**Input Format**

Line 1 - N and M, separated by a space
Line 2 - N positive integers, the lengths of the sticks

**Constraints**

1 <= N, M <= 10 ^ 7 1 <= N[i] <= 10 ^ 9

**Output Format**

Line 1 - The minimum number of cuts needed

## Solution

This problem is a nice and easy math question. If we have a stick of length 10 and we want to split it up into pieces of length 3 or less. We need 3 cuts. If we have a stick of length 9, we would only need 2 cuts. If our stick is length L and our pieces are up to length M, then the number of cuts needed is (L-1)/M. It may be easier to consider in cases whether the last piece is "full" or not, as used in the Python solution.
