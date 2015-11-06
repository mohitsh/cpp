
#include <iostream>

using namespace std;

class Cents
{
	private:
		int m_nCents;
	public:
		Cents(int nCents){m_nCents = nCents;}
		
		friend Cents operator+(const Cents &c1, int nCents);
		
		friend Cents operator+(int nCents, const Cents &c2);
		int GetCents() {return m_nCents;}
};

Cents operator+(const Cents &c1, int nCents)
{	
	return Cents(c1.m_nCents+nCents);
}

Cents operator+(int nCents, const Cents &c2)
{
	return Cents(nCents+c2.m_nCents);
}

int main()
{
	Cents cCents1(6);
	Cents cCents2(8);
	Cents cCentsSum1 = cCents1 + 10;
	cout << "I have: " << cCentsSum1.GetCents() << endl;
	Cents cCentsSum2 = 2 + cCents2;
	cout << "I have: " << cCentsSum2.GetCents() << endl;
}


