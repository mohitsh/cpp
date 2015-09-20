
#include <iostream>

namespace StudentNames{
	enum StudentsNames{
	TAPAN,
	DALLA,
	NAMIT,
	JAIN,
	VARUN,
	MAX_STUDENTS
	};
}

int main(){

	// initializing a fixed array of length 30
	int testScores[30];
	
	testScores[0] = 1;
	testScores[1] = 2;
	testScores[2] = 3;
	testScores[3] = 4;
	
	for (auto dude:testScores)
		std::cout << dude << "\n";

	std::cout << "\n";

// making an array of struct
struct Rectangle{

	int length;
	int width;

};

Rectangle reacts[5];
reacts[0].length = 10;
reacts[0].width = 12;
reacts[3].width = 100;
reacts[3].length = 150;

std::cout << reacts[0].length << "\n";
std::cout << reacts[0].width << "\n";

int dalla[5] {1,2,3};
for (auto num:dalla)
	std::cout << num << "\n";



int testScores1[StudentNames::MAX_STUDENTS];
testScores1[StudentNames::DALLA] = 3000;

std::cout << testScores1[StudentNames::DALLA];

return 0;

}












