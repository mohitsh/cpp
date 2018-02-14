#include<iostream>
#include"binarytree.h"

using namespace std;


void insert(node* &, int);
void printInOrder(node*);
void remove(node* &, int);
int main()
{ /*node *root;
    root = new node;
    root = newNode(314);

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
    root->right->left->right->left->right = newNode(641);

    root->right->right->right = newNode(28);*/

    int n;
    cout << "enter no of nodes: ";
    cin >> n; 

    node *root = nullptr;
    for (int i = 0; i<n; ++i)
    {
        int data;
        cout << "enter node " << i+1 << " value: "; 
        cin >> data;
        insert(root, data);
    } 

    printInOrder(root);

    int rm;
    cout << "node to remove: ";
    cin >> rm;
    
    remove(root, rm);
    printInOrder(root);

    return 0;
}


void insert(node * &root, int data)
{
    if (root == nullptr){
        root = newNode(data);
        return;
    }

    else if (data < root->data)
        insert(root->left, data);

    else if (data > root->data)
        insert(root->right, data);

    else
        ;
}

node *findMin(node *root){
    if (root == nullptr) return root;
    while(root->left != nullptr) root = root->left;
    return root;
}

void remove(node* &root, int data){
    if (root == nullptr) return;

    if (data < root->data) remove(root->left, data);
    else if (data > root->data) remove(root->right, data);

    else if (root->left != nullptr && root->right != nullptr){
        // replace with min val of right subtre
        root->data = findMin(root->right)->data; 
        remove(root->right, root->data);
    }

    else{
        node *oldNode = root;
        root = (root->left != nullptr) ? root->left : root->right;
        delete oldNode;
    }
}

void printInOrder(node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->data << endl;
    printInOrder(root->right);
}
