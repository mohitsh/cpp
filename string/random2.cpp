#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

int getrand(int min, int max)
{
	srand(static_cast<unsigned int>(time(0)));
	std::random_device rd;
	std::mt19937 mersenne(rd());

	static const double fraction = 1.0/(static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(mersenne()*fraction*(max-min+1)+min);
}

int main()
{
	std::cout << getrand(1,6) << std::endl;
}
