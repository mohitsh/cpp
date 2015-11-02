

#include <iostream>

namespace StudentNames{

	enum StudentNames{
		DALLA,
		JAIN,
		KUTTA,
		BOHRA,
		MITTAL,
		TOMAR,
		JANGIDA,
		DADDU
	};
}


int main(){

	int num[5];	
	num[0] = 1;
	num[1] = 2;
	num[3] = 10;
	std::cout << num[0] << "\n";
	std::cout << num[1] << "\n";
	std::cout << num[3] << "\n";
		
	int testscores[StudentNames::DADDU];
	testscores[StudentNames::TOMAR] = 76;	
	std::cout << testscores[StudentNames::TOMAR] << "\n";
	return 0;
	

}
