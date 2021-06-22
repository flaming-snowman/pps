# Bob The Chicken

* **Difficulty:** Hard
* **Points:** 250
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-summer-contest-2/challenges/bob-the-chicken

## Solution

This problem can be solved using multisource bfs. Bruteforcing the N possible starting choices and using bfs for the shortest path is not efficient enough, as each bfs takes up to O(N^2) time, for a total runtime of O(N^3). Instead, we use multisource bfs and push all the starting choices onto the queue at the start. The bruteforce solution was still able to gain more than half of the testcases. Remember to always go for partial credit!
