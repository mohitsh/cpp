#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;


int main()
{

  int t;
  cin >> t;
  cin.ignore();
  for (int i1 = 0; i1<t; ++i1)
  {
    int n;
    cin >> n;
    cin.ignore();

    string rawInput;
    string buf;

    getline(cin, rawInput);
    stringstream ss(rawInput);

    vector<int> v;
    while(ss >> buf)
    {
      int elem = stoi(buf);
      v.push_back(elem);
        
    }

    stack<int> s;

    for (int i = 0; i<v.size(); ++i)
    {
      if (s.empty())
        s.push(v[i]);

      else
      {
        int topElem = s.top();
        if (topElem >= v[i])
          s.push(v[i]);

        else
        {

          while(topElem < v[i] && !s.empty())
          {
              s.pop();
              if (!s.empty()) topElem = s.top();
          }
          
          s.push(v[i]);
        } 
      }
    } 

    int max = s.top();
    vector<int> stars;

    while(!s.empty())
    {
      stars.push_back(s.top());
      if (s.top() > max) max = s.top();
      s.pop();
    }

    reverse(stars.begin(), stars.end());
    int max_count = count(stars.begin(), stars.end(), max);
    stars.erase(unique(stars.begin(), stars.end()), stars.end());
    
    for (int i = 0; i<stars.size(); ++i)
      cout << stars[i] << " ";

    cout << endl;

    if (max_count == 1) cout << max << endl;
    else cout << -1  << endl;
  }
  return 0;

}
