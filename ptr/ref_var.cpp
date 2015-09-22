
#include <iostream>

void changeN(int &ref){

	ref = 12;

}

int main(){

	int num1 = 5;

	// & here means reference to not address of
	int &ref1 = num1;
	std::cout << num1 << "\n";
	std::cout << ref1 << "\n";

	num1 = 6;
	std::cout << ref1 << "\n";
	ref1 = 7;
	std::cout << num1 << "\n";
	std::cout << ref1 << "\n";
	
	
	int num2 = 10;
	int num3 = 20;
	int &ref2 = num2;

	// references are implecitly constant so ref can't be changed
	std::cout << ref2 << "\n";
	std::cout << num2 << "\n";

	ref2 = num3;
	std::cout << ref2 << "\n";
	std::cout << num2 << "\n";
	std::cout << num3 << "\n";

	std::cout << "PART OF ARRAY PASSING EXPERIMENT" << "\n";
	int num4 = 11;
	std::cout << num4 << "\n";
	changeN(num4);
	std::cout << num4 << "\n";	
	
	std::cout << "references in a for each loop" << "\n";
	int dude[5] {1,2,3,4,5};
	for (auto &element:dude)
		std::cout << element << " ";

	
	std::cout << "\n";
	for (auto i:dude)
		std::cout << i << " ";
	
	std::cout << "\n";	
	
	// references are constant pointers that is dereferenced implicitly when accessed
	int num5 = 123;
	int *const ptr5 = &num5;
	int &ref5 = num5;
	
	std::cout << "should be 123 " << *ptr5 << "\n";
	std::cout << "should be 123 " << ref5 << "\n";

	// a constant reference acts like a constant pointer to a constant value

	return 0;
	

}




