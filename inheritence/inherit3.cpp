
#include <iostream>
using namespace std;

class Base
{
	public:
		int m_nvalue;
		Base(int nvalue = 0)
			: m_nvalue(nvalue)
		{
		}
};

class Derived : public Base
{
	public:
		double m_dvalue;
		Derived(double dvalue = 0.0, int nvalue)
			: Base(nvalue),
				m_dvalue(dvalue)
		{
		}
};

int main()
{
	Derived cderived(1.11,4);
	
	return 0;

}
