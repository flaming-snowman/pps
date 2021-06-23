# Gotta Get Those Supplemental Essays

* **Difficulty:** Medium
* **Points:** 500
* **Problem Creator:** Shreyas Thumathy

## Problem

https://www.hackerrank.com/contests/spring-break-contest-part-1/challenges/gotta-get-those-supplemental-essays

## Solution

Very hard problem for it's difficulty. The problem is worded a bit confusingly so I'll try to clear it up a bit. Following the first line, each line consists of 2 numbers t and x. If t is 1, then an assignment is added to class x. If t is 2, all assignments in class x are completed. If t is 3, the first x assignments assigned are completed.

Due to the constraints, our code should be O(N) or O(N log N). A key observation is that the first k assignments will always be the same. So, if the first 10 assignments are done, we can store that. The next time we do the first x assignments, we can start from 10 instead of 1. In this manner, we can process everything on the schedule of t = 3 in O(K) time (at most we loop through all the assignments once). We can also store the assignment numbers for each class. Then, when we want to clear out the assignments in a class, we look up the stored assignment numbers for that class and mark them as done. Then, clear the stored assignment values so they aren't processed again next time. All of the t = 2 items on the schedule can also be done in O(K) time (each assignment number is processed at most once). Thus, the total runtime is fast enough.

The solution is as follows: Maintain an array of assignments representing whether or not the assignment is completed. Increment the assignment number whenever a new assignment is added. Keep an array of assignment numbers for each class. Add to the array whenever an assignment of that class is added. When the assignments for a class are completed, loop through the stored assignment numbers and mark the assignment as done if it isn't already done. Store the number of first x assignments completed. When a new first x assignments are completed, start from the stored amount, marking assignments as done. Whenever an assignment is added, increment the total number of assignments. When an assignment is marked as done, decrement the total. Print after each item on the schedule. At the end, check if any of the assignments in the final class still have to be done.

There's a lot of logic here and it may be easier to simply read my code.
