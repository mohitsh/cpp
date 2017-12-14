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
void printRevInOrder(node*);
bool checkBST(node*);
int findBST(node*, int, int);
int isBst(node *);
int performBst(node *);


vector<int> store;

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

    //bool ans = checkBST(root);
    //cout << ans << endl;
    
    cout  << "isBst [1]: yes [0]: no => " << isBst(root) << endl;
    cout << "after RevInOrder: " << endl;
    printRevInOrder(root);
    cout << endl;
    vector<int>::iterator it;
    for(it = store.begin(); it != store.end(); ++it)
      cout << *it << endl;
   
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



void printRevInOrder(node *root)
{
  if (root == nullptr) return;
  printRevInOrder(root->right);
  store.push_back(root->data);
  cout << root->data << " ";
  printRevInOrder(root->left);
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


int performBst(node *root)
{
  if (root == nullptr) return 1;

  if ((root->left == nullptr) &&
      (root->right == nullptr))
      return 1;

  else if (root->left && 
      root->right &&
      (root->data >= root->left->data) &&
      (root->data <= root->right->data)) 
      return 1;
  else return 0; 
}

int isBst(node *root)
{
  return (performBst(root->left) && performBst(root->right));

}
