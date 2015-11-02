
#include <iostream>

struct Rectangle
{
	int length;
	int width;
};

int main()
{
	Rectangle dude[3];
	dude[0].length = 1;
	dude[0].width = 2;
	dude[1].length = 3;
	dude[1].width = 4;
	dude[2].length = 5;
	dude[2].width = 6;

	std::cout << dude[0].length << std::endl;
	std::cout << dude[2].length << std::endl;

	std::cout << "the array part: " << std::endl;
	int prime[] {1,2,3,5,7,11,13,17};
	for (int i = 0; i < 8; ++i)
		std::cout << prime[i] << std::endl;

}

