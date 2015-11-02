
#include <iostream>

int main()
{
	using namespace std;
	int value = 5;
	int *ptr = &value;
	
	cout << *ptr << endl;
	*ptr = 20;
	cout << *ptr << endl;

	return 0;

}
