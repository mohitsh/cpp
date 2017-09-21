#include<iostream>
#include<vector>
#include "binarytree.h"

using namespace std;

//void printInOrder(node *);
node* printInOrder(node *);

node *createBinaryTree();
vector<node*> createDLL(node *, node*);

int main()
{
  node *root;
  root = new node;

  node *new_node;
  new_node = new node;

  root = createBinaryTree();
  new_node = printInOrder(root);


  return 0;
}

node *createBinaryTree()
{
  node *root;
  root = new node;
  root = newNode(10);

  root->left = newNode(12);
  root->right = newNode(15);

  root->left->left = newNode(25);
  root->left->right = newNode(30);

  root->right->left = newNode(36);

  return root;
}

node* printInOrder(node *root)
{

  if ((root->left == NULL) || (root->right == NULL))
    {
      //cout << "leaf node: " << root->data << endl;
      return root;
    }
  printInOrder(root->left);
  cout << "current root: " << root->data << endl;
  //return root;
  printInOrder(root->right);
  cout << "current root: " << root->data << endl;


}

