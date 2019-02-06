#Programa que revisa si paréntesis, llaves y corchetes están balanceados.


def alterno(caracter):
    if caracter == '{':
        return '}'
    elif caracter == '(':
        return ')'
    elif caracter == '[':
        return ']'
    else:
        return 'n'

def bla(str):
    abiertos = []
    b = 0
    str = input()

    for i in range(len(str)):

        if len(abiertos)==0 and (str[i] == '}' or str[i] == ']' or str[i] == ')'):
            b = 1
            return False

        elif str[i] == '{' or str[i] =='[' or str[i] == '(':
            abiertos.append(str[i])

        elif str[i] == alterno(abiertos[-1]):
            abiertos.pop()

    if len(abiertos) == 0:
        return True
    return False


    
