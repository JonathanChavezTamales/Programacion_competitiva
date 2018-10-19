n = int(input())
l = [int(x) for x in input().split()]
max = max(l)
l.remove(max)
suma = sum(l)
if suma >  max and n>2:
	print(len(l)+1)
else:
	print(0)
