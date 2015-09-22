
#include <iostream>
int main(){

	
struct Something{

	int nValue;
	float fValue;

};

	Something something;
	something.nValue = 5;
	something.fValue = 10.0;
	std::cout << something.nValue << "\n";
	std::cout << something.fValue << "\n";
	
	std::cout << "using reference " << "\n";	
	
	Something &ref = something;
	ref.nValue = 101;
	ref.fValue = 101.11;
	std::cout << ref.nValue << "\n";
	std::cout << ref.fValue << "\n";

	std::cout << "using pointers " << "\n";
	Something *ptr = &something;
	(*ptr).nValue = 201;
	(*ptr).fValue = 201.14;
	std::cout << (*ptr).nValue << "\n";
	std::cout << (*ptr).fValue << "\n";

	Something something2;
	Something *ptr2 = &something2;
	ptr2 -> nValue = 24;
	ptr2 -> fValue = 24.12;
	std::cout << ptr2 -> nValue << "\n";
	std::cout << ptr2 -> fValue << "\n";

	return 0;
}
