

#include <iostream>

int add(int x, int y, int z);

int main(){

	//int a = 5;
	//int b = 6;
	
	std::cout << add(3,4, 5) << " << hello, that was the answer" << std::endl;
	return 0;
}


int add(int x, int y, int z){

	return x+y+z;

}


