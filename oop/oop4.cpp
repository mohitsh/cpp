
#include <iostream>

class Fraction{

private:
	int m_denominator;
	int m_numerator;

public:
	Fraction(int denom, int nume){

		//assert(denom != 0);
		m_denominator = denom;
		m_numerator = nume;
	}
	
	int GetDenominator(){return m_denominator;}
	int GetNumerator(){return m_numerator;}
	
	double getFraction(){return static_cast<double>(m_numerator)/m_denominator;}

};


class Date{

	private:
		int m_month;
		int m_date;
		int m_year;

	public:
		Date(int month = 11, int date=11, int year=2011){
			m_month = month;
			m_date = date;
			m_year = year;
		}
		int getDate(){return m_date;}
		int getMonth(){return m_month;}
		int getYear(){return m_year;}

};

int main(){

	Fraction f(2,5);
	std::cout << f.GetNumerator() << "\n";
	std::cout << f.GetDenominator() << "\n";
	std::cout << f.getFraction() << "\n";

	Date today(27,9,2015);
	std::cout << today.getDate() << "\n";
	std::cout << today.getMonth() << "\n";
	std::cout << today.getYear() << "\n";

}
