# Count Fees v3 (The Finale)

* **Difficulty:** Hard
* **Points:** 500
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/count-fees-v2/problem

## Solution

It's another prefix sums problem, but with more steps. It is unknown when switching from Es to As is optimal. Thus, we keep a prefix sum for the number of As at each position, and test every possible position where we switch from Es to As to find the maximal length. A prefix sum is neccessary here due to the large constraints. We also need to do this calculation starting with an F and starting with a PH separately. Remember to exclude strings that are not a valid "FEE".
