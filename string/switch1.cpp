
#include <iostream>
#include <string>

enum class Color
{
	blue,
	black,
	red
};

void print_color(Color color)
{
	using namespace std;
	switch(color)
	{
		case Color::blue:
			cout << "blue " << endl;
			break;
		case Color::red:
			cout << "red " << endl;
			break;
		case Color::black:
			cout << "black " << endl;
			break;
		default:
			cout << "not found " << endl;
			break;
	}
}


int main()

{
	Color dude = Color::blue;
	print_color(dude);
	
	return 0;
}	





