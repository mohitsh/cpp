
#include <iostream>
#include <string>

struct Employee
{
	short id;
	int age;
	double wage;
};

void printFunction(Employee emp)
{
	using namespace std;
	cout << "id: " << emp.id << endl;
	cout << "age: " << emp.age << endl;
	cout << "wage: " << emp.wage << endl;
}

int main()
{
	Employee namit;
	namit.id = 1;
	namit.age = 21;
	namit.wage = 2000000;

	Employee jain {2,21,3000000};
	Employee jangida {3,21,3000000};

	printFunction(jain);
	printFunction(jangida);
}
