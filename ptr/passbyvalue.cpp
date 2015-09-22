
#include <iostream>

void foo(int y){

	std::cout << "y -> " << y << "\n";

}



int main(){

	// by default arguments in c++ are passed by value
	// pass by value is a safe method and arguments are NEVER changed 	
	
	int x = 5;
	foo(x);
	foo(x+1);
	foo(x+2);
}


