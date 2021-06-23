# Count C's v3 (The Finale) Revisited

* **Difficulty:** Medium
* **Points:** 100
* **Problem Creator:** Jack Chang 

## Problem

Given a non-negative integer N and a string of length N consisting of only uppercase letters, count the greatest possible size of all the "C's" in the string. A "C" isn't just the letter C; "SEE" and "SEA" both count as a "C" as well, since they are pronounced the same way. In fact, if the letter S is followed by a sequence of E's and then a sequence of A's, or just multiple E's, then it counts as a "C". For example, "SEAA", "SEEAA", "SEEEA", and "SEEEE" are all valid "C's". Your task is to output the greatest possible length of all "C's" within the string. You cannot double count "C's". For example, if you have the string "SEEAA", the maximum size of "C's" would be 5, which is the whole string. It wouldn't be 8, since you cannot count "SEE" and then "SEEAA" as separate "C's". If this is confusing, look at the sample testcase.

**Input Format**

Line 1 - N
Line 2 - The string of length N

**Constraints**

0 <= N <= 10 ^ 6 

**Output Format**

Line 1 - The answer

## Solution

We consider this in cases. We "build" our C's and increase our sum for each C. If we have the single letter C, then we add to our count. If we have an S, then we might be able to form a "SEE" or "SEA". Notice that all variatons of SEE and SEA must start with SE. If this condition is met, then future E's and A's count towards our sum (as long as the initial 2 from SE). Note that an E coming after an A does not count towards our sum.

With these in mind, we can code up a solution. Try to make sense of the code if this explanation isn't fully clear.

(For this problem, we even had someone submit a RegEx solution!)
