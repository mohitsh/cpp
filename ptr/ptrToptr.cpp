
#include <iostream>

int main(){


	int value = 5;
	
	//  line below stores address of value
	int *ptr = &value;
	std::cout << "ptr value -> " << *ptr << "\n";
	
	// line below stores address of ptr 
	int **ptrptr = &ptr;
	std::cout << "ptrptr value -> " << *ptrptr << "\n"; 
	std::cout << "value of ptr -> " << ptr << "\n";
}
