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
int sameTree(node *, node *);
int countTrees(int numKeys);

int main()
{

    node *root;
    root = new node;
    //root = newNode(314);
    root = newNode(2);

    node *root2;
    root2 = new node;
    root2 = newNode(2);

    int n;
    cout << "enter no of nodes: ";
    cin >> n; 

    for (int i = 0; i<n; ++i)
    {
        int data, data2;
        cout << "enter node " << i+1 << " value: "; 
        cin >> data;
        cout << "enter node " << i+1 << " value: "; 
        cin >> data2;
        root = insert(root, data);
        root2 = insert(root2, data2);
    } 

    
    int ans = sameTree(root, root2);
    cout << "both trees are equal: " << ans << endl;
    
    int num = countTrees(4);
    cout <<  "number of Trees: " << num << endl;
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

int sameTree(node *a, node *b)
{
    if ((a == NULL) && (b == NULL)) return true;
    else if ((a != NULL) && (b != NULL))
    {
        return (
                (a->data == b->data) 
                && sameTree(a->left, b->left) 
                && sameTree(a->right, b->right)
               );
    }
    else return false;
}

int countTrees(int numKeys)
{
    if (numKeys <= 1)
        return 1;

    else
    {
        int sum = 0;
        int left, right, root;

        for (int i = 1; i<=numKeys; ++i)
        {
            left = countTrees(i-1);
            right = countTrees(numKeys-i);
            sum += left*right;
        }
        return sum;
    }
}

