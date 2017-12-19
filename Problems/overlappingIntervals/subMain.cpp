#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<sstream>


using namespace std;


void mergeOverlap(vector<int> &v, int n)
{

  // s -> stores start of interval
  // e -> stores end of interval
  stack<int> s,e; 

  s.push(v[0]); // initialize
  e.push(v[1]);
  for (int i = 2; i<2*n; i = i+2)
  {
    cout << v[i] << " " << v[i+1] << endl;
    int l,r;
    l = v[i];
    r = v[i+1];

    int stop, etop;
    stop = s.top();
    etop = e.top();

    if(l > stop && l < etop && r > stop && r > etop)
    {
      // expand the span to the  right
      e.pop();
      e.push(r); 
    }

    else if( r > stop && r < etop && l < stop && r < etop)
    {
      s.pop();
      s.push(l); // expand the sapn to left
    }

    else if(l > stop && l > etop && r > stop && r > etop)
    {
      // mutually exclusive range to the right
      s.push(l);
      e.push(r);
    }

    else if (l > stop && l > etop && r > stop && r > etop)
    {
      // mutually exclusive range to the left
      s.push(l);
      e.push(r);
    } 



  }

}

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

    vector<int> v;
    while(ss >> buf)
    {
      int elem = stoi(buf);
      v.push_back(elem); 
    }

    mergeOverlap(v, n);

    cout << endl;
  }



  return 0;  
}

