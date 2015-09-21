

#include <iostream>

int main(){

	char mystring[] = "string";
	std::cout << mystring << "\n";
	
	std::cout << sizeof(mystring) << "\n";
	for (int i = 0; i<sizeof(mystring); ++i){
		std::cout << static_cast<int>(mystring[i]) << " ";
	}
	std::cout << "\n";

}
