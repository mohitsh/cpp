#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>


using namespace std;

struct node{
    string data;
    node *left;
    node *right;
};

node *newNode(string data){
    node *new_node = new node;
    new_node->data = data;
    new_node->left = nullptr;
    new_node->right = nullptr;
    return new_node;
}

void inorder(node *head){
    if (head == nullptr) return;
    inorder(head->left);
    cout << head->data << " ";
    inorder(head->right);
}

void buildTree(vector<string> v){

    vector<string> op = {"+","-","*","/"};
    node *root = nullptr;
    stack<node*> s;


    for (auto x:v){
        vector<string>::iterator it;
        it = find(op.begin(), op.end(), x);
        if (it == op.end()){
            s.push(newNode(x));
        } 
        else{
            node *head = newNode(x);
            node *t1 = s.top(); s.pop();
            node *t2 = s.top(); s.pop();
            head->left = t2;
            head->right = t1;
            s.push(head);
            root = head;
        }
    }
    inorder(root);
    cout << endl;
}

int main(){

    vector<string> expr = {"a", "b", "+", "c", "d", "e", "+", "*", "*"};
    buildTree(expr);
     
    return 0;
}
