#include<iostream>
#include<string>

using namespace std;

struct node
{
    int freq;
    char data;
    node *left;
    node *right;
};

struct node *newNode(char val)
{
    node *new_node;
    new_node = new node;
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->freq = 1;

    return new_node;
};

void printInOrder(node*);
void hoffman(node *, string);

int main()
{

    node *root;
    node *nn; 
    root = new node;

    root = newNode(' ');
    //storage[1] = nn;

    root->left = newNode(' ');
    root->right = newNode('A');

    root->left->left = newNode('B');
    root->left->right = newNode('C');


    string path = "1001011"; 
    hoffman(root, path);
    //printInOrder(root);

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

void hoffman(node *root, string path)
{
    node *temp = root;
    char val;
    string decode;
    for (int i = 0; i<path.length(); ++i)
    {
        char elem = path[i];
        if (elem == '1'){
            temp = temp->right; 
            if (temp->left == NULL && temp->right == NULL)
            { 
                val = temp->data;
                temp = root;
                decode += val;
            }
        }
        if (elem == '0')
        {
            temp = temp->left;
            if (temp->left == NULL && temp->right == NULL)
            {
                val = temp->data;
                temp = root;
                decode += val;
            }
        }
    }

    cout << decode << endl;
}
