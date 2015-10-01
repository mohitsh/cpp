
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>

int main()
{

	using namespace std;
	vector<int> vec;
	
	for (int i = 0; i<6; ++i)
		vec.push_back(i);
	
	vector<int>::const_iterator it;
	it = vec.begin();
	while (it != vec.end())
	{
		cout << *it << " ";
		it++;
	}

	cout << endl;

	list<int> li;
	for (int i = 6; i<11; ++i)
		li.push_back(i);
		
	list<int>::const_iterator it1;
	it1 = li.begin();
	while (it1 != li.end())
	{
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;

	map<int,string> mymap;
	mymap.insert(make_pair(1,"Jain"));
	mymap.insert(make_pair(2,"Mittal"));
	mymap.insert(make_pair(3,"Bohra"));
	mymap.insert(make_pair(4,"Dalla"));
	mymap.insert(make_pair(5,"Patange"));
	mymap.insert(make_pair(6,"Tomar"));

	map<int,string>::const_iterator it3;
	it3 = mymap.begin();
	while(it3 != mymap.end())
	{
		cout << it3->first << " = " << it3->second << ", ";
		it3++;
	}
	cout << endl;
}







