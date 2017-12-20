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


    priority_queue<int, vector<int>, greater<int> > pq;
    // initialize the pq  
    
    for (int i = 0; i<k; ++i)
      pq.push(v[i]);



    for (int i = k; i<n; ++i)
    {
      int pqtop = pq.top();
      if (v[i] > pqtop)
      {
        pq.pop();
        pq.push(v[i]);
      }
    }

    vector<int> result;
    while(!pq.empty())
    {
      result.push_back(pq.top());
      pq.pop();
    }
    
    for (int i = result.size()-1; i>=0; --i)
      cout << result[i] << " ";
    cout << endl;
  }

  return 0; 
}
