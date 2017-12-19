#include<iostream>
#include<queue>
#include<string>
#include<sstream>

using namespace std;


int main()
{

  int t;
  cin >> t;
  cin.ignore();

  while(t--)
  {

    int n;
    cin >> n;
    cin.ignore();
    
    string rawInput, buf;
    getline(cin, rawInput);

    stringstream ss(rawInput);
    queue<int> pos, neg;

    while(ss >> buf)
    {
      int elem = stoi(buf);
      if (elem > 0) pos.push(elem);
      else neg.push(elem);
    }

    while(!pos.empty())
    {
      int posElem = pos.front();
      cout << posElem << " ";
      pos.pop();

      int negElem = neg.front();
      cout << negElem << " ";
      neg.pop();
    } 
    cout << endl;

  }


}
