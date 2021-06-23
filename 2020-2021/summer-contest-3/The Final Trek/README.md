# The Final Trek
 
* **Difficulty:** Advanced
* **Points:** 450
* **Problem Creator:** Jack Chang 

## Problem

Jack has been walking for days, and he is now finally approaching his home. You are given an N * N grid which shows the last stretch of Jack's trek. He starts in the upper left corner of the grid, and is trying to reach the bottom right corner. On the grid, there are 4 types of tiles: "#" represents an empty tile that Jack can walk onto, "R" represents a tile with a rock on it, "L" represents a square that is full of lava, and "." represents a tile with an impassable obstacle. Jack can freely move around on "#" tiles, but he cannot cross any of the other tiles freely. To cross a tile with lava, he needs to use a special item, a one-time-use bridge constructor. To cross a tile with a rock in it, he needs to use another special item, a one-time-use trampoline. Jack has a supply of bridge-items and trampoline items, but he needs to pay (in coins) every time he uses one. Every time he uses one of these items, the price of that item doubles. Jack can also only use at most 8 of each item: 8 bridge-items and 8 trampoline-items. Given this information, calculate the minimum amount of coins Jack needs to spend on items to finish his trek! If it isn't possible to reach the bottom right corner, output -1. It is guaranteed that the tile in the left top corner is a "#" tile.

**Input Format**

Line 1 - N, B, and T: The number of rows and columns in the grid, the cost of the first bridge-item, and the cost of the first trampoline-item (respectively)
Lines to N + 1 - the N * N grid, where Jack starts at the top left and is trying to reach the bottom right

**Constraints**

1 <= N <= 200
1 <= B, T <= 10 ^ 6

**Output Format**

Line 1 - The minimum amount of coins Jack needs to spend, or -1 if it isn't possible to reach the bottom right corner.

## Solution

The simplest solution to this problem uses a breadth first search but with the number of bridges/trampolines used as additional dimensions. Since at most 8 of each item can be used, we simply try to reach the end with every combination and output the combination with the least coins used. This runs a bit too slow but with a quick binary search on the trampolines used it runs *just* fast enough.

The intended solution was to use Dijkstra's shortest path, of which I have included two solutions, one using a hash function to store states and the other just uses a 4d array.
