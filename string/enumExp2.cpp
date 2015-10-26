
#include <iostream>
#include <string>

int main()
{
	enum class Color
	{
		red,
		black,
		blue
	};

	enum class Fruit
	{
		banana,
		apple,
		mango
	};
	
	Color dude1 = Color::red;
	Fruit dude2 = Fruit::apple;
	
	if (dude1 == Color::black)
		std::cout << "this is red." << std::endl;
	else if (dude2 == Fruit::apple)
		std::cout << "this is apple." << std::endl;

	//std::cout << dude1 << std::endl;
	std::cout << static_cast<int>(dude2) << std::endl;
}
