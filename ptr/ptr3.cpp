
#include <iostream>

// DYNAMIC MEMORY ALLOCATION

int main(){

	// ask os for memory; new gets integers worth of memory from os
	// save this memory address in a pointer for further access 
	int *ptr = new int;
	*ptr = 10;	
	std::cout << *ptr << "\n";	
	delete ptr;
	std::cout << *ptr << "\n";
	//ptr = nullptr;
	//std::cout << *ptr << "\n";
	
		

}
