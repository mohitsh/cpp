
#include <iostream>
#include <string>

class Base
{
private:
	int m_nPrivateNumber;
public:
	int m_nPublicNumber;
protected:
	int m_nProtectedNumber;
};

class Derived: public Base
{
public:
	Derived()
	{
		m_nPublicNumber = 1;
		//m_nPrivateNumber = 2;
		m_nProtectedNumber = 3;
	}
};

int main()
{
	Base cbase;
	cbase.m_nPublicNumber = 11;
	//cbase.m_nPrivateNumber = 21;
	//cbase.m_nProtectedNumber = 31;
}


