#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

int getrand(int min, int max)
{
	static const double fraction = 1.0/(static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand()*fraction*(max-min+1)+min);
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	
	for (int count = 0; count < 100; ++count)
	{
	//	std::cout << rand() << "\t";
	//	if ((count+1)%5 == 0)
	//		std::cout << "\n";
	}

	std::cout << getrand(1,6) << std::endl;
	std::random_device rd;
	std::mt19937 mersenne(rd());

	for (int dude = 0; dude < 48; ++dude)
	{
		std::cout << mersenne() << "\t";
		if ((dude+1)%4==0)
			std::cout << "\n";
	}
}
