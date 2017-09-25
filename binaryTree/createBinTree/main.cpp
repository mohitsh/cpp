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

int main()
{

    node *root;
    root = new node;
    //root = newNode(314);
    root = newNode(2);

    /*
    root->left = newNode(6);
    root->right = newNode(6);

    root->left->left = newNode(271);
    root->left->right = newNode(561);

    root->left->left->left = newNode(28);
    root->left->left->right = newNode(0);


    root->left->right->right = newNode(3);
    root->left->right->right->left = newNode(17);

    root->right->left = newNode(2);
    root->right->right = newNode(271);

    root->right->left->right = newNode(1);
    root->right->left->right->left = newNode(401);
    root->right->left->right->right = newNode(257);
    root->right->left->right->left->right = newNode(641); // 641

    root->right->right->right = newNode(28);
    */

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

    //root = insert(root, 50);
    //root = insert(root, 80);
    //root = insert(root, 20);
    //root = insert(root, 120);
    //root = insert(root, 60);
    //root = insert(root, 150);

    //printInOrder(root);
    

    int size = TreeSize(root); 
    cout << "size of tree: " << size << endl;

    int maxd = MaxDepth(root);
    cout << "maximum depth: " << maxd << endl;

    int minVal =  minValue(root);
    cout << "minimum value: " << minVal << endl;


    printInOrder(root);
    cout << endl;

    //mirror(root);

    //printInOrder(root);
    //cout << endl;

    doubleTree(root);

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
