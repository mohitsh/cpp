
#include <iostream>

void foo(int *&p){
}

int main(){
	
	int x = 1;
	std::cout << "value: " << x << "\n";
	std::cout << "address: " << &x << "\n";
	std::cout << "value of address: " << *&x << "\n";

	// he-ha pointers begins

	int value = 5;
	int *ptr = &value;
	std::cout << value << "\n";
	std::cout << ptr << "\n";

	std::cout << "this is different: " << "\n";
	int num = 1;
	int *dude = &num;
	std::cout << &num << "\n";
	std::cout << dude << "\n";
	std::cout << *dude << "\n";
	*dude = 10;
	std::cout << *dude << "\n";

	int value1 = 5;
	int value2 = 7;
	
	int *pointer;
	pointer = &value1;
	std::cout << value1 << "\n";
	std::cout << pointer << "\n";
	std::cout << *pointer << "\n";
	std::cout << "reassigned: " << "\n";
	pointer = &value2;
	std::cout << value2 << "\n";
	std::cout << pointer << "\n";
	std::cout << *pointer << "\n";
	
	int *dabba;
	foo(dabba);
	std::cout << *dabba << "\n";	

	int *kutta;
	int *jain;
	
	std::cout << "kutta: " << sizeof(kutta) << "\n";
	std::cout << "jain: " << sizeof(jain) << "\n";

}




