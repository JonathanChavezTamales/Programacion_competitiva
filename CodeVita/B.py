import math

n = int(input())
divisores = []
perfect_squares = []


for i in range(2, n):
    if n%i ==0  :
        divisores.append(i)
    a = i**(1/2)
    if a.is_integer():
            perfect_squares.append(i)

z = []
a = [x for x in divisores if x in perfect_squares]

for i in divisores:
    for j in a:
        if i%j==0:
            z.append(i)

for k in z:
    if k in divisores:
        divisores.remove(k)


print(len(divisores))
