

#include <iostream>
#include <list>
#include <set>
int main()
{
	using namespace std;

	list<int> li;
	for (int i = 0; i<10; i++)
		li.push_back(i);
	list<int>::iterator it;
	for(it = li.begin(); it != li.end(); it++)
		cout << *it << " ";
	cout << endl;

	li.reverse();
	it = li.begin();
	while(it != li.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	
	pair<int,string> p1;
	p1 = make_pair(1,"Mittal");
	cout << p1.first << "\n";
	cout << p1.second << "\n";

	pair<int,string> p2;
	p2 = make_pair(2,"Kutta");
	cout << p2.first << "\n";
	cout << p2.second << "\n";

	pair<int,string> p3(3,"Jain");
	cout << p3.first << "\n";
	cout << p3.second << "\n";

	set<int> s1;
	int a[] {12,43,123,45,1234,546,1243,4,56,124};

	int length = sizeof(a)/sizeof(*a);
	for (int i = 0; i<length; i++)
		s1.insert(a[i]);

	set<int>::iterator it1;
	for (it1 = s1.begin(); it1!=s1.end(); it1++)
		cout << *it1 << " ";
	
	cout << endl;
}
	











