
#include <iostream>

int main(){

	int *ptr = new int;
	*ptr = 7;
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";

	delete ptr;
	std::cout << ptr << "\n";

	int *value = new int; //ask for memory
	if (!value){
		std::cout << "no memory" << "\n";
		exit(1);
	}
	
	std::cout << "give me some input: " << "\n";
	int size;
	std::cin >> size;
	int *array = new int[size];
	std::cout << "an array of size: " << size << " has been created " << "\n";
	for (int i =0; i<size; ++i){
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
	
	delete[] array;
	array = 0;
	//std::cout << array[0] << "\n";
	
	int arr[5] {1,2,3,4,5};
	int *arr = new int[5] {1,2,3,4,5};	
	



}






