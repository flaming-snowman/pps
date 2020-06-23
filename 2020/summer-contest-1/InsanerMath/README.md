# Insaner Math

* **Difficulty:** Expert
* **Points:** 250
* **Problem Creator:** Jack Chang

## Problem

King Asdgoiqjadsklfajsdfkl has invited you to his palace again after hearing that you are now the 68th smartest person living in his kingdom! This time though, you decided to not go, since you didn't want to be threatened to solve a dumb question with your life. But, he had his men come and kidnap you, and now you're living off of rotten cornbread in the attic of King Asdgoiqjadsklfajsdfkl's palace (wow palaces have attics?). This time, he presents you with an even insaner problem:

Given a positive integer N and N integers, calculate the largest possible number that you can obtain using any set and order of operations between these N integers. For example, if you have the number {4, 5, 6, 7} then the answer would be 4 * 5 * 6 * 7 which is 840. If you have the numbers {1, 1, 1, 1, 1, 1} then the optimal solution would be (1 + 1 + 1) * (1 + 1 + 1) which is 9. If you have the numbers {2, 3, 5, -1} then the optimal solution would be (2 - (-1)) * 3 * 5 which is 45. Exponents are not allowed! Only addition, subtraction, multiplication, and division (though idk why you'd have to use division) are allowed.

You have to solve this problem quickly or else you'll be stuck in King Asdgoiqjadsklfajsdfkl's attic for the rest of your life. Sure, you can live here and make friends with the rats and skeletons and continue eating the rotten cornbread that's fed to you daily, but it's not exactly the paradise that you had wished for since you were a little boy.

**Input Format**

Line 1 - N
Line 2 - N numbers

**Constraints**

0 <= N <= 30
-1000 <= N[i] <= 1000
The answer will not exceed 2 ^ 63 - 1

**Output Format**

Line 1 - the answer

## Solution

Ok so I added a lot of the edge testcases for this problem, and I want to preface this by saying that neither Jack or I had/have a working solution that solves this problem in its entirety. My attached solution solves all the testcases we had, but there are countless cases that it would produce an incorrect answer.

We first consider the problem without negatives:

It is optimal to multiply together every number that is greater than 2. However, it is optimal to add up 1s and 2s to form 3s before multiplying. This is true bc 2\*2\*2 < 3\*3, even though 2+2+2=3+3. If there are leftover 2s, 2s are next best. If there is a leftover 1, adding it to the smallest other factor is optimal (highest percent increase in the sum). This insight is enough to get about half the testcases. 

Now we consider negatives:

My program does not actually consider negatives less than -2 separately (a bug). Forming 3s is optimal. However, you cannot form positive 3 with only negatives, i.e. -1, -1, -1 cannot form 3, only -3. Thus, if your final solution is negative, that is incorrect. Pairing a negative number with a postive number allows you to ignore this, as 4-(-1)=5 and (-1)-4=-5, so cleverly choosing which one to use will allow you to flip signs. The casework on negatives is insane, I tried my best to account for all cases, failed to implement a few, and left out many more cases I simply didn't even think of.

An example of how hard it gets:

-1, -1, -1, -1, -1, -1 forms 9 (-3\*-3).

However, 9 negative 1s forms 24 (-3\*-2\*-2\*-2).

Even worse is how to deal with -1s and -2s that dont form 3s, or if forming threes results in a negative total value. I did not properly consider parity, and my solution only works on the given testcases, not the general problem. We do not have a full solution, and would be interested to see one. 

As a sidenote, this problem should be possible in exponential time by testing every possibility, but we believe it is solvable with casework in linear or near-linear time.
