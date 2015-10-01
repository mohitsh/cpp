
#include <iostream>
#include <vector>
#include <deque>

int main()
{
	using namespace std;
	
	vector<int> vect;

	for (int i = 0; i<6; ++i)
	{
		vect.push_back(i);
	}
	for (int i = 0; i<6; ++i)
	{
		cout << vect[i] << " ";
	}
	cout << endl;

	deque<int> deq;
	
	for (int i = 0; i<6; ++i)
	{
		deq.push_front(i);
		deq.push_back(10-i);
	}
	for (int i = 0; i<deq.size(); ++i)
	{
		cout << deq[i] << " ";
	}
	cout << endl;

}
