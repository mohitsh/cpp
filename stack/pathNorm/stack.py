class Stack:
    def __init__(self):
        self.__items = []

    def isEmpty(self):
        if self.__items:
            return False
        else:
            return True

    def push(self, item):
        self.__items.append(item)

    def pop(self):
        return self.__items.pop()
