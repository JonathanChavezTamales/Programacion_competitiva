l = 10
r = 15
max = 0
for i in range(l, r+1):
    for j in range(i, r+1):
        max = i^j if i^j > max else max
print(max)