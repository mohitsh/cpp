#include<iostream>
#include<queue>
#include<functional>
#include<vector>
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

    int n, k;
    cin >> n >> k;
    cin.ignore();

    string rawInput, buf;
    getline(cin, rawInput);

    stringstream ss(rawInput);
    vector<int> v;
    while(ss >> buf)
    {
      int elem = stoi(buf);
      v.push_back(elem);
    } 
    
  }

  return 0; 
}
