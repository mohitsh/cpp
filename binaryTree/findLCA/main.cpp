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

node* findLCA(node *, int, int);
node *bstLCA(node *, int, int);

int main()
{

  node *root = newNode(19);
  root->left = newNode(7);
  root->right = newNode(43);

  root->left->left =  newNode(3);
  root->left->right =  newNode(14);

  root->right->left = newNode(23);
  root->right->right = newNode(47);
  
  root->left->left->left =  newNode(2);
  root->left->left->right =  newNode(5);

  root->left->right->right =  newNode(17);
  root->left->right->right->left =  newNode(13);

  root->right->left->right = newNode(37);

  root->right->left->right->left = newNode(29);
  root->right->left->right->right = newNode(41);

  root->right->left->right->left->right = newNode(31);

  root->right->right->right = newNode(53);




  inOrder(root);
  cout << endl;

  node *lca = findLCA(root, 31, 41);
  cout << lca->data << endl;
  
  node *lca2 = bstLCA(root, 53, 13);
  cout << lca2->data << endl;

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


node* findLCA(node *root, int n1, int n2)
{
  if (root == nullptr) return nullptr;

  if (root->data == n1 || root->data == n2) return root;


  node *leftLCA = findLCA(root->left, n1, n2);
  node *rightLCA = findLCA(root->right, n1, n2);

  if (leftLCA && rightLCA) return root;

  if (leftLCA)
    return leftLCA;
  else
    return rightLCA;

}


node *bstLCA(node *root, int n1, int n2)
{
  if ((root->data >= n1 && root->data <= n2) ||
     (root->data <= n1 && root->data >= n2)) return root;

  if (root->data > n1 && root->data > n2)
    return bstLCA(root->left, n1, n2);

  if (root->data < n1 && root->data < n2)
    return bstLCA(root->right, n1, n2);
}

