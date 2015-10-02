

#include <iostream>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

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
	
	map<int,string> mp;
	mp[1] = "Tapan";
	mp[2] = "Kutta";
	mp[3] = "Mittal";
	mp[4] = "Jain";
	mp[5] = "dalla";
	
	map<int,string>::iterator it3;
	for (it3 = mp.begin(); it3!=mp.end(); it3++)
		cout << "key: " << it3->first << " value: " << it3->second << "\n";

	cout << endl;

	stack<int> stack1;
	for (int i = 0; i<10; i++)
		stack1.push(i);
	
	cout << stack1.size() << endl;
	cout << stack1.empty() << endl;

	cout << "popped stack starts: " << endl;
	while (!stack1.empty())
	{
		cout << stack1.top() << " ";
		stack1.pop();
	}
	cout << endl << "popped stack ends: " << endl;

	cout << stack1.size() << endl;
	cout << stack1.empty() << endl;
	
	string b[] {"jain","kutta","bohra","tapan","dalla"};
	
	queue<string> q;
	int length1 = sizeof(b)/sizeof(*b);
	for (int i = 0; i<length1; i++)
		q.push(b[i]);
	
	while (!q.empty())
	{
		cout << q.front() << "\n";
		q.pop();
	}

	priority_queue<int> pq;
	int arr1[] {34,23,1223,435,1263,455,12,423,1935,9090};
	int len = sizeof(arr1)/sizeof(*arr1);
	//cout << "len: " << len << endl;

	for (int i = 0; i<len; i++)
		pq.push(arr1[i]);

	cout << "priority queue starts here: " << "\n";
	while (!pq.empty()){
		cout << pq.top() << "\n";
		pq.pop();
	}
	cout << "and it ends here: " << "\n";

}
	
















