

#include <iostream>

void voidPrint(){
	std::cout << " this is in voidPrint() " << std::endl;
}

void printValue(int x){

	std::cout << " This value was passed in the function " << x << std::endl;

}

void add(int x, int y){

	int z = x + y;
	std::cout << z << std::endl;

}

int mul(int x, int y){

 	int z = x*y;
	return z;

}

int main(){
	
	std::cout << "we are inside main function() " << std::endl;
	std::cout << " we are going inside printValue and voidPrint " << std::endl;
	voidPrint();
	printValue(11);
	std::cout << " adding two number " << std::endl;
	add(1010,2020);
	std::cout << " multiplying two number " << mul(10,20) << std::endl;
	std::cout << mul(2,mul(3,4)) << std::endl;


	return 0;

}


