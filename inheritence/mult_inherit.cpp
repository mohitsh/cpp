
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string m_strName;
	int m_age;
	bool m_IsMale;
public:
	Person(string strName, int age, bool IsMale)
		: m_strName(strName),m_age(age),m_IsMale(IsMale)
	{
	}
	string GetName(){return m_strName;}
	int GetAge(){return m_age;}
	bool GetIsMale(){return m_IsMale;}

};

class Employee
{
private:
	string m_strEmployee;
	double m_wage;
public:
	Employee(string strEmployee, double wage)
		: m_strEmployee(strEmployee), m_wage(wage)
	{
	}

	string GetEmployee(){return m_strEmployee;}
	double GetWage(){return m_wage;}
	
	
};

class Teacher: public Person, public Employee
{

private:
	int m_nTeachesGrade;
	
public:
	Teacher(string str_name, int age, bool IsMale, string str_employee, double wage, int TeachesGrade)
	: Person(str_name,age,IsMale), Employee(str_employee, wage), m_nTeachesGrade(TeachesGrade)
	{
	}

};

int main()
{
	return 0;
}







