# Not-So-Simple Calculations (Hardish Math Revisited)

* **Difficulty:** Medium
* **Points:** 150
* **Problem Creator:** Jack Chang

## Problem

You have been tasked to solve a hardish math problem again! But this time, it's not so simple. You are given a positive integer N and N integers, and then N - 1 operations. Your task is to calculate the result after applying the operations to the N numbers. The only difference between this problem and Simple Calculations (Hardish Math) is that for this problem, you have to take the order of operations into account. Exponents take priority over everything. Then, multiplication, division, and mod are all of the same priority right under exponents; this means that you would calculate these from left to right after doing exponents. Lastly, addition and subtraction are of the same priority right under multiplication, division, and mod. The answer is guaranteed to be below 2 ^ 63.

**Input Format**

Line 1 - N
Line 2 - N integers
Line 3 - N - 1 operations, +, -, \*, /, %, or ^

**Constraints**

2 <= N <= 10 ^ 6
-10 ^ 9 <= N[i] <= 10 ^ 9

**Output Format**

Line 1 - The answer

## Solution

We know that most programs respect the order of operations. By abusing the Python eval command, we can simply feed the expression and have Python evaluate it for us. All we have to do is change some of the symbols to Python syntax.

The intended solution involved looping through the array of values 3 times. The first time, only evaluating exponents. The second time, only multiplication, division, and mod. The third time, addition and subtraction.

I have attached both solution methods
