lista = [9,6,16,5,7,3]
numero = 10

def sumados(lista, target):
    complementos = {}
    for i in lista:

        if i in complementos:
            return [i,complementos[i]]

        else:
            complementos[target-i] = i


def suma(lista, target):
    dic={}
    for pos in range(0,len(lista)):
        if lista[pos] in dic:
            return(lista[pos], dic[lista[pos]])
        else:
            dic[target-lista[pos]]=lista[pos]
print(sumados(lista, numero))
