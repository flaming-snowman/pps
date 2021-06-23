# Insane Math

* **Difficulty:** Easy
* **Points:** 10
* **Problem Creator:** Jack Chang

## Problem

King Asdgoiqjadsklfajsdfkl has invited you to his palace upon hearing that you were the 69th smartest person living in his kingdom. He has now presented you with the problem below:

Given a non-negative integer N and N integers, return the sum of all those N numbers.

Solve the problem quickly if you don't want King Asdgoiqjadsklfajsdfkl to eat you for his midnight snack tomorrow! (Or maybe he'll save you for 3:00 AM tea)

**Input Format**

Line 1 - N
Line 2 - N integers, each separated by a space

**Constraints**

0 <= N <= 10 ^ 5
-10 ^ 9 <= N[i] <= 10 ^ 9

**Output Format**

Line 1 - The sum of all N numbers

## Solution

A classic problem with a simple solution. Simply add the numbers. 

A note for Python users: Hackerrank produces a runtime error if you try to use input() after there is no more input. For N=0, there is no second line of input, this caused 4 contestants problems. An if statement should be used to handle N=0 separately.
