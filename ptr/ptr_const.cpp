
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

	// if variable is constant int then pointer should be constant int too
	const int *ptr1 = &num1;
	//*ptr1 = 100;  // not valid can't change a constant value
	
	std::cout << num1 << "\n";
	std::cout << *ptr1 << "\n";
	
	int num2 = 15;
	const int *ptr2 = &num2;
	
	//*ptr2 = 100;  // since pointer is constant we can't change the value by deref
	num2 = 51; // since num2 is not constant; this is okay!
	std::cout << "value of num2 " << num2 << "\n";
	std::cout << "value of *ptr2 " << *ptr2 << "\n";
	
	// const pointers

	int num3 = 5;
	int num4 = 6;
	
	int *const ptr3 = &num3;
	std::cout << ptr3 << "\n";
	std::cout << *ptr3 << "\n";
	
	// line below is not okay
	// constant pointer's value i.e. an address can't be changed
	//ptr3 = &num4;
	// but this line is okay. You can change the value it is pointing to.
	*ptr3 = num4;
	std::cout << num4 << "\n";

	// constnat value to a constant value
	// basically everything is fixed here you can't change anything.
	int num5 = 2001;
	int num6 = 3001;
	const int *const ptr4 = &num5;
	std::cout << ptr4 << "\n";
	
	
		
	 
}








