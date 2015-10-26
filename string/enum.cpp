#include <iostream>
#include <string>

enum wing	
{

	jain,
	namit,
	dalla,
	bohra,
	baccha,
	papa,
	daddu
};
	
int main()
{

	using namespace std;
	wing dude = daddu;
	cout << dude << endl;
	
	int dude1 = bohra;
	cout << dude1 << endl;
	return 0;
}
