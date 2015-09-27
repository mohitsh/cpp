

#include <iostream>

int main(){

struct DateStruct{

	int month;
	int date;
	int year;

};

class Date{

public:
	int m_month;
	int m_data;
	int m_year;

	void setDate(int date, int month, int year){
		
		m_month = month;
		m_data = date;
		m_year = year;

	}

};

Date m_today;
m_today.setDate(111,122,333);
//m_today.m_month = 10;
//m_today.m_data = 12;
//m_today.m_year = 2010;

std::cout << m_today.m_month << "\n";
std::cout << m_today.m_data << "\n";
std::cout << m_today.m_year << "\n";

DateStruct today;

today.month = 11;
today.date = 11;
today.year = 2011;


std::cout << today.month << "\n";
std::cout << today.date << "\n";
std::cout << today.year << "\n";


}
