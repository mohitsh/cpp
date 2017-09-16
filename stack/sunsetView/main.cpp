#include<vector>
#include "stack.h"


Stack findBuildings(vector<double>);
int main()
{
    vector<double> v = {80, 60, 100, 40, 30, 10, 70, 50, 20}; 
    v = {10, 20, 30, 40, 50, 60, 50, 40, 30, 20, 10};
    
    Stack BuildingSequence;
    BuildingSequence = findBuildings(v);

    cout << "\nFINAL STACK: " << endl;
    while(!BuildingSequence.isEmpty())
        cout << BuildingSequence.pop() << endl;

}


Stack findBuildings(vector<double> v)
{

    Stack s;
    vector<double>::iterator itr;
    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << "Processing: " << *itr << endl;
        if ((s.isEmpty()) || (s.showTop() > *itr))
        {
            cout << "Stack is empty or Stack Top is greater, Push " << *itr << " to stack" << endl;
            s.push(*itr);
            continue;
        }

        cout << "Stack top is Smaller or Equal. Keep popping " << endl;
        while (!(s.isEmpty()) && (s.showTop() <= *itr))
        {
            double popped = s.pop();
            cout << "Popped: " << popped << endl;
        }

        cout << "Now Stack top is: " << s.showTop() << " Hence push " << *itr << " to top to stack " << endl;
        s.push(*itr);
    }

    return s;
}
