

#include <iostream>
#include <string>

int main(){

	//std::string name("sparta");
	//std::cout << name << "\n";
	std::cout << "enter your name " << "\n";
	std::string name;
	std::getline(std::cin,name);
	
	std::cout << "enter your age " << "\n";
	int age;
	std::cin >> age;
	
	std::cout << "enter your place " << "\n";
	std::string place;
	std::getline(std::cin,place);

	double length;
	length = name.length();
	
	double dude;
	dude = static_cast<double>(age)/length;
	
	std::cout << "Name: " << name << " " << "Age: " << age << " " << "Place: " << place << "\n";
	std::cout << name << " you have lived " << dude << " years for each of your name letters" << "\n";
}
