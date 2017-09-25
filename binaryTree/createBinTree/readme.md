#### Example binary tree

                                314
                  _______________________________
                  6                             6
          _________________               _____________
          271           561               2            271
     __________          _______          ______       _______
     28        0               3                1             28
                         _______          ____________
                         17               401      257
                                          ______
                                             641



Functions inside main.cpp
* insert(node*, int)    -> insert node at appropriate positionin BST
* printInorder(node *)  -> print BST inOrder traversal
* TreeSize(node *)      -> give total number of nodes in tree
* MaxDepth(node *)      -> Maximum Depth of any leaf of BST
* minValue(node *)      -> Minimum value node of BST
* mirror(node *)        -> mirror image of BST
* doubleTree(node *)    -> insert duplicate of node to its left 
