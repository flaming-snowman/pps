# Sizing Snowmen

* **Difficulty:** Hard
* **Points:** 550
* **Problem Creator:** Jack Chang

## Problem

https://www.hackerrank.com/contests/pps-thanksgiving-contest/challenges/sizing-snowmen

## Solution

The main problem here is to efficiently query if a snowman of a certain height contains a snowball of a certain radius. Since there are up to M=10^5 queries, we must be able to do each query in constant or logarithmic time. We can do it in logarithmic time by using a binary search. Construct an array of lists of size "max radius". This array will contain the sizes of the snowmen that each sized snowball is part of. For example in the sample input, a snowball of radius 1 is part of a snowman of height 12 and height 40, so arr[1] would have {12,40}. Then, we sort each list in the array, and for each query, run a binary search for whether or not the given sized snowball is part of a snowman of the given height.

Note that we do not actually have to sort and use binary search if we simply use a data structure that can efficiently check if an element exists (usually such a data structure will employ the use of a hash table or do the sorting/binary searching for you). In any case, the set data structure does exactly what we want.
