class Nodo:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self, head):
        self.head = None




n1 = Nodo(50)
n2 = Nodo(60)

def agregar(v,val_of_new):
    v.next = Nodo(val_of_new)

print(n1.next.value)
