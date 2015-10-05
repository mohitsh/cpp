
#include <iostream>
using namespace std;

class Base
{
	int m_nvalue;
	public:
		Base(int nvalue = 0)
			:m_nvalue(nvalue)
		{
			cout << "Base" << endl;
		}
};

class Derived : public Base
{
	public:
		double m_dvalue;
		Derived(double dvalue = 0.0)
			:m_dvalue(dvalue)
		{
			cout << "Derived" << endl;
		}
};

int main()
{
	cout << "start base" << endl;
	Base cbase;
	cout << "start derived" << endl;
	Derived cderived;
	return 0;
}
