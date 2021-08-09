# Making Sets

* **Difficulty:** Medium
* **Points:** 150
* **Problem Creator:** Jason Liu

## Problem

https://www.hackerrank.com/contests/pps-summer-contest-2021/challenges/making-sets

## Solution

Not a hard problem. The first observation is that each category can be calculated indepedently. Then, as long as you can figure out what the third card's properties are, you're done. If the given 2 cards have the same property for a category, the third card must also have that property. Otherwise, if they're different, the third card must also be different. Repeat for all the categories and all the cards.
