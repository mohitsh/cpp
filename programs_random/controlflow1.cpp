
#include <iostream>

int main(){

	std::cout << "give me a number " << "\n";
	int num1;
	std::cin >> num1;
	if (num1 > 10){
		std::cout << "You are over qualified!" << "\n";
		if (num1 % 2 != 0){
			std::cout << "You are odd too. Perfect!" << "\n";
		}
		else{
		
			std::cout << "You are even but its okay!" << "\n";
		}
	
	}
	else{

		std::cout << "Umm! you are meant for something bigger!" << "\n";
	}
	return 0;

}
