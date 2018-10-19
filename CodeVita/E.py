line = input()
line = line.split(",")
line = [int(x) for x in line]
date = ""
if 1 in line:
    date = "1"
    line.remove(1)
if 2 in line:

#     MM/DD HH:MM
#   12/31 23:59

1,1,2,2,3,1,8,5,5,3

print(line)
