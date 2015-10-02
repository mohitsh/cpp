
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()

{


	vector<int> vec1;
	vec1.push_back(1);
        vec1.push_back(3);
        vec1.push_back(5);
	vec1.push_back(5);
	vec1.push_back(5);
        vec1.push_back(6);
        vec1.push_back(9);
        vec1.push_back(12);
        vec1.push_back(15);
        vec1.push_back(19);
        vec1.push_back(23);
        vec1.push_back(27);

	vector<int>::iterator low,up;
	low = lower_bound(vec1.begin(),vec1.end(),17);
	up = upper_bound(vec1.begin(),vec1.end(),17);

	cout << low << "\n";
	cout << up << "\n";
	cout << (low-vec1.begin()) << "\n";
	cout << (up-vec1.begin()) << "\n";
	cout << min((low-vec1.begin()),(up-vec1.begin()) ) << "\n";
}
