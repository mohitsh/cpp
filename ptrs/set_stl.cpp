#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{


	int q;
	cin >> q;
	set<int> s;
	for (int i = 0; i<q; i++)
	{
		vector<int> vec1;
		set<int>::iterator it;
		for (int j = 0; j<2; j++){
			int x;
			cin >> x;
			vec1.push_back(x);
		}
		
                if (vec1[0] == 1)
                        s.insert(vec1[1]);
                else if (vec1[0]  == 2 && s.find(vec1[1]) != s.end())
                        s.erase(vec1[1]);
                else if(vec1[0]  == 3)
                {
                        if (s.find(vec1[1]) != s.end())
                                cout << "Yes" << "\n";
                        else
                                cout << "No" << "\n";
                }
	}
return 0;

}
