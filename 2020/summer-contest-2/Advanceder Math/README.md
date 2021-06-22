# Advanceder Math

* **Difficulty:** Medium
* **Points:** 200
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-summer-contest-2/challenges/advanceder-math

## Solution

Each A[i] only goes up to 6208. The number of distinct A[i] is much less than the size of A which is N. It is possible to compute and store the exponential sum of all numbers 0 to 6208 in one loop. This precomputation is crucial for efficiently calculating the answer. After precomputation, the answer is attained by adding up the stored exponential sum values for each A[i].
