class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def inorder(root):
    if root is None:
        return
    inorder(root.left)
    print(root.val)
    inorder(root.right)


def min_of_subtree(root):
    if root is None: return 0 
    while root.left is not None:
        root = root.left 
    return root.val 

def max_of_subtree(root):
    if root is None: return 0
    while root.right is not None:
        root = root.right 
    return root.val 

def is_bst(root):
    # base cases for recursion
    if root is None: return True 
    if root.left is not None and max_of_subtree(root.left) > root.val:
        return False 
    if root.right is not None and min_of_subtree(root.right) < root.val:
        return False 
    # calling recursion
    if not is_bst(root.left) or not is_bst(root.right):
        return False 
    
    return True 




def build_tree_type_1():
    root = Node(314)
    root.left = Node(6)
    root.right = Node(6)

    root.left.left = Node(271)
    root.left.right = Node(561)

    root.left.left.left = Node(28)
    root.left.left.right = Node(0)

    root.left.right.right = Node(3)
    root.left.right.right.left = Node(17)

    root.right.left = Node(2)
    root.right.right = Node(271)

    root.right.left.right = Node(1)
    root.right.left.right.left = Node(401)
    root.right.left.right.left.right = Node(641)
    root.right.left.right.right = Node(257)

    root.right.right.right = Node(28)
    return root

def build_tree_type_2():
    root = Node(10)
    root.left = Node(4)
    root.right = Node(15)
    root.left.left = Node(1)
    root.left.right = Node(6)
    root.right.left = Node(12)
    root.right.right = Node(18)
    root.left.left.left = Node(0)
    root.left.right.left = Node(5)
    root.left.right.right = Node(8)
    return root

if __name__ == "__main__":
    root = build_tree_type_2()
    inorder(root)
    print(is_bst(root))


    


