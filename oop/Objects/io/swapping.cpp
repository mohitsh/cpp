#include <iostream>
#include <vector>
using namespace std;

template <typename dude>
void swap1(dude &a, dude &b)
{
	cout << "before swapping " << a << " " << b << "\n";
	dude temp;
	temp = a;
	a = b;
	b = temp;	
	cout << "swapped elements " << a << " " << b << "\n";
}

int main()
{
	int a = 10;
	int b = 20;
	double c = 11.2;
	double d = 33.1;
	
	swap1(a,b);
	swap1(c,d);

	// vector traversing

	vector<int> v;
	vector<int>::iterator it;
	for (int i = 0; i<5; i++)
		v.push_back(i);
	for(it = v.begin(); it != v.end(); it++)
		cout<< *it;

	cout << endl;
}

