#include<iostream>

using namespace std;

#define MAX 1000

class Stack
{

        int top; // counter to keep track of stack elements

public:
        Stack()  // initially no element (underflow)
        {
          top = -1;
        }         

        int a[MAX];        // static array 
        int pop();
        bool isEmpty();
        bool push(int x);
};

int Stack::pop()
{
        if (top < 0)
        {
                cout << "stack underflow: " << endl;
                return 0;
        }

        else
        {
		
                //int x = a[top--]; // return top value and decrease top by 1
		int x;
		x = a[top];
		top--;
                return x;
        }
}


bool Stack::push(int x)
{
        if (top >= MAX)
        {
                cout << "stack overflow!" << endl;
                return false;
        }

        else
        {
		top++;
                a[top] = x; // increase top by 1 and append new element
                return true;
        }
}

bool Stack::isEmpty()
{
        return (top < 0);
}

int main()
{

        struct Stack s;
        s.push(89);
        s.push(2512);
        s.push(99);
        cout  << s.pop () << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        return 0;
}

