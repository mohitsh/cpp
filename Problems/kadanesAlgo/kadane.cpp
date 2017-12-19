#include<iostream>
#include<string>
#include<sstream>
#include<climits>

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
    int max = INT_MIN;
    int sum = 0;
    while(ss >> buf)
    {
      int elem = stoi(buf);
      if ((sum+elem) < elem) sum = elem;
      else sum += elem;

      if (sum >= max) max = sum;
      //cout << sum << endl;
    }

    cout << max << endl;
  }

  return 0;
}
