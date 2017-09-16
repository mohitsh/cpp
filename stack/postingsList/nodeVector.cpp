#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{

    vector<node*> v;
    
    node *node1, *node2, *node3, *node4;
    node1 = new node;
    node2 = new node;
    node3 = new node;
    node4 = new node;

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    node4->data = 40;

    //v.push_back(node1);
    v.push_back(node2);
    v.push_back(node3);
    v.push_back(node4);

    vector<node*>::iterator itr;
    for(itr = v.begin(); itr != v.end(); ++itr)
        cout << (*itr)->data << endl;

    auto present = find(v.begin(), v.end(), node1);
    if (present != v.end())
        cout << "FOUND!" << endl;
    else
        cout << "NOT FOUND!" << endl;

}
