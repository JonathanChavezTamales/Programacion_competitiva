import re
n = input()
n = n.split(" ")


        

s = n[0]
p = list(n[1])

i =0
while(i < len(n[1])-1)):
    if(p[i+1]!="." or p[i+1]!="*" or p[i-1]!="+"):
        p.insert(i-1, "^")
        p.insert(i+1, "$")
    i+=1

p = "".join(p)
print(p)

is_match = re.match(p, s) != None

print(is_match)