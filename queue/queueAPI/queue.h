#include<iostream>

using namespace std;

#define MAX 1000


class Queue
{
    int top = -1; // enque from top and deque from rear
    int rear = 0;
public:
    double a[MAX];
    double deque();
    bool enque(double x);
    bool isEmpty();
};


double Queue::deque()
{
   double elem = a[rear];
   rear = rear + 1;
   return elem;
}

bool Queue::enque(double x)
{
    if (top >= MAX)
        return false;
    else
    {
        top = top + 1;
        a[top] = x;
        return true;
    }
}

bool Queue::isEmpty()
{
    if (rear > top)
        return true;
    else
        return false;

}
