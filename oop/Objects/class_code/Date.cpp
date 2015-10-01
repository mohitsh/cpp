
#include <iostream>

class Date
{

	private:
		int m_month;
		int m_date;
		int m_year;
		
		Date() {}
	public:
		Date(int month, int date, int year);
		void setDate(int month, int date, int year);
		
		int GetMonth() {return m_month;}
		int GetDate() {return m_date;}
		int GetYear() {return m_year;}

};

Date::Date(int month, int date, int year)
{
	setDate(month, date, year);

}

void Date::setDate(int month, int date, int year)
{

	m_month = month;
	m_date = date;
	m_year = year;
}

int main()
{
	using namespace std;
	Date date(11,11,2011);
	cout << date.GetMonth() << "\n";
	cout << date.GetDate() << "\n";
	cout << date.GetYear() << "\n";
	
}




	
