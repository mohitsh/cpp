
#include <iostream>

void changenum(int &ref){

	ref = 6;
	

}
int main(){

	int value = 5;
	int *ptr = &value;
	
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	
	*ptr = 6;
	std::cout << "value changed" << "\n";
	std::cout << "value of value: " << value << "\n";
	std::cout << "value of pointer: " << ptr << "\n";
	std::cout << "dereferencing the pointer: " << *ptr << "\n";

	int dude = 5;
	std::cout << "print 5 " << dude << "\n";
	int &ref = dude;
	dude = 6;
	std::cout << "print 6 " << dude << "\n";
	ref = 7;
	std::cout << "print 7 " << dude << "\n";
	dude = 8;
	std::cout << "print 8 " << dude << "\n";
	ref = 9;
	std::cout << "print 9 " << dude << "\n";
	++ref;
	std::cout << "print 10 " << dude << "\n";

	int num = 5;
	std::cout << "this is five " << num << "\n";
	changenum(num);
	std::cout << "this is six " << num << "\n";

	std::cout << "loop below beware!" << "\n";
	int array[5] = {9,7,5,3,1};
	for (const auto &elem: array){
		std::cout << elem << " ";
	}
	std::cout << "\n";	
}



