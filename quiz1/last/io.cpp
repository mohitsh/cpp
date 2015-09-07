

#include <iostream>

int readNumber(){

	int x;
	std::cout << "enter the first value: " << std::endl;
	std::cin >>  x;
	return x;
}

void writeAnswer(int ans){
	
	std::cout << "here you go with your addition: " << ans << std::endl;
}
