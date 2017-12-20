#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;


void mergeOverlap(vector<int> &v, int n)
{

  int s = (*max_element(v.begin(), v.end()))+1;
  //cout << s << endl;

  vector<int> marker(s);

  for (int i = 0; i<v.size(); i = i+2)
  {
    int start = v[i];
    int end = v[i+1];
    //cout << start << " " << end << endl;

    if (start == end)
    {
        // do not oveeride 1 since 1 means it is part of some overlapping range
        if (marker[start] == 0) marker[start] = 2; // if 2 then left and right was equal
    }
    for (int j = start; j<end; ++j)
    {
        marker[j] = 1;
    }
  }

  //for (int i = 0; i<s; ++i)
  //  cout << marker[i] << " ";
  //cout << endl;

    vector<vector<int> > range; 
    
    for (int i = 0; i<s; ++i)
    {
        if (marker[i] == 2)  // start and end range is equal. [1,1]
        {
            vector<int> new_range = {i, i};
            range.push_back(new_range);
        }

        else if (marker[i] == 1)
        {
            if (i-1>=0 && marker[i-1] == 1) // extend the range 
            {
                vector<int> last_range = range[range.size()-1]; // extract
                last_range[1] = i+1; // change

                range[range.size()-1] = last_range; // update
            }

            if (i-1 >= 0 && marker[i-1] != 1)
            {
                vector<int> new_range = {i, i+1};
                range.push_back(new_range);
                
            }
        }
    }  

    for (int i = 0; i<range.size(); ++i)
    {
        vector<int> elem = range[i];
        cout << elem[0] << " " << elem[1] << " ";
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

