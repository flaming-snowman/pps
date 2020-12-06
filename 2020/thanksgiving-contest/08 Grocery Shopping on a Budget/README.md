# Grocery Shopping on a Budget

* **Difficulty:** Medium
* **Points:** 400
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/grocery-shopping-on-a-budget

## Solution

Looking at the constraints, we can get 2/3 of the testcases with an O(N^M) solution. The naive solution is to consider for each of the M groceries, which of the N stores you buy it at. This gives an O(N^M) solution by bruteforcing every combination. We cannot simply buy each grocery at the store its cheapest at because of the travel cost. Thus, we must consider every possibility.

However, we can do better. Instead, we consider which stores we will travel to. Since there are 10 stores, and we either go to a store or don't, there are 2^10=1024 possible combinations of stores. This is a very manageable number. For each combination of stores, we minimize the grocery cost by buying each grocery at the store where it is cheapest. This results in an O(NM 2^N) algorithm, which runs fast enough given our constraints.
