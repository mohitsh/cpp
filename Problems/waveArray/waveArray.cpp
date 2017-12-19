#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

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

  
    string buf, rawInput;
    getline(cin, rawInput);

    stringstream ss(rawInput);

    vector<int> v;
    while(ss >> buf)
    {
      int elem = stoi(buf);
      v.push_back(elem);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i<n-1; i = i+2)
      cout << v[i+1] << " " << v[i] << " ";

    if (n%2 != 0) cout << v[n-1];
    cout << endl;

  }
}

