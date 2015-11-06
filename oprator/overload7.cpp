
#include <iostream>

class Cents
{

	private:
		int m_nCents;
	public:
		Cents(int nCents) {m_nCents = nCents;}
		
		//friend Cents operator+(Cents &cents1, int nvalue);
		Cents operator+(int nvalue);
		int GetCents() {return m_nCents;}
};

Cents Cents::operator+(int nvalue)
{
	return Cents(m_nCents + nvalue);
}

/*
Cents operator+(Cents &cents1, int nvalue)
{
	return Cents(cents1.m_nCents+nvalue);
}
*/

int main()
{
	using namespace std;

	Cents dude1(100);
	Cents dalla = dude1 + 20;
	cout << dalla.GetCents() << endl;
	return 0;
	
}
