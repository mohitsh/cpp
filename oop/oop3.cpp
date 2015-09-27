

#include <iostream>

class Date {


private:
	int m_month;
	int m_date;
	int m_year;

public:
	int getMonth(){return m_month;}
	int getDate(){return m_date;}
	int getYear(){return m_year;}

	int setMonth(int month){m_month = month;}
	int setDate(int date){m_date = date;}
	int setYear(int year){m_year = year;}
};

int main(){

	Date today;
	today.setMonth(12);
	today.setDate(13);
	today.setYear(3311);
	
	std::cout << today.getMonth() << "\n";
	std::cout << today.getDate() << "\n";
	std::cout << today.getYear() << "\n";

}
