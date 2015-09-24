
#include <iostream>


int foo(){}
int goo(){}

double dalla(){}
float kutta(){}
int daddu(){}

int main(){

	int arr[] {1,2,3,4,5};
	//std::cout << arr[4] << "\n";
	//std::cout << *(arr+4) << "\n";

	//std::cout << arr+4 << "\n";
	
	// pointer to a function that takes no arguments and returns an int
	// the function below can point to any function
	
	int (*pfoo)() = foo;
	pfoo = goo;

	// matching return signatures 
	double (*pdalla)() = dalla;
	float (*pkutta)() = kutta;
	int (*daddu)() = daddu;
		
}
