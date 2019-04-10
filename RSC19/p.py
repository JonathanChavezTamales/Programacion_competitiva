lenghtLista = int(input())
lista = input().split()
for i in range(len(lista)):
    lista[i] = int(lista[i]) 
sortedList = lista[:]
sortedList.sort()
cont = 0
if lista == sortedList:
    print("yes")
else:
    for i in range(len(lista)-1):
        if lista[i+1] < lista[i]:
            lista[i+1],lista[i] = lista[i],lista[i+1]
            n1, n2 = i+1, i+2
            cont +=1 
if cont == 1:
    print(f"yes\nswap {n1} {n2}")
elif cont > 1:
    for i in range(len(lista)-1,0,-1):
        if lista[i] < lista[i-1]:
            notOderRight = i      
    print(notOderRight)
            
    for j in range (1,len(lista)-2):
        if lista[j] > lista[j-1] and lista[j] > lista[i+1]:
            notOrderLeft = j
            
    print(notOrderLeft)
            
         
    lista[notOrderLeft:notOderRight] = lista[notOrderLeft:notOderRight][::-1]
     
    print(lista)

def checkReverse(arr, n): 
  
  
    for front in range(n): 
        if temp[front] != arr[front]: 
            break
  
    for back in range(n - 1, -1, -1): 
        if temp[back] != arr[back]: 
            break
  
    if front >= back: 
        return True
    while front != back: 
        front += 1
        if arr[front - 1] < arr[front]: 
            return False
    return True