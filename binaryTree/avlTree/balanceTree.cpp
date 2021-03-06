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
void printInOrder(node*, int);
int runbfs(node *);


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
    
    int depth = runbfs(root);

    printInOrder(root, depth);

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


void printInOrder(node *root, int depth)
{
    if (root == NULL)
        return;
    
    printInOrder(root->left, depth);
    cout << root->data << " height: " << depth - root->ht << endl;
    printInOrder(root->right, depth); 
}

int runbfs(node *root)
{
    /*
     assigns depth to each node 
     it is store in node->ht

     returns maximum depth

    */
    queue<node*> q;
    int depth;    
    node *origin = root;
    origin->ht = 0;
    while(origin != NULL)
    {
      cout << origin->data << endl;
      if (origin->left != NULL)
      {
        node *leftChild = origin->left;
        leftChild->ht = origin->ht + 1;
        leftChild->parent = origin;
        q.push(leftChild);
      }
      if (origin->right != NULL)
      {
        node *rightChild = origin->right;
        rightChild->ht = origin->ht + 1;
        rightChild->parent = origin;
        q.push(rightChild);
      }
      depth = origin->ht;
      origin = q.front();
      q.pop();
    }
    return depth;
}
