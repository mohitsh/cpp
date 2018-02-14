#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



struct node{
    string data;
    node *left;
    node *right;
};


node *newNode(string payload){
    node *new_node = new node;
    new_node->data = payload;
    new_node->left = nullptr;
    new_node->right = nullptr;

    return new_node;
}

int isInt(string s){

    if (s.empty()) return false;

    char *p;
    strtol(s.c_str(), &p, 10);
    
    return (*p == 0);

}


void preorder(node *root){
    if(root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

string doMaths(node *root){

    // solve step
    
    int a = atoi((root->left->data).c_str());
    int b = atoi((root->right->data).c_str());
    int ans;
    if (root->data == "+") ans = a+b;
    else if (root->data == "-") ans = a-b;
    else if (root->data == "*") ans = a*b;
    
    string res = to_string(ans);
    return res;
}

void solve(node *root){

    if (root == nullptr) return;

    if (isInt(root->left->data) && isInt(root->right->data)){
        string ans = doMaths(root);
        root->data = ans;
    }
    solve(root->left);
    solve(root->right);
    cout << root->data << endl;
 
}
int main(){

    node *root = newNode("+");    

    root->left = newNode("+");
    root->right = newNode("*");
   
    root->left->left = newNode("1"); 
    root->left->right = newNode("*");

    root->left->right->left = newNode("2");
    root->left->right->right = newNode("3");

    root->right->left = newNode("+");
    root->right->right =  newNode("7");

    root->right->left->left = newNode("*");
    root->right->left->right = newNode("6");

    root->right->left->left->left = newNode("4");
    root->right->left->left->right = newNode("5");
    
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;

    solve(root);
    return 0;
}
