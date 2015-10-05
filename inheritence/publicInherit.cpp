
#include <iostream>
#include <string>

class Base
{
	public:
		int m_nPublic;
	private:
		int m_nPrivate;
	protected:
		int m_nProtected;
};

class Pub: protected Base
{

	Pub()
	{
		m_nPublic = 0;
		//m_nPrivate = 1;
		m_nProtected = 2;
	}
};


int main()
{

	Pub cpub;
	//cpub.m_nPublic = 11;
	return 0;

}
