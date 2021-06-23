The toughest problem of the contest! A critical piece of information going into this is the [Chicken Mcnugget Theorem](https://artofproblemsolving.com/wiki/index.php/Chicken_McNugget_Theorem), or perhaps better known as the [Frobenius Coin Problem](https://en.wikipedia.org/wiki/Coin_problem) outside of the math community.

If any 2 of our numbers are relatively prime, then the largest number that cannot be expressed as some linear combination of them is (a-1)(b-1)-1. Since our numbers are limited to 300, the max number that cannot be expressed must clearly be less than 300^2 (since having more numbers only lowers the max number we can't create).

However, if ALL of our numbers share a common factor, then there is an infinite number of numbers that can't be expressed (only numbers that are multiples of that factor can be expressed).

Other than that, we simply run a dynamic programming solution that generates all the possible values that can be expressed and loop through to find the largest value that can't be expressed. Remember that we only have to check up to 300^2, a very manageable number.
