# Greatest common divisor

GCD is the largest number that can divide two numbers.

>gcd(m1,m2,…,mk) = max{s:s|mi, for i=1,…,k}

The naive approach is getting the factors of the numbers, and multiply the common factors.

## Euclidean algorithm

Is a recursive algorithm to find GCD, it calls the mod of the second with the first and the first.

gcd(a,b){
	if(a == 0) return b
	return gcd(b%a, a);
}

If gcd(a,b) == 1, a and b are coprimes.

## Extended euclidean algorithm

This can find coefficients x and y from: gcd(a,b) = ax + by

