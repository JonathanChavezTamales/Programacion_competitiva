def circularArrayRotation(a, k, queries):
    for i in range(k):
        a.insert(0,a.pop())
    
    return [a[x] for x in queries]

print(circularArrayRotation([1,2,3], 2, [0,1,2]))