
#include <iostream>
#include <cmath>

void binary(int);

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

	int d = 5;
	std::cout << sizeof(d) << "\n";
	double m = 10;
	std::cout << sizeof(m) << "\n";

	if (m > d){
		std::cout << true << "\n";
	}else{
		std::cout << false << "\n";
	}

	int ans;
	ans = (m>d) ? true : false;
	std::cout << ans << "\n";

	double d1 = 100-99.99;
	double d2 = 10-9.99;

	if (d1 == d2){
		std::cout << "d1 == d2" << "\n";
	}
	else if (d1 > d2){
		std::cout << "d1 > d2" << "\n";
	}
	else if (d1 < d2){
		std::cout << "d1 < d2" << "\n";
	}

	
	binary(117);	
	return 0;
}

void binary(int num){

	while (num > 0){
	std::cout << num%2;
	num = num/2;
	}
}

