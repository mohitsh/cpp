
#include <iostream>
using namespace std;
class Person
{

	public:
		string m_strName;
		int m_nAge;
		bool m_bIsMale;
		
		string GetName(){return m_strName;}
		int GetAge(){return m_nAge;}
		bool IsMale(){return m_bIsMale;}

		Person(std::string strName = "", int age = 0, bool bIsMale = false)
			: m_strName(strName), m_nAge(age), m_bIsMale(bIsMale)
		{
		}

};

class BaseballPlayer : public Person
{

	public:
		double m_dBattingAverage;
		int m_nHomeRuns;
	
	BaseballPlayer(double dBattingAverage = 0.0, int nHomeRuns = 0)
		: m_dBattingAverage(dBattingAverage),m_nHomeRuns(nHomeRuns)
		{
		}
};

class Employee: public Person
{
	public:
		string m_strEmployeeName;
		double m_dHourlySalary;
		long m_EmployeeID;
		
		Employee(string str_EmployeeName, double dHourlySalary, long EmployeeID)
			: m_strEmployeeName(str_EmployeeName), m_dHourlySalary(dHourlySalary), m_EmployeeID(EmployeeID)
		{
		}
		
		double GetHourlySalary(){ return m_dHourlySalary;}
		void PrintNameAndSalary()
		{
			cout << m_strEmployeeName << ":" << m_dHourlySalary << endl;
		}
};

class Supervison: public Employee
{
	public:
		int m_nOverseesIDs[5];
};

int main()
{

	BaseballPlayer dude;
	dude.m_strName = "bohra dude";
	cout << dude.GetName() << endl;
	Employee bohra("bohra",10000,1234);
	bohra.PrintNameAndSalary();
	return 0;
}









