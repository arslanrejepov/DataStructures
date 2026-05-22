class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)

        if not self.head:
            self.head = new_node
            return
        
        current = self.head
        while current.next :
            current = current.next

        current.next = new_node

    def prepend(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def delete(self, key):
        current = self.head

        if not current:
            return

        if current.data == key:
            self.head = current.next  # Shift the head to the second element
            current = None             # Free up memory
            return

        prev = None
        while current and current.data != key:
            prev = current
            current = current.next

        if not current:
            return

        prev.next = current.next
        current = None

        def display(self):
            elements = []
            current = self.head
            while current:
                elements.append(str(current.data))
            current = current.next
            print(" -> ".join(elements) + " -> None")