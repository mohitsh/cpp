


#include <iostream>
#include "add.h"
#include "math.h"
#include "sub.h"

int main(){

	std::cout << "we are in main function" << std::endl;
	std::cout << "the add function " << add(10,40) << std::endl;
	std::cout << "the subtraction function" << sub(50,10) << std::endl;
	std::cout << "the multiplication function" << cardsInDeck() << std::endl;
		

}


int add(int x, int y){

	return x + y;
}

int sub(int x, int y){

	return x - y;

}


