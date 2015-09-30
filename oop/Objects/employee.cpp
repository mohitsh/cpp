
#include <iostream>
#include <cstring>
class Employee
{

	public:
		char m_strName[25];
		int m_id;
		int m_wage;
	
	void set_info(const char *name, int id, int wage){
		strncpy(m_strName,name,25);
		m_id = id;
		m_wage = wage;
	}
	void print(){
		using namespace std;
		cout << "Name: " << m_strName << "\n" << 
		"id: " << m_id << "\n" << "wage: " << m_wage << "\n";
	}

};

int main()
{

	Employee jain;
	jain.set_info("Aditya Jain", 1, 1000000);
	jain.print();

}
