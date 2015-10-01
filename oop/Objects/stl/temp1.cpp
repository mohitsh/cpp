
#include <iostream>


// never okay? never use predefined function names while using "using namespace std"
// compiler will never be able to differentiated b/w  predefined max and user defined //max so play safe and use different function names!

template <typename dude>

dude max1(dude a, dude b)
{
	return (a>b) ? true : false;
}

int main()
{

	int a = 2;
	int b = 3;
	int c = max1(a,b);
	using namespace std;
	cout << c << "\n";

	double d = 10.0;
	double e = 2.44;
	double val = max1(d,e);	
	cout << val << "\n";
	
	return 0;

}	
