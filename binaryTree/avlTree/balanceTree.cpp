#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<queue>

using namespace std;


struct node
{
    int data;
    node *left;
    node *right;
    node *parent = NULL;
    int ht = 0;
};

struct node* newNode(int data)
{
    node *newNode; // variable declaration

    // memory allocation // don't do this and you'll get segmentation fault
    newNode = new node;

    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = data;
    
    return newNode;
};


node *insert(node *, int);
void printInOrder(node*);


int main()
{

    int n;
    cin >> n;
    cin.ignore();

    string rawInput;
    string buf;

        
    getline(cin, rawInput);
    stringstream ss(rawInput);
    vector<int> tokens;
    while(ss>>buf)
    {
        int num = stoi(buf);
        tokens.push_back(num);
    }

    node *root;
    /* BUILDING THE TREE */
    for (int i = 0; i<n; ++i)
    {
        int value;

        if (i == 0) // this is the root
        {
            value = tokens[i];
            root = newNode(value);
        }
        else
        {
            value = tokens[i];
            root = insert(root, value);
        }

    }
    
    printInOrder(root);
    cout << endl;
    return 0;
}

node *insert(node *node, int data)
{
    if (node == NULL)
        return newNode(data); 
    if (data >= node->data)
        node->right = insert(node->right, data);
    else
        node->left = insert(node->left, data);
}


void printInOrder(node *root)
{
    if (root == NULL)
        return;
    
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right); 
}


void runbfs(node *root)
{
    queue q;    
     

}
