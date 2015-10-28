#include <iostream>

int main()
{
	char mystring[] = "mohit";
	std::cout << sizeof(mystring) << std::endl;
	mystring[5] = 'p';
	for (auto dude:mystring)
		std::cout << static_cast<int>(dude) << std::endl;

	char name[6] = "Mohit";
	std::cout << sizeof(name) << std::endl;
	
	std::cout << "namit part: " << std::endl;
	char namit[10] = "namit";
	std::cout << sizeof(namit) << std::endl;
	namit[5] = 'z';
	std::cout << sizeof(namit) << std::endl;
	for (auto dude:namit)
		std::cout << dude << "\t" << static_cast<int>(dude) << "\n";
	
}
