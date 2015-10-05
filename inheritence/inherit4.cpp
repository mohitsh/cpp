
#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	A(int nValue)
	{
		cout << "A: " << nValue << endl;
	}
};

class B: public A
{
public:
	B(int nValue, double dValue)
		: A(nValue)
	{
		cout << "B: " << dValue << endl;
	}
};

class C: public B
{
public:
	C(int nValue, double dValue, string chValue)
		: B(nValue, dValue)
	{
		cout << "C: " << chValue << endl;
	}
};

int main()
{
	C c_class(11,11.11,"mittal");
	return 0;
}

		
