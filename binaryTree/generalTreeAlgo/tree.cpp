#include<iostream>

using namespace std;


struct node
{
  int data;
  node* left;
  node* right;
};

node *newNode(int key)
{

  node *new_node = new node;
  new_node->data = key;
  new_node->left = nullptr;
  new_node->right = nullptr;
  return new_node;
}

void printInOrder(node *root)
{
  if (root == nullptr) return; 
  printInOrder(root->left);
  cout << root->data << endl;
  printInOrder(root->right);
}

void printArr(int paths[], int pathLen)
{

  for (int i = 0; i<pathLen; ++i)
    cout << paths[i] << " ";

  cout << endl;
}

void root2leaf(node *head, int paths[], int pathLen)
{
  if (head == nullptr) return;
  
  paths[pathLen] = head->data;
  pathLen++;

  if (head->left == nullptr && head->right == nullptr)
    printArr(paths, pathLen);

  else
  {
    root2leaf(head->left, paths, pathLen);
    root2leaf(head->right, paths, pathLen);
  }  
}

void printAllPaths(node *head)
{
  /* driver function to print all paths */
  int paths[1000];

  root2leaf(head, paths, 0);
}


int hasPathSum(node *head, int sum)
{

  if (head == nullptr) return (sum == 0);
  else
  {
    int new_sum = sum - head->data;
    return (hasPathSum(head->left, new_sum) ||
        hasPathSum(head->right, new_sum));
  }
}


int maxDepth(node *head)
{
  if (head == nullptr) return 0;
  int lefth = maxDepth(head->left);
  int righth = maxDepth(head->right);
  if (lefth>righth) return 1+lefth;
  else return 1+righth;

}

int treeSize(node *head)
{

  if (head == nullptr) return 0;

  return (1+treeSize(head->left) + treeSize(head->right));

}

int main()
{
  node *root = newNode(10);
  root->left = newNode(5);
  root->right = newNode(15);

  root->left->left = newNode(2);
  root->left->right =  newNode(6);
  
  root->right->left =  newNode(12);
  root->right->right = newNode(16);

  root->left->left->left = newNode(1);
  root->left->left->right = newNode(3);

  root->right->left->left =  newNode(11);
  root->right->left->right =  newNode(14);

  root->right->left->right->left =  newNode(13);
  root->right->left->right->right =  newNode(16);

  //printInOrder(root);
  printAllPaths(root);
  cout << hasPathSum(root,18) << endl;
  cout << hasPathSum(root,0) << endl;
  cout << hasPathSum(root,20) << endl;
  cout << maxDepth(root) << endl;

  cout << "tree size: " << treeSize(root) << endl;
  return 0; 
  
}
