
#include <iostream>

// pass by value

void foo(int y){
	
	// variable y is created here
	std::cout << "y -> " << y << "\n";
	++y;
	// and destroyed here
}
// so foo is not going to change arguments

void addOne(int &y){

	++y;

}

void addTwo(int *y){

	*y = *y + 2;

}

void changeAdd(int *y){

	int k = 90;
	std::cout << "address of k " << &k << "\n";
	*y = k;
}

int main(){

	// pass by value part *start*
	int value = 5;
	foo(value);
	
	std::cout << value << "\n";
	++value;
	std::cout << value << "\n";
	foo(value);	
	// pass by value part *end*

	// pass by reference *start*
	// when you want to modify the original array no need to return anything
	int num1 = 1;
	std::cout << "pass by ref in main " << num1 << "\n";
	addOne(num1);
	std::cout << "after addOne " << num1 << "\n";
	
	// pass by value *end*

	// pass by address *starts*

	int num2 = 10;
	std::cout << "pass by address in main " << num2 << "\n";
	std::cout << "address before addTwo " << &num2 << "\n";
	addTwo(&num2);
	std::cout << "pass by address after addTwo " << num2 << "\n";
	std::cout << "address after addTwo " << &num2 << "\n";
	changeAdd(&num2);
	std::cout << "address after changeAdd will be same because we are pasing copy of address in to parameter so a change in address inside function is not going to effect the actual address; it will reamin the same " << num2 << "\n";
	// pass by address *ends*

}









