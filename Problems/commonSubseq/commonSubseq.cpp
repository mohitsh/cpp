#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{

  int t;
  cin >> t;
  cin.ignore();

  for (int i = 0; i<t; ++i)
  {
    string s1, s2;
    cin >> s1 >> s2;
    cin.ignore();

    int n1, n2;
    n1 = s1.size();
    n2 = s2.size();

    vector<char> v1(n1);
    vector<char> v2(n2);

    int n3  = ((n1 < n2) ? n1 : n2);

    vector<char> v3;

    for (int i = 0; i<s1.size(); ++i)
      v1.push_back(s1[i]);

    for (int j = 0; j<s2.size(); ++j)
      v2.push_back(s2[j]);


    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());


    string intersect;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(intersect));
    
    if (intersect.size() == 0) cout << 0 << endl
    else cout << 1 << endl;

  

  } 

  return 0;
}
