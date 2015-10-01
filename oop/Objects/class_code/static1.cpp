
#include <iostream>

class Something
{
private:
	int m_nvalue;
	
public:
	Something(){m_nvalue = 0;}
	int getvalue(){return m_nvalue;}
	static int value;
};

int Something::value = 21;

int main()
{

	using namespace std;
	Something some;
	cout << some.getvalue() << "\n";
	Something dude1;
	Something dude2;
	Something dude3;
	cout << dude1.value << "\n";
	cout << dude2.value << "\n";
	dude3.value = 1324;
	cout << dude3.value << "\n";
}
