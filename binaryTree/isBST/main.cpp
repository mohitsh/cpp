#include<iostream>
#include<map>
#include<limits.h>

using namespace std;


struct node
{
    int data;
    node *left;
    node *right;
};

struct node *newNode(int data)
{
    node *new_node;
    new_node = new node;
    new_node->data =data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
};

void printInOrder(node*);
bool checkBST(node*);
int findBST(node*, int, int);

int main()
{
    map<int, node*> storage;


    node *root;
    node *nn; 
    root = new node;

    root = newNode(10);
    //storage[1] = nn;

    root->left = newNode(8);
    root->right = newNode(12);

    root->left->left = newNode(4);
    root->left->right = newNode(13);

    //root->right->left = newNode(5);
    //root->right->right =  newNode(18);

    //printInOrder(root);
    cout << endl;

    bool ans = checkBST(root);
    cout << ans << endl;
}



/* IN ORDER PRINTING */
void printInOrder(node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

bool checkBST(node *root)
{
    return findBST(root, INT_MIN, INT_MAX);
}

int findBST(node *root, int min, int max)
{
    if (root == NULL) return true;
    if ((root->data < min) || (root->data > max)) return false;
    return (findBST(root->left, min, root->data) && 
            findBST(root->right, root->data+1, max)); 
}

