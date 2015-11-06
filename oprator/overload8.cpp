

#include <iostream>

class Cents
{
	private:
		int m_nCents;
	public:
		Cents(int nCents) { m_nCents = nCents;}

		Cents operator+(int nvalue);
		int GetCents(){return m_nCents;}
};

Cents Cents::operator+(int nvalue)
{
	return Cents(m_nCents + nvalue);
}

int main()
{
	using namespace std;
	
	Cents dude1(100);
	Cents dalla = dude1 + 200;
	cout << dalla.GetCents() << endl;

}
