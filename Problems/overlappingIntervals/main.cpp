#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;


void mergeOverlap(vector<int> &v, int n)
{


  int s = *max_element(v.begin(), v.end());
  cout << s << endl;

  vector<int> marker(s+1);

  for (int i = 0; i<v.size(); ++i)
  {
    
    marker[v[i]] = 1;
  }

  for (int i = 0; i<marker.size(); ++i)
    cout << marker[i] << " ";

  cout << endl;

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

