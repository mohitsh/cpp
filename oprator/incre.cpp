
#include <iostream>

class Digit
{
	private:
		int m_nDigit;
	public:
		Digit(int nDigit = 0) {m_nDigit = nDigit;}
		
		Digit& operator++();
		Digit& operator--();
		
		int GetDigit() const{return m_nDigit;}
};

Digit& Digit::operator++()
{
	if (m_nDigit == 9)
		m_nDigit = 0;
	else
		++m_nDigit;
	return *this;
}

Digit& Digit::operator--()
{
	if (m_nDigit == 0)
		m_nDigit = 9;
	else
		--m_nDigit;
	return *this;
}

int main()
{
	using namespace std;
	Digit cdigit(5);
	cout << cdigit.GetDigit() << endl;
	Digit dude = ++cdigit;

	cout << dude.GetDigit() << endl;
}


