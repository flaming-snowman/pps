# Weight Ordering

* **Difficulty:** Medium
* **Points:** 250
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/weight-ordering

## Solution

We calculate the weight of each box and sort them by their weights. However, we must retain the information about their original position. We can do this by sorting a list of arrays of length 2, each containing the weight of the box, and the box's position. In the case of two boxes having the same weight, we want the box with the lower position first. Most built-in sorts do this anyways, and sorting by only the weight is also sufficient, as most built-in sorts are stable, meaning they preserve the original order in case of ties.
