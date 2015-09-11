

#include <iostream>
#include <bitset>

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

	
	const unsigned char option1 = 0x01;
	std::cout << option1 << "\n";
	const unsigned char option2 = 0x02;
	std::cout << option2 << "\n";
	const unsigned char option7 = 0x08;
	std::cout << option7 << "\n";
	const unsigned char option8 = 0x80;
	std::cout << option8 << "\n";
	
	std::bitset<8> bits(0x2);
	bits.set(4);
	bits.flip(5);
	bits.reset(5);
	std::cout << "bit 4 has value " << bits.test(4) << "\n";
	std::cout << "bit 5 has value " << bits.test(5) << "\n";
	std::cout << "all the bits " << bits << "\n";

	std::bitset<8> bits1(0x1);
	std::cout << bits1 << "\n";
	std::bitset<8> bits2(0x2);
	std::cout << bits2 << "\n";
	std::bitset<8> bits3(0x3);
	std::cout << bits3 << "\n";
	std::bitset<8> bit4(0x4);
	std::cout << bit4 << "\n";
	std::bitset<8> bit5(0x5);
	std::cout << bit5 << "\n";
	bit5.reset(0);
	std::cout << bit5 << "\n";
	return 0;

}
