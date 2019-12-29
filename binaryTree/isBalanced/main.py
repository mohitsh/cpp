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


def tree_height(root):
    if root is None: return 0
    return max(tree_height(root.left), tree_height(root.right))+1


def is_balanced(root):
    if root is None: return True
    height_left_subtree = tree_height(root.left)
    height_right_subtre = tree_height(root.right)
    if abs(height_left_subtree - height_right_subtre) > 1: return False
    if not is_balanced(root.left) or not is_balanced(root.right): return False
    return True

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
    root.right.right.right = Node(20)
    root.right.right.right.right = Node(24)
    return root

if __name__ == "__main__":
    root = build_tree_type_2()
    root.left.left.right = Node(5)
    inorder(root)
    print(tree_height(root))
    print(is_balanced(root))