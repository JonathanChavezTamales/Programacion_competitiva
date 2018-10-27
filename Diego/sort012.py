"""Programa que ordena una lista de 0, 1 y 2 en O(n)"""

def sort1(x):
    ceros = []
    unos = []
    doses = []

    for i in x:
        if i == 0:
            ceros.append(0)
        elif i == 1:
            unos.append(1)
        elif i == 2:
            doses.append(2)

    x = ceros+unos+doses

    return(x)

def sort2(x):
    for i in range(len(x)):
        if x[i] == 0:
            del(x[i])
            x.insert(0,0)
            print(x)
        elif x[i] == 2:
            del(x[i])
            x.append(2)
            print(x)
    return x




lista = [int(i) for i in input().split()]

print(sort2(lista))
