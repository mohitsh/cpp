#include<iostream>

using namespace std;

#define MAX 1000

class Stack
{
  int top = -1;
public:
  double a[MAX];
  double pop();
  bool push(double x);
  bool isEmpty();
  double showTop();
};


double Stack::pop()
{
  if (top < 0)
  {
    cout << "stack underflow!";
    return 0;
  }
  else
  {
    double elem = a[top];
    top -= 1;
    return elem;
  }
}

bool Stack::push(double elem)
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

double Stack::showTop()
{
    return a[top];
}
