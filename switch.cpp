

#include <iostream>

void switchfunc(int a){

switch(a){

	case 1:
		std::cout << 1 << "\n";
		break;
	
	case 2:
		std::cout << 2 << "\n";
		break;
	case 3:
		std::cout << 3 << "\n";
		break;
	case 4:
		std::cout << 4 << "\n";
		break;
	default:
		std::cout << "value error" << "\n";
		break;
}

}

int main(){

	input_again:		 // this is a statement label
	std::cout << "give me a number " << "\n";
	int num;
	std::cin >> num;
	if (num < 0 || num > 5)
		goto input_again;  // asking for more input
	switchfunc(num);

	int count = 0;
	while (count < 10){

		std::cout << count << "\n";
		count++;
	}
	
	

	// unsigned int will never be negative so this okay looking loop
	// is actually a monster and will run till infinity. -_-

	/*
	unsigned int i = 0;
	while (i >= 0){

		if(i==0)
			std::cout << "BlastOff!" << "\n";
		else
			std::cout << i;
		--i; 
	}
	*/

	int i = 1;
	while (i <= 10){
		int j = 1;
		while (j <= i){
			std::cout << j;
			++j;
		}
		std::cout << "\n";
		++i;
	}	
	
	int k = 10;
	while (k>=1){
		int m = 1;
		while (m <= k){
			std::cout << m;
			++m;
		}
		std::cout << "\n";
		--k;
	}
	
	// simple for loop
	for (int i = 1, j = 9; i<10; ++i,--j){
		std::cout << i << " " << j << "\n";
	
	}

	// using continue statement
	
	for (int k = 0; k < 10; ++k){
		if (k %2 == 0)
			continue;
		std::cout << k << "\n";
	}

	return 0;
}
