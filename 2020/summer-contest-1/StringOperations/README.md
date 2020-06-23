# Problem Name

* **Difficulty:** Medium
* **Points:** 150
* **Problem Creator:** Jack Chang

## Problem

You are given positive integers N and M, and a string of length N. The string is guaranteed to consist of only lowercase letters. You can perform a certain operation on this string, where you remove exactly M consecutive letters. But, you can only use this operation if those M consecutive letters are all the same letter. After removing letters from the string, the parts of the string on both sides of the substring that you removed combine together to form a new, shorter string. Your task is to figure out the maximum number of operations that you can perform on this string.

**Input Format**

Line 1 - N and M, separated by a space
Line 2 - The string

**Constraints**

* Test cases 1-19: 1 <= M <= N <= 10^5

* Test cases 20-30: 1 <= M <= N <= 5\*10^7

* Test case 30 is an edge case

**Output Format**

Line 1 - The maximum number of possible operations

## Solution

The simplest solution is to repeatedly loop through the string, removing any consecutive M letters that are the same. When the string cannot be modified anymore, you are done. The python code is about as simple as it gets. However, this has O(n^2) worst case complexity. I added a few harder testcases so that this solution will fail, namely #30, which is the worst case.

The better solution is to maintain a stack of all the consecutive substrings, popping when it reaches length M. I have attached two solutions.
