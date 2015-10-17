
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	cout << "bool \t\t" << sizeof(bool) << endl;
	cout << "char \t\t" << sizeof(char) << endl;
	cout << "short \t\t" << sizeof(short) << endl;
	cout << "int \t\t" << sizeof(int) << endl;
	cout << "float \t\t" << sizeof(float) << endl;
	cout << "double \t\t" << sizeof(double) << endl;
	cout << "long \t\t" << sizeof(long) << endl;
	cout << "long long \t" << sizeof(long long) << endl;

	unsigned short x = 0;
	x=x-1;
	cout << x << endl;
	
	float a = 580.897654398;
	float b = .00007686;
	cout << a << endl;
	cout << b << endl;
	
	cout << setprecision(16);
	double c  = 3.33333333333333333333;
	cout << c << endl;

	double d(0.00000000000001);
	cout << d << endl;
	cout << setprecision(14);
	
	double d1(0.1);
	cout << d1 << endl;
	double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	cout << d2 << endl;
	
	double zero = 0.0;
	double posinf = 0.0/zero;
	cout << posinf << endl;

	bool dude = true;
	cout << dude << endl;
	cout << boolalpha;
	cout << dude << endl;

	
	char ch1(97);
	char ch2('a');
	cout << ch1 << endl;
	cout << ch2 << endl;
	int ch3 = static_cast<int>(ch1);
	cout << ch3 << endl;

	int oct_x = 012;
	cout << oct_x << endl;
	
	int oct_y = 027;
	cout << oct_y << endl;
}










