

#include <iostream>

// while using bitwise operations always use unsigned integers

int main(){

	int x = 3;
	
	std::cout << "original " << x << "\n";
	int y;
	y = x << 1;
	std::cout << "1 shift to left " << y << "\n";
	int z;
	z = x << 2;
	std::cout << "2 shift to left " << z << "\n";
	int m = 4;
	m = m << 1;
	std::cout << "1 shift to left for 4 " << m << "\n";
	
	int d1 = 5;
	int d2 = 12;	
	int d3 = d1^d2;
	std::cout << "or operator " << d3 << "\n";
	return 0;

}
