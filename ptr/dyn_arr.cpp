
#include <iostream>

int main(){

	std::cout << "enter a number: " << "\n";
	int size;
	std::cin >> size;
	
	int *arr = new int[size];
	std::cout << "this array has size " << size << "\n";
	arr[0] = 5;
	std::cout << "this is the first element " << arr[0] << "\n";

	delete[] arr;
	arr = nullptr;

	std::cout << "enter another array size: " << "\n";
	int num;
	std::cin >> num;
	int *arr2 = new int[num];
	std::cout << "this array has size: " << num << "\n";
	arr2[0] = 1001;
	std::cout << arr2[0] << "\n";
	
	delete[] arr2;
	arr2 = nullptr;

	//std::cout << "enter another number: " << "\n";
	//int num2;
	//std::cin >> num2;
	int *arr3 = new int[6] {1,2,3,4,5,6};
	std::cout << "first number: " << arr3[0] << "\n";
	std::cout << "last number: " << arr3[5] << "\n";
	delete[] arr3;
	arr3 = nullptr;
}
