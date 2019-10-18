# Prime factorization

Every number x has a unique set of prime numbers that multiplied yield to x.

Some algorithms can be very slow when you try to factorize a prime number, that's why it makes perfect sense to first run a deterministic or probabilistic primality test with no false positives before running the factorization.

## Naive / Trial division

You could do like in elementary school, let x be a number, while n>1, let d be 2 and check if x is divisible by d, if it is, let x /= 2, else  d += 1.

* An optimization could be to run that until d = sqrt(n).

* Another optimization would be to skip now from 2 to 2 if the number is not divisible by 2. First you ask n%2==0 ? If no : n%3, n%5, n%7, etc...

## Fermat's factorization

This is a faster factorization method that uses Fermat's little theorem.

## Pollard's Rho p-1

There is a probabilistic algorithm that finds the factors much faster and for large numbers.








[CP Algorithms, factorization](https://cp-algorithms.com/algebra/factorization.html)
