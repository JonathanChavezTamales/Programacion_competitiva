# Prime generation

There are many ways to generate primes until n:

## Naive

Check for every element until n if its prime and add it to the list

## Erathostenes's Sieve

From a list from 2 to n, let i = 2, remove every multiple of i, when you get to the end of the list proceed with i+1.

## Optimized Erathostenes

* One optimization is only remove multiples of numbers from 2 to sqrt(n).

For example you want to calculate primes until 25, first you mark as composites the multiples of 2, 3 and 5, now when you reach the next prime (7), you will remove every multiple of 7 (2x7, 3x7, 4x7, ) until you reach a multiple > n.

As you can see you are calculating the multiples with 2, 3, 4, but you have already calculated those but in an inverse way, that's why you only exclude the multiples until n.

* Another optimization would be only sieveing odd numbers, since even numbers are all composite.


## Segmented Sieve / Block sieving

The previous sieve has a space complexity of O(n), if we want to make that better, we should go for a segmented sieve, which is a method that runs on space complexity of O(sqrt(n)), here you will start partitioning you array in pieces of max sqrt(n) elements, with this you will calculate for the next segment.


