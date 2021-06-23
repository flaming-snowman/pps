# Simple Calculations (Hardish Math)

* **Difficulty:** Easy
* **Points:** 20
* **Problem Creator:** Jack Chang 

## Problem

Problem statement

You have been tasked to solve a hardish math problem! For this problem, you are given a positive integer N and N integers. Then, you are given N - 1 operations. Your task is to output the result of completing these operations between the integers. For this problem, do not follow the order of operations; instead, do the operations in order one by one from the left to the right. It is guaranteed the answer will not exceed 2 ^ 63. The operations given will either be "+" (addition), "-" (subtraction), "\*" (multiplication), "/" (division), "%" (mod), or "^" (exponent). When doing division, round down the quotient.

In-contest clarification:
1) -2 % 5 = 3 and not -2
2) if a decimal is attained during exponentiation round it down (as in division)

**Input Format**

Line 1 - N
Line 2 - N integers
Line 3 - N - 1 operations, either +, -, \*, /, %, or ^

**Constraints**

2 <= N <= 10 ^ 6
-10 ^ 9 <= N[i] <= 10 ^ 9

**Output Format**

Line 1 - The answer after completing the operations in order

## Solution

This problem is a pretty straightforward loop and a few if statements to perform each operation. Remember to use long integers for this one.

The only problem was that exponents are really, really, really, really slow in Python, and competitiors who did not use custom functions struggled with the time limit. Solutions in Java and C++ did not encounter this issue.
