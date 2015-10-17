
#include <iostream>
#include <bitset>

int main()
{
	using namespace std;
	
	double d1(100-99.99);
	double d2(10-9.99);
	
	cout << d1 << endl;
	cout << d2 << endl;

	if (d1 == d2)
		cout << "d1 and d2 are equal" << endl;
	if (d1 >= d2) 
		cout << "d1 is greater than or equal to d2" << endl;
	
	bitset<8> bits(0x2);
	bitset<8>morebits(0x4);
	cout << bits.test(4) << endl;
	bits.set(4);
	cout << bits.test(4) << endl;
	bits.reset(4);
	cout << bits.test(4) << endl;
	bits.flip(4);
	cout << bits.test(4) << endl;
	bits.flip(4);
	cout << bits.test(4) << endl;	
	bits.flip(4);
	bits.flip(5);
	cout << bits << endl;
	

}
	
