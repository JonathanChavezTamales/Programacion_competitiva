# Least common multiple

Is the smallest common multiple of two numbers.

>lcm(m1,m2,…,mk) = min{s:s>0 and mi|s, for i=1,…,k},

## Naive

You can get a good implementation by multiplying the prime factors from both numbers. More formally is the product of the union of the prime factors from both numbers.

For GCD: Multiply common prime factors per iteration.
For LCM: Multiply all prime factors.

# Formula

LCM(a,b) = (a*b) / GCD(a,b)


