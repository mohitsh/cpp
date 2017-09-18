#include<iostream>
#include<vector>
#include "binarytree.h"

using namespace std;

void printInOrder(node *);

node *createBinaryTree();
vector<node*> createDLL(node *, node*);

int main()
{
  node *root;
  root = new node;

  root = createBinaryTree();
  printInOrder(root);

  node *head;
  head = NULL;

  vector<node*> storedNodes;
  //storedNodes = createDLL(head, root);

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

void printInOrder(node *root)
{
  vector<node*> storage;


  if (root == NULL)
    return;
  printInOrder(root->left);
  cout << root->data << endl;
  storage.push_back(root);
  printInOrder(root->right);

  int size = storage.size();
  vector<node*>::iterator itr;

  node *head;
  head = NULL;

  head = storage[0];
  for(int i = 0; i<size; ++i)
  {
    if (i != size-1)
      storage[i]->right = storage[i+1];
    if (i != 0)
      storage[i+1]->left = storage[i];
  }

   // traversing the DLL

  int count = 0;
  node *traver = head;
  while(count < size)
  {
    if (count == 0)
      cout << "current node: " << traver->data << " right: " << traver->right->data << endl;
    else if (count == size-1)
      cout << "current node: " << traver->data << " left: " << traver->left->data << endl;
    else
      cout << "current node: " << traver->data << " left: " << traver->left->data << "right: " << traver->right->data << endl;

}
}

