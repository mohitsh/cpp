
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

};

int main()
{
	return 0;
}
