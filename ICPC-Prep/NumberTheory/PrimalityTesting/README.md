# Primality test

A prime number is a natural number greater than 1 that is only divisible by 1 and itself.

## Naive method 

Let x be a number from 2 to n-1, if n is divided by some x, n is not prime.

Optimization, you can iterate until sqrt(n), because then the factors will only be a permutation of the previous ones. Eg: 6x7 -> 7x7 -> 7x6...

## Fermat method

Probabilistic way (not exact) for finding if a prime is number in logarithmic time. O(klogn) where k is the accuracy and number of iterations.

It works 100% if the number is prime, if it is not a prime, it can yield a false positive.

It's based on Fermat's little theorem:

'''
If n is a prime number, then for every a, 1 < a < n-1,
a^(n-1) % n = 1 
'''

## Miller-Rabin, Solovay-Strassen

Both are also probabilistic algorithms, they are more complicated and involve number theory familiarity.

In short, in MR is you evaluate a composite number it will yield false but with a prime it may fail. Opposite for ST.


## Wilson's theorem

It says that a number x > 1 is prime if the product of all natural numbers until n-1 is a multiple of n: x%(x-1)! != 0

This is the most inefficient primality test.
