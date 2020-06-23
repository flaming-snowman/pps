# Coins Ahoy
* **Difficulty:** Hard
* **Points:** 300
* **Problem Creator:** Jack Chang

## Problem

This time, instead of being the 69th smartest person or the 68th smartest person in your kingdom, you are King Asdgoiqjadsklfajsdfkl himself (don't ask how you switched bodies or how this happened, it's just like this now; sometimes life do be like that). You are really, really bored, and really, really rich. Using one of your guards as a random number generator (totally random) who gives you a non-negative integer N, and letting another guard randomly pick out some coins from your massive car-sized wallet, you want to count the minumum number of coins required to reach a sum of N (look what boredom's done to you).

In other words, you are given a target value N, a number V, and V different coins values. You need to figure out the minimum number of coins required to reach the target value N. Multiple of the same coin can be used, and coin values are guaranteed to be positive and distinct. If it isn't possible to reach the target value, output -1.

**Input Format**

Line 1 - N and V, separated by a space
Line 2 - V different numbers: The available coin values

**Constraints**

0 <= N <= 10 ^ 6
1 <= V <= 1000
1 <= V[i] <= 10 ^ 6

**Output Format**

Line 1 - the minimum number of coins required to reach the target value N

## Solution

Unfortunately, Jack recreated a very famous dp (dynamic programming) problem, with some contestants submitting copy pasted code.

The strategy is to loop through each sum, looping through each coin. For example, to reach a sum of 20, any sum of 15 plus a 5 valued coin is valid. See [here](https://www.geeksforgeeks.org/understanding-the-coin-change-problem-with-dynamic-programming/) for a longer explanation.
