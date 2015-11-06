
#include <iostream>

class Cents
{
	private:
		int m_nCents;
	public:
		Cents(int nCents){ m_nCents = nCents;}
		friend Cents operator-(const Cents &cents);
};

Cents operator-(const Cents &cents)
{
	return Cents(-cents.m_nCents);
}
