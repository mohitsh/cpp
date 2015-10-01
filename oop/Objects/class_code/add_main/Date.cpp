
#include <iostream>
#include "date.h"

int main()
{

	using namespace std;
	Date date(132,345,23424);
	cout << date.get_date() << "\n";
	cout << date.get_month() << "\n";
	cout << date.get_year() << "\n";


}
