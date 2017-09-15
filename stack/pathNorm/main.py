from stack import Stack



def pathNoarmalizer(path):
    startsRoot = False
    if path.startswith("/"):
       startsRoot = True 

    s = Stack()
    path = path.split("/")
    not_folder = [".", ".."]
    back_store = []
    for elem in path:
        if elem not in not_folder:
            s.push(elem)
        elif elem == ".":
            continue
        elif elem == "..":
            if not s.isEmpty():
                s.pop()
            if s.isEmpty() and startsRoot:
                return "invalid"
            if s.isEmpty() and not startsRoot:
                back_store.append("..")


if __name__ == "__main__":
    print(s.isEmpty())
    s.push(1)
    s.push(1)
    print(s.isEmpty())
