
#include <iostream>

class Date{

private:
	int m_Month;
	int m_Date;
	int m_Year;

	Date(){};
public:
	Date(int month, int date, int year);
	void setDate(int month, int date, int year);

	int GetMonth() {return m_Month;}
	int Get_Date() {return m_Date;}
	int Get_Year() {return m_Year;}

};

Date::Date(int month, int date, int year){
setDate(month,date,year);
}

void Date::setDate(int month, int date, int year){

	m_Month = month;
	m_Date = date;
	m_Year = year;

}
