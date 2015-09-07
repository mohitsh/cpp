


#include <iostream>
int readNumber();
void writeAnswer(int);

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

