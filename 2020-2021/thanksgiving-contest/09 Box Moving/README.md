# Box Moving

* **Difficulty:** Hard
* **Points:** 450
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/box-movingg

## Solution

This is a pretty straightforward prefix sums problem. For each query, we need to calculate two things: the combined weight of boxes in the given range, and how much the mover can lift. The combined weight of the boxes in any range can be computed in O(1) time by using a prefix sum array. The amount the mover can lift is just a singular math expression. This gives us a solution in linear time.
