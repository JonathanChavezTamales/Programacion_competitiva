s = ""
s = input()
while(s[-1]!="]"):
        s += input()


s = s.replace("[", "")
s = s.replace("]", "")


a = s.split(",")

nuevo = []


for i in a:
    nuevo.append(i.split("->"))


nuevo_int = []

for i in nuevo:
    nuevo_int.append(list(map(int, i)))


nuevo_sorted = []

for i in range(len(nuevo)):
    nuevo_sorted.append(sorted(nuevo_int[i]))

x=0

for i in range(len(nuevo_sorted)):
    if(nuevo_int[i] != nuevo_sorted[i]):
        x = i

salida = f"{x}"

for i in range(len(nuevo[x])):
        if nuevo_int[x][i] != nuevo_sorted[x][i]:
                salida+=f" {nuevo_int[x][i]}"
        
print(salida)



