
#include <iostream>

using namespace std;

class Cents
{
	private:
		int m_nCents;
	public:
		Cents(int nCents){m_nCents = nCents;}
		
		friend Cents operator+(const Cents &c1, const Cents &c2);
		int GetCents() {return m_nCents;}
};

Cents operator+(const Cents &c1, const Cents &c2)
{
	return Cents(c1.m_nCents+c2.m_nCents);
}


int main()
{
	Cents cCents1(6);
	Cents cCents2(8);
	Cents cCentsSum = cCents1 + cCents2;	
	cout << "I have: " << cCentsSum.GetCents() << endl;
}
