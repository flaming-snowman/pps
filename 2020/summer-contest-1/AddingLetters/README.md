# Adding Letters

* **Difficulty:** Easy
* **Points:** 50

## Problem

Given a positive integer N, a positive integer M, and a string of length N, calculate the sum of the string.

For each letter in the string, the letter has a value equivalent to if you counted up from the first letter ("A"), but you started counting from the value M. For example, if M was 5, then the letter C would have a value of 7, since "A" = 5, "B" = 6, and "C" = 7. If M was 1, then the letter C would have a value of 3, and the letter Z would have a value of 26.

For each number in the string, assume that they are counted after Z. For example, if "Z" = 26, then "0" = 27, "1" = 28, "2" = 29, "5" = 32, etc. Each number will be in the range of 0 - 9, since every part of the string is single-digit and is counted individually.

Letters are not case-sensitive. If "A" = 3, then "a" = 3 as well.
If all of this is confusing, try looking at the sample testcases.

**Input Format**

Line 1 - N and M, separated by a space
Line 2 - the string of length N

**Constraints**

0 <= N <= 10 ^ 6
-10 ^ 9 <= M <= 10 ^ 9

**Output Format**

Line 1 - the sum of the string

## Solution

We handle numbers and letters separately. The shift can be accounted for at the beginning or the end.

Solution 1: Use ASCII values of the letters. Make sure to shift accordingly

Solution 2: Use a map to assign each character to a numerical value.
