#include<iostream>
#include<string>

using namespace std;

#define MAX 1000

class Stack
{
  int top = -1;
public:
  string a[MAX];
  string pop();
  bool push(string x);
  bool isEmpty();
};


string Stack::pop()
{
  if (top < 0)
  {
    cout << "stack underflow!";
    return 0;
  }
  else
  {
    string elem = a[top];
    top -= 1;
    return elem;
  }
}

bool Stack::push(string elem)
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
