
#include <iostream>

class intList
{
	private:
		int m_anList[10];
	public:
		int& operator[] (const int nIndex);
};

int& intList::operator[](const int nIndex)
{
	return m_anList[nIndex];
}

int main()
{
	using namespace std;
	intList mylist;
	mylist[2] = 3;
	mylist[7] = 273;
	cout << mylist[2] << endl;
	cout << mylist[7] << endl;
	return 0;
}
