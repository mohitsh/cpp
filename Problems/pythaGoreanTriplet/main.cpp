#include<iostream>
#include<queue>
#include<functional>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int numWithSum(vector<int> v, int n, int x)
{

    int l, r;
    l = 0;
    r = n-1;
    int found = false;
    while(l<r)
    {
        if (v[l] + v[r] == x)
        { 
            found = true;
            break;
        }
        else if (v[l] + v[r] < x) l++;
        else if(v[l] + v[r] > x) r--; 
    }

    return found;

}

int doSquare(int x) { return x*x; }

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

    sort(v.begin(), v.end());
    vector<int> square;

    transform(v.begin(), v.end(), back_inserter(square), doSquare);
    int sq_size = square.size();

    int found = false;
    for (int i = sq_size-1; i>1; --i)
    {
        int sum = square[i];
        vector<int> newVec(square.begin(),square.begin()+i);
        //for (int j = 0; j<newVec.size(); ++j)
            //cout << newVec[j] << " ";
        
        if  (numWithSum(newVec, newVec.size(), sum))
        {
            found = true;
            break;
        }
    }  

    if (found) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0; 
}
