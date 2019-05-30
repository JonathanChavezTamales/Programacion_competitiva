def serviceLane(n, cases, width):
    mins = []
    for i in range(len(cases)):
        mins.append(min(width[cases[i][0]:cases[i][1]+1]))
    return mins

print(serviceLane(8, [[0,3],[4,6], [6,7], [3,5], [0,7]], [2,3,1,2,3,2,3,3]))