
#include <iostream>

// even if passed as arr[] it will be converted form array syntax to pointer syntax
void arraysize(int *arr){

	// since array is passed as a pointer size will be 8
	std::cout << "inside arraysize " << sizeof(arr) << "\n";
	*arr = 10;
	// if ptr points to an integer
	// ptr + 1 is the address of next integer 
	// ptr - 1 is the address of previous integer
	// ptr + 1 doesn't return the next address but
	// address of next object of type that ptr is pointing to
}

int main(){

	int arr[] {1,1,2,3,5,8,13,21};
	const char *name = "dalakoti";
	// will show size of entire array
	std::cout << "in main " << sizeof(arr) << "\n";
	std::cout << "first element " << arr[0] << "\n";
	arraysize(arr);
	std::cout << "first element " << arr[0] << "\n";
	
	std::cout << "address of element0 " << &arr[0] << "\n";
	std::cout << "address of element0 " << &arr[1] << "\n"; 
	std::cout << "address of element0 " << &arr[2] << "\n"; 
	std::cout << "address of element0 " << &arr[3] << "\n"; 
	std::cout << "address of element0 " << &arr[4] << "\n"; 
	
	// array[n] == *(array + n) and &array[n] == array + n

	std::cout << "some more practice " << "\n";
	std::cout << "address " << &arr[1] << "\n";
	std::cout << "value " << arr[1] << "\n";
	std::cout << "address " << arr + 1 << "\n";
	std::cout << "value " << *(arr+1) << "\n";
	
	std::cout << arr << "\n";
	std::cout << name << "\n";
	return 0;

}
