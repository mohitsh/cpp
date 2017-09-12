#include<iomanip>
#include<map>
#include "stack.h"

void stackTrialRun(Stack);


int main()
{
  Stack s;

  map<int, int> max_store;
  int elem, n, max;
  cout << setw(20) << "enter n: ";
  cin >> n;

  cout << setw(20) << "enter element 1: ";
  cin >> elem;
  max = elem; // assign first element as max
  s.push(elem);
  max_store.insert(pair<int, int>(elem, 1));

  for(int i = 1; i<n; ++i)
  {
    cout << setw(20) << "enter element " << (i+1) << ": ";
    cin >> elem;

    s.push(elem);
    if (elem > max)
    {
      auto find = max_store.find(elem);
      if (find != max_store.end())
      {
        int value = find->second;
        value += 1;
        find->second = value;
      }
      else
      {
        max_store.insert(pair<int, int>(elem, 1));
      }
    max = elem;
    }
  }

  //map<int, int>::iterator iter;
  //for(iter = max_store.begin(); iter != max_store.end(); ++iter)
  //{
   // cout << setw(10) <<  "key: " << iter->first << endl;
    //cout << setw(10) << "value: "<< iter->second << endl;
  //}
  cout << "The maximum elment: " << max << endl;
  return 0;
}

void stackTrialRun(Stack s)
{
  int elem, n, max;

  cout << setw(20) <<  "enter n: ";
  cin >> n;

  cout << setw(20) << "enter element 1: ";
  cin >> elem;
  s.push(elem);
  cout << setw(20) << "PUSHED: " << elem << " on to the stack!" << endl;

  for(int i = 2; i < n; ++i)
  {
    cout << setw(20) << "enter element " << (i+1) << ": ";
    cin >> elem;
    s.push(elem);
    cout << setw(20) << "PUSHED: " << elem << " on to the stack!" << endl;
  }

  cout << "popping elements from stack" << endl;

  while(!s.isEmpty())
  {
    cout << "popped element: " << s.pop () << endl;
  }

}
