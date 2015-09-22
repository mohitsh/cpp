
#include <iostream>
#include <array>

int main(){

	std::array<int,5>array {1,2,3,4,5};
	for(auto k:array)
		std::cout << k << " ";
	std::cout << "\n";

	// bond checking and value setting 
	array.at(1) = 100;
	std::cout << array[1] << "\n";

	// statement below is not going to work
	//array.at(10) = 200;

	std::cout << array.size() << "\n";
}
