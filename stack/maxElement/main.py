
class stack:
    def __init__(self):
        self.store = []

    def push(self, item):
        self.store.append(item)

    def pop(self):
        self.store.pop()

    def top(self):
        return self.store[-1]

    def isEmpty(self):
        if self.store:
            return False
        else:
            return True

def max_elem(arr):
    s = stack()
    aux = stack()
    for elem in arr:
        if elem[0] == 1:
            # push to stack 
            val = elem[1]
            s.push(val)
            if aux.isEmpty():
                aux.push([val, 1])
            else:
                top_elem = aux.top()
                if val > top_elem[0]:
                    aux.push([val, 1])

                if val == top_elem[0]:
                    val_count = top_elem[1]
                    val_count += 1
                    aux.pop()
                    aux.push([val, val_count])
        if elem[0] == 2:
            s.pop()
        
        if elem[0] == 3:
            top_elem = aux.top()
            print(top_elem[0])

    return 0

if __name__ == "__main__":
    n = input()
    input_data = []
    for i in range(n):
        line = raw_input()
        line = str(line)
        line = line.split(" ")
        line = [int(elem) for elem in line]
        input_data.append(line)
    max_elem(input_data)
