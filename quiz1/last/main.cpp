

#include <iostream>
#include "io.h"

int add(int,int);


int main(){

	int x = readNumber();
	int y = readNumber();
	int z = add(x,y);
	writeAnswer(z);
}

int add(int x, int y){
	
	return x+y;

}

