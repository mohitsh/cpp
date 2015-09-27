
#include <iostream>

class Something
{
private:
	static int s_nIDGenerator;
	static int m_nID;
	
public:
	Something(){m_nID = s_nIDGenerator++;}

	int getID() const {return m_nID;}

};

int Something::s_nIDGenerator = 1;

int main(){
	

	Something cFirst;
	Something cSecond;
	Something cThird;
	
	using namespace std;
	cout << cFirst.getID() << "\n";
	cout << cSecond.getID() << "\n";
	cout << cThird.getID() << "\n";
	return 0;

}
