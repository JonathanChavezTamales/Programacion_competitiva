# Prime generation

There are many ways to generate primes until n:

## Naive

Check for every element until n if its prime and add it to the list

## Erathostenes's Sieve

From a list from 2 to n, let i = 2, remove every multiple of i, when you get to the end of the list proceed with i+1.

## Segmented Sieve

The previous sieve has a space complexity of O(n), if we want to make that better, we should go for a segmented sieve, which is a method that runs on space complexity of O(sqrt(n)), here you will start partitioning you array in pieces of max sqrt(n) elements, with this you will calculate for the next segment.
