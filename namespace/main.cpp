#include <iostream>
#include "foo.h"
#include "goo.h"

int main()
{	
	using namespace std;
	cout << Foo::dosomething(10,2) << endl;
	cout << Goo::dosomething(10,2) << endl;
}
