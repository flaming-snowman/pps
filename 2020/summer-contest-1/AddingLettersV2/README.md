# Adding Letters v2

* **Difficulty:** Easy
* **Points:** 50
* **Problem Creator:** Jack Chang

## Problem

This is the same problem as Adding Letters (v1), but instead of counting up by ones, you are given an increment value between letters (and numbers).

You are given a positive integer N, a positive integer M, a positive integer K, and a string of length N. Once again, you have to calculate the sum of the string. The letter A still has a value of M. But this time, when you are counting up from A, each letter's value increments by K instead of by 1 (though K could be equal to 1). For example, if M = 3 and K = 2, then "A" = 3, "B" = 5, "C" = 7, "D" = 9, "E" = 11, etc, since you count up by 2 instead of 1.

The same thing applies to numbers. If "Z" = 26 and K = 5, then "0" = 31, "1" = 36, "2" = 41, etc.

Letters from input might be lowercase or uppercase; they are the same. If "A" = 3, then "a" = 3 as well.

If all of this is confusing, try looking at the sample testcases.

**Input Format**

Line 1 - N, M, and K respectively, separated with a space in between each Line 2 - the string of length N

**Constraints**

0 <= N <= 10 ^ 6 -10 ^ 6 <= M <= 10 ^ 6 -1000 <= K <= 1000, K ≠ 0

**Output Format**

Line 1 - the sum of the string

## Solution

Essentially the same problem as v1, except we add a little bit of math to account for the increments.
