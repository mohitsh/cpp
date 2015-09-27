

#include <iostream>
#include <cstring>
	class Employee{

	public:
		char m_strName[25];
		int m_id;
		double m_dWage;	
		
		void setInfo(const char *strName, int nID, double dWage){

			strncpy(m_strName, strName, 25);
			m_id = nID;
			m_dWage = dWage; 	
	
		}
	void Print(){

		std::cout << "Name: " << m_strName << " ID: " << m_id << " Wage " << m_dWage << "\n";		

	}
	
	};

int main(){
	
	Employee Doga;
	Doga.setInfo("Doga Nitin",11324,2000000);
	
	Employee Jain;
	Jain.setInfo("Aditya Jain", 11342,2000000);
	
	Doga.Print();
	Doga.Print();

}
