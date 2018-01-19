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
int isBST(node *);
int minValue(node *);
int maxValue(node *);

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
    root->left->right = newNode(9);

    //root->right->left = newNode(5);
    //root->right->right =  newNode(18);

    //printInOrder(root);
    cout << endl;

    //bool ans = checkBST(root);
    //cout << ans << endl;
    
    cout  << "isBst [1]: yes [0]: no => " << isBST(root) << endl;
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


int minValue(node *head)
{

  if (head == nullptr) return 0;

  while(head->left != nullptr) head = head->left;
  return head->data;
}

int maxValue(node *head)
{
  if (head == nullptr) return 0;
  
  while(head->right != nullptr) head = head->right;
  return head->data;

}

int isBST(node *head)
{
  // the essential condition of tree
  if (head == nullptr) return 1; 

  if (head->left != nullptr &&
      maxValue(head->left) > head->data) return 0;

  if (head->right != nullptr &&
      minValue(head->right) < head->data) return 0;

  if (!isBST(head->left) || !isBST(head->right)) return 0;

  return 1;

}


