#include<iostream>
#include<string>
#include "node.h"

using namespace std;

#define MAX 1000

class Stack
{
  int top = -1;
public:
  node* a[MAX];
  node* pop();
  bool push(node* x);
  bool isEmpty();
};


node* Stack::pop()
{
  if (top < 0)
  {
    //cout << "stack underflow!";
    return 0;
  }
  else
  {
    node* elem = a[top];
    top -= 1;
    return elem;
  }
}

bool Stack::push(node* elem)
{
  if (top >= MAX)
  {
    //cout << "stack overflow!";
    return false;
  }
  else
  {
    top += 1;
    a[top] = elem;
    return true;
  }
}

bool Stack::isEmpty()
{
  if (top < 0)
    return true;
  else
    return false;
}
