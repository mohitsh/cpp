

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

	const int elements = 5;
	int points[elements] { 84, 92, 76, 81, 56 };
	int max_score = 0;
	std::cout << "max score before iteration: " << max_score << "\n";
	for (auto &num:points){  // passing by reference saves a lot of space
		if (num > max_score)
			max_score = num;
	}
	std::cout << "max score after iteration: " << max_score << "\n";

}
