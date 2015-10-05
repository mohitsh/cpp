#include <iostream>
using namespace std;
class Base
{
private:
	int m_nValue;
public:
	Base(int value)
		: m_nValue(value)
	{
	}
protected:
	void PrintValue(){ cout << m_nValue << endl;}
};

class Derived: public Base
{
public:
	Derived(int value)
		: Base(value)
	{
	}
	Base::PrintValue;
};

int main()
{
	Derived cderived(10);
	cderived.PrintValue();
	return 0;
}
