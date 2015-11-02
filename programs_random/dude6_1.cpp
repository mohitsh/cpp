
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

void passValue(int value){

	value = 9999;

}

void passArray(int arr[5]){

	arr[0] = 10;
	arr[1] = 11;
	arr[2] = 12;
	arr[3] = 13;
	arr[4] = 14;
	std::cout << "inside passArray: " << sizeof(arr) << "\n";
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

std::cout << testScores1[StudentNames::DALLA] << "\n";

std::cout << "beware! passing values and arrays to functions: " << "\n";

int daddu = 10001;
std::cout << "before passing daddu: " << daddu << "\n";
passValue(daddu);
std::cout << "after passing daddu: " << daddu << "\n";

int jangi[5] {21,22,23,24,25};

for (auto num:jangi)
	std::cout << num << " ";
std::cout << "\n";
std::cout << "size of array before passing: " << sizeof(jangi) << "\n";

passArray(jangi);
for (auto num:jangi)
	std::cout << num << " ";
std::cout << "\n";

std::cout << "size of array after passing: " << sizeof(jangi) << "\n";

return 0;

}












