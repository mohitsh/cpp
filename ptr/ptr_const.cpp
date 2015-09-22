
#include <iostream>

int main(){

	int value = 10;
	int *ptr = &value;
	std::cout << value << "\n";
	std::cout << *ptr << "\n";
	
	*ptr = 20;
	std::cout << value << "\n";
	std::cout << *ptr << "\n";

	const int num1 = 5;
	
	// line below is wrong and won't let this compile
	// num1 is a constant variable
	// a non constant pointer can't point to a constant variable
	// if pointer is non constant; it can be changed 
	// pointer cab be dereferenced and value can be changed
	// so a non constant pointer can't point to a constant variable

	int *ptr1 = &num1;
	std::cout << num1 << "\n";
	std::cout << *ptr1 << "\n";
	
	*ptr1 = 1001; 


}
