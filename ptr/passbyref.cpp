
#include <iostream>


// always pass by constant reference unless values need to be changed explicitly
void AddOne(int &y){

	y = y+1;

}

void foo(int &y){

	std::cout << "y " << y << "\n";
	y = 6;
	std::cout << "y " << y << "\n";
}

int main(){

	// PASS BY REFERENCE

	// original arguments are modeified in pass by reference
	// no need to return back anything
	// because original array is modified to job done

	int x = 5;
	std::cout << "x " << x << "\n";
	
	foo(x);
	std::cout << "after calling foo " << x << "\n";
	
	AddOne(x);
	std::cout << "should be 7 " << x << "\n";

}
