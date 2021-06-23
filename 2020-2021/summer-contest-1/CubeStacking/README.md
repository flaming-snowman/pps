# Cube Stacking

* **Difficulty:** Medium
* **Points:** 200
* **Problem Creator:** Jack Chang and Jason Liu

## Problem

You're a baby, but somehow your IQ is above 0. Today, you're playing with cubes. To be more specific, you have N cubes. With your 20/20 vision, you can tell the size of a cube just by looking at it (the size of a cube is measured with a single positive integer, don't ask how tf you got that single number with no unit as a size). You plan to create stacks of cubes, but you want to keep the number of stacks of cubes to a minumum. But, you can only place a cube onto another cube in an existing stack if the size of that cube is at least two smaller than the size of the cube you're trying to place it on. You must also go through the cubes in a certain order: from closest to you to farthest from you. Given the non-negative integer N and N cube sizes in the order that you have to "process" them, what is the minumum number of stacks of cubes that you need?

**Input Format**

Line 1 - N
Line 2 - N values, separated by a space each

**Constraints**

0 <= N <= 10 ^ 6
1 <= N[i] <= 10 ^ 9

**Output Format**

Line 1 - the minumum number of stacks possible

## Solution

The solution is a greedy algorithm combined with binary search. If possible, it is possible to stack a cube on top of the smallest cube that is still at least 2 smaller than it. Otherwise, create a new stack. Several solutions are included.
