

#include <iostream>

int main(){

	int x = 5;
	int y = 10;
	std::cout << x << "\n";
	std::cout << &x << "\n";

	int *ptr = &x;
	std::cout << "stored address in ptr " << ptr << "\n";
	std::cout << "value ptr is pointing to " << *ptr << "\n";
	ptr = &y;
	std::cout << "stored address in ptr " << ptr << "\n";
	std::cout << "value ptr is pointing to " << *ptr << "\n";


	// understand *ptr is VALUE so change *ptr and value will change  

	*ptr = 1001;
	std::cout << "value of *ptr is changed to 1001 " << *ptr << "\n";
	std::cout << "value of y is changed from 10 to 1001 " << y << "\n";

	std::cout << "size of a pointer " << sizeof(ptr) << "\n";

	double *nptr(nullptr);
	if (nptr)
		std::cout << "ptr!!" << "\n";
	else
		std::cout << "looks like null" << "\n";

	std::cout << "Array and pointer! " << "\n\n";
	int arr[5] = {9,6,4,2,1};
	std::cout << "array address " << arr << "\n";
	std::cout << "address of 0th index " << &arr[0]  << "\n";

	int *arrptr = arr;
	std::cout << arrptr << "\n";
	std::cout << "size of array " << sizeof(arr) << "\n";
	std::cout << "size of pointer " << sizeof(arrptr) << "\n";

	

}








