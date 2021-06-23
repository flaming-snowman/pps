# Count Fees v3 (The Finale) Revisited

* **Difficulty:** Advanced
* **Points:** 650
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/count-fees-v3-the-finale

## Solution

The base fee can be found with relative ease by iterating through and updating the cost. A bit of caution needs to be taken to ensure no double-counting or out of bounds occurs but that's all for the base fee.

The hard part is finding the max discount. This is a dynamic programming problem. The optimal discount will be constructed by stringing together some sequence of FEE/FEAs and PHEE/PHEAs. We first notice that FEEs and FEAs have no difference, and whichever comes first is always optimal, similarly for PHEEs and PHEAs. After each FEE/FEA/PHEE/PHEA, the next discount must always be either a FEE/FEA or PHEE/PHEA. Thus, we simply find the next occurrence of each of these, and update our dp array.

Each index of our dp array represents the max discount that can be achieved by ending a FEE/FEA/PHEE/PHEA at that index of the given string. We can update our dp array constructively. We iterate through the string, and for every position, find the next FEE/FEA and update the dp array at the ending position of the FEE/FEA to the max discount that can be achieved. We do the same for the next PHEE/PHEA. At the end, we look through the entire dp array for the ending position where the max discount is achieved, and subtract that from our base fee for the answer.
