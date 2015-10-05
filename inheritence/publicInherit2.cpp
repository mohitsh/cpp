
#include <iostream>
#include <string>

using namespace std;

class Base
{

protected:
	int m_nValue;
public:
	Base(int nValue)
		: m_nValue(nValue)
	{
	}
	void Identify() {cout << "This is Base " << endl;}
};
	
class Derived: public Base
{
public:
	Derived(int value)
		: Base(value)
	{
	}
	int GetValue(){return m_nValue;}
	void Identify()
	 {
		Base::Identify();
		cout << "this is derived " << endl;
	}

};

int main()
{
	Base cbase(10);
	Derived cDerived(5);
	//cout << "value of cDerived " << cDerived.GetValue() << endl;
	cout << "Base is called here: " << endl;
	cbase.Identify();
	cout << "Base call ends here: " << endl;
	cout << "Derived is called here: " << endl;
	cDerived.Identify();
	cout << "Derived ends here: " << endl;
}

