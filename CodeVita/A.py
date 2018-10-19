import math

n = int(input())
c = []
a = 0
for i in range(1,n):
	r = math.gcd(i, n)
	if r == 1:
		c.append(i)
print(len(c))		
