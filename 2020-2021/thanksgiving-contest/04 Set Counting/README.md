# Set Counting

* **Difficulty:** Medium
* **Points:** 200
* **Problem Creator:** Jason Liu

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/set-counting

## Solution

We check every group of three cards and see if they form a set. If they do, we increment our sum. However, we must make sure to avoid overcounting. The easiest way to check every triple of cards is three nested for loops. There is also a Python import that allows for generating combinations.
