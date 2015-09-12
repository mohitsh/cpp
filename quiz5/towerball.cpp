
#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds){

	
	double distanceFallen = (myConstants::gravity*seconds*seconds)/2;
	double heightNow = initialHeight - distanceFallen;
	if (heightNow < 0.0)
		return 0.0;
	else
		return heightNow;

}

bool calculateAndPrintHeight(double initialHeight, int seconds){

	double currentHeight = calculateHeight(initialHeight, seconds);
	std::cout << "at time " << seconds << " current height " << currentHeight << "\n";
	if (currentHeight == 0.0)
		return true;
	else
		return false; 

}

int main(){

	std::cout << "enter the height of tower in meters: " << "\n";
	int height;
	std::cin >> height;
	
	int seconds = 0;
	bool hitGround = false;
	
	do{
		hitGround = calculateAndPrintHeight(height, ++seconds);
	}
	while(!hitGround);


	return 0;
}
