

#include <iostream>

void voidPrint(){
	std::cout << " this is in voidPrint() " << std::endl;
}

void printValue(int x){

	std::cout << " This value was passed in the function " << x << std::endl;

}

int main(){
	
	std::cout << "we are inside main function() " << std::endl;
	std::cout << " we are going inside printValue and voidPrint " << std::endl;
	voidPrint();
	printValue(11);

}
