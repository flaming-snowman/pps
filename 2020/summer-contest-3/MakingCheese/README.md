# Making Cheese

* **Difficulty:** Medium
* **Points:** 200
* **Problem Creator:** Jack Chang 

## Problem

You are an expert cheese maker! Given just milk, you can produce tremendous amounts of cheese with a secret technique you have perfected over the years. You run N different shops/restaurants, and you have taught your secret technique to the cheesemaker at each of these shops/restaurants. At each restaurant, you have an unlimited supply of milk. Since some people were better students than others, each of the cheesemakers can produce a different amount of cheese given a certain amount of milk. For each cheesemaker, you are given a positive integer K, which is their "cheese mod", and a non-negative integer X, which is their "cheese requirement". You are also given a non-negative integer M, which is how many pounds of cheese that restaurant needs. Given G gallons of milk, the amount of milk a cheesemaker can make is G plus all numbers below or equal to G that have a remainder of 0 when divided by their "cheese mod" but is greater than their "cheese requirement". Your task is to calculate the minimum number of gallons of milk needed for each restaurant to reach their required amount of cheese. If all of this is confusing, look at the sample testcase below.

**Input Format**

Line 1 - N
Lines 2 to N + 1 - K, X, and M, the "cheese mod", "cheese requirement", and the amount of cheese the restaurant needs respectively (separated by a space each)

**Constraints**

1 <= N <= 2 * 10 ^ 5
2 <= K <= 10 ^ 6
0 <= X <= 10 ^ 9
0 <= M <= 10 ^ 12

**Output Format**

Lines 1 to N - The minimum amount of gallons of milk the i'th restaurant needs

## Solution

This solution involves a lot of math. Once you figure out the expression for how much cheese you can make with G gallons of milk, you can solve the rest of the question with binary search. I have commented the math used in my C++ code.

(We had a submission which directly calculates the gallons of milk and does not even need binary search! Although it is quite hard to understand)
