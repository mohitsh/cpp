#include<iostream>
#include"binarytree.h"

int main()
{

    node *root;
    root = new node;
    root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    return 0;
}

