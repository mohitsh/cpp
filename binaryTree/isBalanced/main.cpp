#include<iostream>

using namespace std;


struct node
{
  node *left;
  node *right;
  int data;
};

node *newNode(int payload){

  node *new_node = new node;
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->data = payload;

  return new_node;
}


void inOrder(node *);
int isBalanced(node *);
int max(int, int);
int height(node *);

int main()
{

  node *root = newNode(10);
  root->left = newNode(5);
  root->right = newNode(15);

  root->left->left =  newNode(2);
  root->left->right =  newNode(6);

  //root->right->right = newNode(20);

  root->left->left->left =  newNode(8);
  //root->left->left->right =  newNode(24);

  //root->left->left->left->left = newNode(9);

  //root->left->left->left->left->left = newNode(11);

  inOrder(root);
  cout << endl;


  cout << "balanced or not: " << isBalanced(root) << endl;
}

void inOrder(node *root)
{
  
  if (root == nullptr)
    return;
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
  
}


int max(int a, int b)
{ 
  return ((a>=b)?a:b);
}

int height(node *root)
{

  if (root == nullptr) return 0;

  return (1+max(height(root->left), height(root->right)));
}


int isBalanced(node *root)
{

  if (root == nullptr) return 1;

  int heightLeft = height(root->left);
  int heightRight = height(root->right);

  int heightDiff = ((heightLeft - heightRight) <= 1);

  if (heightDiff &&
      isBalanced(root->left) &&
      isBalanced(root->right))
      return 1;

  return 0;

}
