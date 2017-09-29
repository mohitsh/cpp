#include<iostream>
#include"binarytree.h"

using namespace std;


node *insert(node *, int);
void printInOrder(node*);
int TreeSize(node *); 
int MaxDepth(node *);
int minValue(node *);
void mirror(node *);
void doubleTree(node *);
void depthPrint(node *, int, int);

int main()
{

    node *root;
    root = new node;
    //root = newNode(314);
    root = newNode(1);

    root->left = newNode(2);
    root->left->left = newNode(4);
    root->left->left->left = newNode(6);
    root->left->left->left->right = newNode(9);

    root->right = newNode(3);
    root->right->left = newNode(5);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(8);
    root->right->left->right->left = newNode(10);
    root->right->left->right->right = newNode(11);


    /*
    int n;
    cout << "enter no of nodes: ";
    cin >> n; 

    for (int i = 0; i<n; ++i)
    {
        int data;
        cout << "enter node " << i+1 << " value: "; 
        cin >> data;
        root = insert(root, data);
    } 
    */

    
    printInOrder(root);
    int k = 3;
    depthPrint(root, 1, k-1);
    cout << "after reversal: " << endl;
    printInOrder(root);
    cout << endl;
    return 0;
}


node *insert(node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    else
    {
        if (data >= node->data)
           node->right = insert(node->right, data);
        else
           node->left = insert(node->left, data);
        return node;
    }
}


/* IN ORDER PRINTING */
void printInOrder(node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->data << " -> ";
    printInOrder(root->right);
}

int TreeSize(node *root)
{ 
    if (root == NULL)
        return 0;
    else
        return(1 + TreeSize(root->left) + TreeSize(root->right));
}


int MaxDepth(node *root)
{
    if (root == NULL)
        return 0;

    int lDepth = MaxDepth(root->left);
    int rDepth = MaxDepth(root->right);

    if (lDepth>rDepth)
       return 1+lDepth;
    else
        return 1+rDepth;

}

int minValue(node *root)
{

    /*  considering it is a binary search tree */

    node *temp;
    temp = root;
    while(temp->left != NULL)
        temp = temp->left;

    return temp->data;
}

void mirror(node *root)
{
    if (root == NULL)
        return;
    else
    {
        mirror(root->left);
        mirror(root->right);
        
        node *temp;
        temp = new node;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    } 
}

void doubleTree(node *root)
{
    if (root == NULL) return;
    else
    {
        doubleTree(root->left);
        doubleTree(root->right);

        node *temp;
        temp = root->left;
        root->left = newNode(root->data);
        root->left->left = temp;
    }
}


void depthPrint(node *root, int c, int k)
{
    if (root == NULL) return;
    if (c == k)
    {
        node *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        printInOrder(root);
    }
    cout << endl;
    c += 1;
    depthPrint(root->left, c, k);
    depthPrint(root->right, c, k);

}
