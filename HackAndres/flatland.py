def flatlandSpaceStations(n, c):
    c = sorted(c)
    max = 0
    for i in range(1,len(c)):
        if c[i]-c[i-1] > max:
            max = c[i]-c[i-1]
    return int(max//2)

print(flatlandSpaceStations(6, [0,1,2,4,3,5]))