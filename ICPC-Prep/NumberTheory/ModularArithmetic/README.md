# Modular arithmetic




## Fast modular exponentiation / modular exponentiation / binary exponentiation / squaring exponentiation

When we have a large exponent and we want to write it in a modulo way, we will have a solution that can be handled in a better way than just calculating the exponent of a big number.

If we have `a^b % c`, since `(ab)% n` === (is congruent) to `(a%n * b%n)`, we can factorize the exponent into a sum of powers of two and say if exp is 7: `(a^1)(a^2)(a^4)%c` === `[(a^1)%c (a^2)%c (a^4)%c]%c`.


## Chinese remainder theorem


## Modular multiplicative inverse


[Binary exponentiation](https://cp-algorithms.com/algebra/binary-exp.html)
[Modular exponentiation](https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/fast-modular-exponentiation)
