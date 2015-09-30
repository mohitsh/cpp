

#include <iostream>

class Date
{
public:
	int date;
	int month;
	int year;

	void printDate(int m_month, int m_date, int m_year){

		date = m_date;
		month = m_month;
		year = m_year;
	}
};

int main(){

using namespace std;
Date date1;
date1.printDate(11,11,2014);
cout << date1.date << "\n";

return 0;
}
