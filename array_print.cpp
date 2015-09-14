
#include <iostream>

int askInput(){

	std::cout << "enter a number b/w 1 and 9 " << "\n";
	int num;
	std::cin >> num;
	return num;

}


int main(){

	int input;
	input = askInput();
	while(input >= 9 || input <= 1){
		input = askInput();
	}
	std::cout << input << "\n";
	
	// implementing a for each loop
	int fibonacci[] = {1,2,3,4,5,6};
	for (int number : fibonacci) // iterate over array fibonacci
        	std::cout << number << ' ';

	


}
