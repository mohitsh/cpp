
#include <iostream>

void foo(int *pvalue){

	*pvalue = 6;

}

void printArr(int *parr, int nlength){

	for (int i=0; i<nlength; ++i)
		std::cout << parr[i] << " same as " << *(parr+i) << " ";
	
	std::cout << "\n";

}

int main(){

// here we pass the address of argument variable and not the variable itself
// so the function parameter must be a pointer

int value = 5;
std::cout << "value " << value << "\n";

foo(&value);
std::cout << "after foo " << value << "\n";

int arr[5] {1,2,3,4,5};
printArr(arr,5);


return 0; 

}
