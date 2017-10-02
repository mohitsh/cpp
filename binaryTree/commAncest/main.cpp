#include<iostream>
#include<map>
#include<limits.h>
#include<vector>

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
node *lca(node *, int, int);
void createPath(node*, int);
node* makePath(node*, int);
node* lca2(node*, int, int);
node *lca3(node *, int,int);

int main()
{
    map<int, node*> storage;


    node *root;
    node *nn; 
    root = new node;

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
 
    printInOrder(root);
    cout << endl;
    //node *ans = lca(root, 11, 17);
    //cout << "common: " << ans->data << endl;
    
    
    node *parent;
    parent = lca3(root, 15, 13); // 15, 13
    cout << "parent: " << parent->data << endl; 

    parent = lca3(root, 13, 15); // 15, 13
    cout << "parent: " << parent->data << endl; 

    parent = lca3(root, 2, 5); // 15, 13
    cout << "parent: " << parent->data << endl; 

    parent = lca3(root, 5, 2); // 15, 13
    cout << "parent: " << parent->data << endl; 

    parent = lca3(root, 2, 10); // 15, 13
    cout << "parent: " << parent->data << endl; 

    parent = lca3(root, 10, 2); // 15, 13
    cout << "parent: " << parent->data << endl; 

    parent = lca3(root, 2, 2); // 15, 13
    cout << "parent: " << parent->data << endl; 

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

node *lca(node *root, int a, int b)
{
    node *left, *right;

    if (root == NULL) return NULL;
    if (((root->left && root->left->data == a) || 
        (root->right && root->right->data == b)) ||
        ((root->right && root->right->data == a) || 
        (root->left && root->left->data == b)))
        return root;

    left = lca(root->left, a, b);
    right = lca(root->right, a, b);

    if (left && right)
        return root;
    else
    {
        if (left) return left;
        else return right;
    }
}

void createPath(node* root, int a)
{
    node *temp;
    temp = root;
    while(temp->data != a)
    {
        cout << temp->data << endl;
        temp = makePath(temp, a);
    }
}


node* makePath(node *n, int a)
{
   if(n->data == a) return n;
   if (a < n->data) return n->left;
   if (a > n->data) return n->right;
}


node* lca2(node* root, int a, int b)
{
    node *temp1, *temp2; 
    temp1 = root;
    temp2 = root;
    node *parent;
    while((temp1->data != a) || (temp2->data != b))
    {
        parent = temp1;
        //cout <<  "path1: " << temp1->data << " path2: " << temp2->data << endl;
        temp1 = makePath(temp1, a);
        temp2 = makePath(temp2, b);
        if (temp1->data != temp2->data)
            return parent;
    }
}


node *lca3(node *root, int v1,int v2)
{

    // make sure v1 < v2
    if (v1 > v2)
    {
        int t;
        t = v1;
        v1 = v2;
        v2 = t;
    }

    node *temp1, *temp2, *parent, *parentPrev; 
    temp1 = temp2 = root;
    vector<node*> store1, store2;    
        
    while((temp1->data != v1) || (temp2->data != v2))
    {
       store1.push_back(temp1);
       store2.push_back(temp2);  
       temp1 = makePath(temp1, v1);
       temp2 = makePath(temp2, v2);
       if (temp1->data != temp2->data) break;
    }

    vector<node*>::iterator ii;

    int last_i = store1.size()-1;

    if (((store1[last_i])->data == v2) && ((store2[last_i])->data == v2))
        return store1[last_i-1];
    else
        return store1[last_i];

     
}

