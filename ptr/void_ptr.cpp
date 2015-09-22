
#include <iostream>

int main(){

	int nValue;
	float fValue;
	
	struct Something{
		
		int n;
		float f;

	};

	Something sValue;
	void *ptr;   
	ptr = &nValue;	// int type
	ptr = &fValue;	// float type
	ptr = &sValue;	// struct type

	int val1 = 5;
	void *ptr1 = &val1;

	// to dereference the pointer its type must be knows so assign a type to pointer
	int *int_ptr1 = static_cast<int*>(ptr1);
	std::cout << *int_ptr1 << "\n";


}
