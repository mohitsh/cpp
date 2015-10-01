
#include <iostream>

class Date
{

	private:
		int m_month;
		int m_date;
		int m_year;
		
		Date() {}
	public:
		// prototype of constructor 
		Date(int month, int date, int year);
		// prototype of function
		void setDate(int month, int date, int year);
		
		int GetMonth() {return m_month;}
		int GetDate() {return m_date;}
		int GetYear() {return m_year;}

};

// implementation of class
Date::Date(int month, int date, int year)
{
	setDate(month, date, year);

}
// implementation of function
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




	
