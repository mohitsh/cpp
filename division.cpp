
#include <iostream>

int main(){

	int x = 7;
	int y = 4;
	
	std::cout << "int/int = " << x/y << "\n";
	std::cout << "double/int = " << static_cast<double>(x)/y << "\n";
	std::cout << "int/double = " << x/static_cast<double>(y) << "\n";
	std::cout << "double/double = " << static_cast<double>(x)/static_cast<double>(y) << "\n";
	
	int num = 1;
	while (num <= 100){
		std::cout << num  << " ";
		if ( num %20 ==0){
		std::cout << "\n";
		}
	num = num + 1;
	}
	return 0;

}
