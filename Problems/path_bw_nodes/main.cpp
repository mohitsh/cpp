#include<iostream>
#include<vector>

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


node* findLCA(node *, int, int);


void search(node *head, int val, vector<node*> &v){
    if (head == nullptr) return;
    if (head->data == val) return;
    else if (head->data > val){
        v.push_back(head);
        search(head->left, val, v);
    } 
    else{
        v.push_back(head);
        search(head->right, val, v);
    }

}


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

  int a = 29;
  int b = 53;
    
  node *lca = findLCA(root, a, b);

  vector<node*> v;

  search(lca, a, v);
  for (auto x:v)
      cout << x->data << " ";
  cout << endl;

  search(lca, b, v);
  for (auto x:v)
      cout << x->data << " ";
  cout << endl;
  
  cout << "edges: " << v.size() << endl;

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

