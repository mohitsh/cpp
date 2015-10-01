
#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	using namespace std;
	
	list<int> li;
	for (int i = 0; i<6; ++i)
		li.push_back(i);

	list<int>::const_iterator it;
	
	it = min_element(li.begin(), li.end());
	cout << "minimum: " << *it << "\n";
	it = max_element(li.begin(), li.end());
	cout << "maximum: " << *it << "\n";


	reverse(li.begin(),li.end());
	for (it = li.begin(); it != li.end(); it++)
		cout << *it << " ";
	cout << "\n";
}
