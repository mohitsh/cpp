#include<iostream>

using namespace std;

#define MAX 1000

class Stack
{
  int top = -1;
public:
  int a[MAX];
  int pop();
  bool push(int x);
  bool isEmpty();
};


int Stack::pop()
{
  if (top < 0)
  {
    cout << "stack underflow!";
    return 0;
  }
  else
  {
    int elem = a[top];
    top -= 1;
    return elem;
  }
}

bool Stack::push(int elem)
{
  if (top >= MAX)
  {
    cout << "stack overflow!";
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
