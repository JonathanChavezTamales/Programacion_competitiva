def cesar(s, a, b, t):
    s = list(s[a:b+1])
    new_list = []
    for i in s:
        if ord(i) > ord('z'):
            new_list.append(i-ord('a'))
        else:
            new_list.append(chr(ord(i)+t))
        
    return (new_list+s[b:])

def palindrome_subsets():
    

cesar("aba", 0, 1, 3)