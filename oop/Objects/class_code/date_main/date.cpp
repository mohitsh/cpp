
#include "date.h"

	
Date::Date(int month, int date, int year){
	setDate(month,date,year);
}

void Date::setDate(int month, int date, int year){
	m_month = month;
	m_date = date;
	m_year = year;
}


