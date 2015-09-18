
#include <iostream>

int main(){

	int value = 5;
	int *ptr = &value;
	
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	
	*ptr = 6;
	std::cout << "value changed" << "\n";
	std::cout << "value of value: " << value << "\n";
	std::cout << "value of pointer: " << ptr << "\n";
	std::cout << "dereferencing the pointer: " << *ptr << "\n";

}
