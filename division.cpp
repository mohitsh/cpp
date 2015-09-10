
#include <iostream>
#include <cmath>

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

	// power exploration

	std::cout << "enter base: " << "\n";
	double base;
	std::cin >> base;
	std::cout << "entere exp: " << "\n";
	int exp;
	std::cin >> exp;
	int value = pow(base,exp);
	std::cout << "value: " << value << "\n";

	return 0;

}
