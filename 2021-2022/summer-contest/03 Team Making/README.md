# Team Making

* **Difficulty:** Medium
* **Points:** 200
* **Problem Creator:** Luke Qiao

## Problem

https://www.hackerrank.com/contests/pps-summer-contest-2021/challenges/team-making-1

## Solution

The approach to this problem is a greedy algorithm. First notice that if a team of 1 is "smart" enough, it is always optimal to keep it as a team of 1. Then, we want to pair members with large and small values together to form the remaining teams. This is doable by keeping two pointers for the endpoints and incrementing/decrementing them appropriately.
