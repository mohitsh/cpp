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
void pathToLeaf(node *);
int max(int, int);
int treeSize(node *);
int maxDepth(node *);
int hasPathSum(node *, int);
void printArr(int[], int);
void printRecurPath(node *, int[], int);
void printPaths(node *);


int main()
{

  node *root = newNode(10);
  root->left = newNode(2);
  root->right = newNode(5);

  root->left->left =  newNode(3);
  root->left->right =  newNode(1);

  root->right->left = newNode(6);
  root->right->right = newNode(8);


  root->right->left->left = newNode(15);
  root->right->left->right = newNode(11);


  //root->left->left->left =  newNode(8);
  //root->left->left->right =  newNode(24);

  //root->left->left->left->left = newNode(9);

  //root->left->left->left->left->left = newNode(11);

  inOrder(root);
  cout << endl;

  pathToLeaf(root);
  int size = treeSize(root);

  //cout << "size: " << size << endl;
  //cout << "maximum depth: " << maxDepth(root) << endl;

  //cout << "pathSumPresen [1]: yes, [0]: no  => " << hasPathSum(root, 23) << endl;

  printPaths(root);

}

void inOrder(node *root)
{
  
  if (root == nullptr)
    return;
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
  
}



void pathToLeaf(node *root)
{

  if (root == nullptr) return;
  pathToLeaf(root->left);
  pathToLeaf(root->right);
}

int treeSize(node *root)
{
  if (root == nullptr) return 0;
  else
    return (1 + treeSize(root->left) + treeSize(root->right));
  
}

int maxDepth(node *root)
{

  if (root == nullptr) return 0;
  else
  {
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    if (lh > rh) return lh+1;
    else return rh+1;
  }
}

int hasPathSum(node *root, int sum)
{

  if (root == nullptr) return (sum == 0);
  else
  {
    int new_sum = sum - root->data;
    return (hasPathSum(root->left, new_sum) || 
            hasPathSum(root->right, new_sum));
  }

}


void printArr(int path[], int pathLen)
{

  for (int i = 0; i<pathLen; ++i)
    cout << path[i] << " ";

  cout << endl;
}

void printRecurPath(node *head, int path[], int pathLen)
{

  if (head == nullptr) return;

  path[pathLen] = head->data;
  pathLen++;

  if (head->left ==  nullptr and head->right == nullptr)
    printArr(path, pathLen);

  else
  {
    printRecurPath(head->left, path, pathLen);
    printRecurPath(head->right, path, pathLen);
  }
}

void printPaths(node *head)
{
  int arr[1000];

  printRecurPath(head, arr, 0);
}





