class Stack():
    def __init__(self):
        self.__items = []

    def isEmpty(self):
        if self.__items:
            return True
        else:
            return False

    def push(self, item):
        self.__items.append(item)

    def pop(self, item):
        return item.pop()
