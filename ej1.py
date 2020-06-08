class Node:
    def __init__(self):
        self.nombre = None
        self.apellido = None
        self.next = None

class Lista:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def agregar(self, nombre, apellido):
        if self.head == None:
            self.head = Node()
            self.head.nombre = nombre
            self.head.apellido = apellido
            self.tail = self.head
            self.tail.next = None
            return
        else:
            self.tail.next = Node()
            self.tail.nombre = nombre
            self.tail.apellido = apellido
            self.tail = self.tail.next
            self.tail.next = None
    
    def borrar_Node(self,nodo):
        if nodo.next.next != None:
            borrar_Node(nodo)
        nodo.next = None

    def borrar_List(self):
        if self.head != None:
            borrar_Node(self.head)
        self.head = None




