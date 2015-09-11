
#include <iostream>

int main(){

	int a;	
	std::cout << "enter the first value " << "\n";
	std::cin >> a;
	int b;
	std::cout << "enter the second value " << "\n";
	std::cin >> b;
	std::cout << "value of a " << a << "\n";
	std::cout << "value fo b " << b << "\n";

	if (b < a){
		int temp;
		temp = a;
		a = b;
		b = temp;
	std::cout << "inside if block " << "\n";
	std::cout << "value of a " << a << "\n";
	std::cout << "value of b " << b << "\n";
	}

}
