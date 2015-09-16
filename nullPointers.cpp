
#include <iostream>

void printSize(int array[]){

	std::cout << "array pointer size: " <<  sizeof(array) << "\n";
}

int main(){

	int *ptr;
	int value1 = 10;
	int value2 = 20;
	ptr = &value1;
	std::cout << "value1: " << value1 << "\n";
	std::cout << "address value1: " << &value1 << "\n";
	std::cout << "pointer value: " << ptr << "\n";
	std::cout << "dereference pointer: " << *ptr << "\n";
	std::cout << "assinging new values to pointer" << "\n";
	ptr = &value2;
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";	
	//value store in pointer i.e. a memory address won't change 
	// but value that value address has will cange but below line
	// dereference will modify the value from 20 to 100 
	// but address store in pointer will not change
	*ptr = 100;
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	std::cout << value2 << "\n";

	// null pointer
	int *dude;
	dude = 0;
	std::cout << dude << "\n";
	
	int *dabba(0);
	std::cout << dabba << "\n";
	
	// null pointer
	int *kutta = nullptr;
	std::cout << "kutta: " << kutta << "\n";	

	std::cout << "array work: " << "\n";
	int array[5] = {5,4,3,2,1};
	std::cout << array[0] << "\n";
	std::cout << &array[0] << "\n";
	std::cout << array << "\n";

	std::cout << "array size: " << sizeof(array) << "\n";
	int *nishant;
	nishant = array;
	std::cout << "ptr size: " << sizeof(nishant) << "\n";	
	
	std::cout << "hola hola hola: " << "\n";
	std::cout << sizeof(array) << "\n";
	printSize(array);

	short suggu = 7;
	short *muggu = &suggu;
	
	std::cout << muggu << "\n";
	std::cout << muggu+1 << "\n";
	std::cout << muggu+2 << "\n";
	std::cout << muggu+3 << "\n";

	std::cout << *muggu << "\n";
	std::cout << *(muggu+1) << "\n";
	std::cout << *(muggu+2) << "\n";
	std::cout << *(muggu+3) << "\n";

	std::cout << &array[1] << "\n";
	std::cout << array + 1 << "\n";
	
	std::cout << array[1] << "\n";
	std::cout << *(array+1) << "\n";

	std::cout << array[2] << "\n";
	std::cout << *(array+2) << "\n";
	std::cout << &array[2] << "\n";
	std::cout << array+2 << "\n";


	char myName[5] = "Alex";
	const char *myName2 = "Alex";
	std::cout << myName << "\n";
	std::cout << myName2 << "\n";

	//char word = 'Q';	
	char c = 'Q';
	std::cout << &c << "\n";
	

}
























