from stack import Stack

def pathNormalizer(path):
    startsRoot = False
    if path.startswith("/"):
       startsRoot = True 

    s = Stack()
    path = path.split("/")
    not_folder = [".", ".."]
    back_store = []
    for elem in path:
        #print "processing: {0}".format(elem)
        if elem not in not_folder:
            #print "pushing on stack: {0}".format(elem)
            s.push(elem)
        elif elem == ".":
            #print "don't do anything: {0}".format(elem)
            continue
        elif elem == "..":
            if not s.isEmpty():
                popped = s.pop()
                #print "popped: {0}".format(popped)
                continue
            if s.isEmpty() and startsRoot:
                #print "path is invalid"
                return -1
            if s.isEmpty() and not startsRoot:
                #print "stack is empty appending {0}".format(elem)
                back_store.append("..")

    #print back_store
    if back_store:
        new_path = "/".join(back_store)
        new_path += '/'
        #print('Shortest Path: {0}'.format(new_path))
        return new_path

    recreate_path = []
    while(not s.isEmpty()):
        popped = s.pop()
        recreate_path.append(popped)

    if recreate_path:
        recreate_path = recreate_path[::-1]
        new_path = '/'.join(recreate_path)
    else:
        new_path = ''
    #print('Shortest Path: {0}'.format(new_path))
    return new_path

if __name__ == "__main__":
    path = "/"
    print 'original path: {0}'.format(path)
    new_path = pathNormalizer(path)
    if new_path == -1:
        print "PATH IS INVALID"
    else:
        print('Shortest Path: {0}'.format(new_path))
