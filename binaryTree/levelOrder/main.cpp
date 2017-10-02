#include<iostream>
#include<string>
#include<queue>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

struct node *newNode(int val)
{
    node *new_node;
    new_node = new node;
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
};

void printInOrder(node*);
void levelOrder(node *);

int main()
{

    node *root;
    node *nn; 
    root = new node;

    //root = newNode(1);
    //storage[1] = nn;

    //root->right = newNode(2);
    //root->right->right = newNode(5);

    //root->right->right->left = newNode(3);
    //root->right->right->right = newNode(6);

    //root->right->right->left->right = newNode(4);

    root = newNode(20);
    //storage[1] = nn;

    root->left = newNode(10);
    root->right = newNode(30);

    root->left->left = newNode(5);
    root->left->right = newNode(15);

    root->left->left->left = newNode(2);
    root->left->left->right = newNode(6);
    
    root->left->right->left = newNode(13);
    root->left->right->right = newNode(17);

    root->left->right->left->left = newNode(11);
    root->left->right->left->right = newNode(14);


    root->left->right->right->left = newNode(16);
    root->left->right->right->right = newNode(19);


    //printInOrder(root);
    //cout << root->data << " ";
    levelOrder(root);
    cout << endl;
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


void levelOrder(node *root)
{
    queue<node*> q;

    if (root) q.push(root);
    while(!q.empty())
    {
        node *temp;
        temp = q.front();
        q.pop();
        cout << temp->data << " "; 

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
        
    }
}


