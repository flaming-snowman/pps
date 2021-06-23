# Advanced Math

* **Difficulty:** Easy
* **Points:** 10
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-summer-contest-2/challenges/advanced-math

## Solution

For this problem, simply multiply the numbers one by one and remember to mod as you go. Taking the mod at the end is inefficient because multiplying large numbers is slower. For this problem, the final answer must be positive, so languages where mod can be negative should make sure to account for this. Beware of the special case where N = 0 and make sure to handle it separately.
