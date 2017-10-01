#include<iostream>
#include<map>

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

node *insert(node *, int);
void printInOrder(node*);
void mirror(node *);
void search(node *, int, int, int);
void swapNodes(node *, int, int);

int main()
{
    map<int, node*> storage;


    node *root;
    node *nn; 
    root = new node;

    nn = newNode(1);
    storage[1] = nn;
    root = nn;

    int n;
    cin >> n; 

    for (int i = 1; i<=n; ++i)
    {
        node *nn1;
        int a, b;
        cin >> a >> b;
        node *in = storage[i];  // insertionNode -> in

        if (a == -1) in->left = NULL;
        else
        {
            nn1 = newNode(a);
            storage[a] = nn1; 
            in->left = nn1;
        }

        if (b == -1) in->right = NULL;
        else
        {
            nn1 = newNode(b);
            storage[b] = nn1;
            in->right = nn1;
        }

    } 

    //search(root, 2, 3, -1);
    printInOrder(root);
    cout << endl;

    int k;
    cin >> k;
    for (int i = 0; i<k; ++i)
    {
        int val;
        cin >> val;
        swapNodes(root, 1, val);
        printInOrder(root);
        cout << endl;
    }
    return 0;
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

void swapNodes(node *root, int c, int k)
{
    if (root == NULL)
        return;
    if ((c%k) == 0)
    {
        node *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    c +=1;
    swapNodes(root->left, c, k);
    swapNodes(root->right, c, k);
}

