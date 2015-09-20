

#include <iostream>

namespace animals{

	enum animals{
		
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_ANIMALS

	};

}

int main(){

	int legs[animals::MAX_ANIMALS] {2,4,4,4,2,0};
	std::cout << "elephant has: " << legs[animals::ELEPHANT] << " legs" << "\n";
	std::cout << "snake has: " << legs[animals::SNAKE] << " legs" << "\n";

	const int num_students = 5;
	int scores[num_students] {1,2,3,4,5};
	int total = 0;
	for (int i = 0; i<num_students; ++i){
		total += scores[i]; 	
	}
	double avg = static_cast<double>(total)/num_students;
	std::cout << avg << "\n";

}
