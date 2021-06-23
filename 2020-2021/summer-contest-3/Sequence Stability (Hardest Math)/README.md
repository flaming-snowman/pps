# Sequence Stability (Hardest Math)

* **Difficulty:** Advanced
* **Points:** 350
* **Problem Creator:** Jack Chang 

## Problem

You have been tasked to solve the hardest math problem ever! You are given a positive integers N and M, and a sequence of N integers. You are trying to calculate the greatest possible unstable factor of the sequence. The unstable factor of a sequence is the largest value of that sequence minus the smallest number of that sequence. For example, the unstable factor of the sequence 1, 2, 6 is 6 - 1 = 5. For a sequence, you can split it into contiguous subsequences and calculate the unstable factor of each of those subsequences, but each subsequence cannot have a size greater than M. If you split a sequence into contiguous subsequences, the unstable factor of that sequence is the sum of all the unstable factors of each subsequence. You have to calculate the greatest possible unstable factor for the sequence given to you.

**Input Format**

Line 1 - N and M, separated by a space
Line 2 - N integers, the sequence

**Constraints**

1 <= N <= 10 ^ 5
1 <= M <= 500
1 <= N[i] <= 10 ^ 9

**Output Format**

Line 1 - The greatest possible unstable factor of the sequence

## Solution

This problem can be solved using dynamic programming. The key observation is that given the max unstable factor of the first k terms, we can generate the unstable factor for the next subsequence of length up to M. In this manner, we can apply dp. In the process of looping through the length of the subsequence, we can keep track of the min/max element in the subsequnce. The solution runs in O(NM) time.

I did not realize this and overkilled the query using a sparse table. The solution is included if you're curious.
