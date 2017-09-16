#include<iostream>
#include "stack.h"

int main()
{

    Stack s;
    s.push(11);
    cout << s.showTop() << endl;
    s.push(1);
    cout << s.showTop() << endl;
    s.push(1001);
    cout << s.showTop() << endl;
    s.push(200);
    cout << s.showTop() << endl;
}
