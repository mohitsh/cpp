#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;
	int x = 10;
	std::cout << "variable: " << x << std::endl;
	std::cout << "address: " << &x << std::endl;
	cout << "dereference: " << *&x << std::endl;

	int *ptr = &x;
	cout << ptr << endl;

	//cout << typeid(&x) << endl;
	cout << typeid(&x).name() << endl;

	cout << "system architecture: " << sizeof(ptr) << endl;

	int *ptr2(0);
	if (ptr2 == 0)
		cout << "null pointer " << endl;
	else
		cout << "not null " << endl;

	double *ptr3(0);
	if (ptr3 == 0)
		cout << "this is NULL pointer " << endl;

	float *ptr4;
	ptr4 = nullptr;
	if(ptr4 == nullptr)
		cout << "null pointer " << endl;
}
