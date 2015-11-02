
#include <iostream>


int foo(){}
int goo(){}

double dalla(){}
float kutta(){}
int daddu(){}

void select_sort(int array[], int size){

	for (int slot = size-1; slot > 0; --slot){
		int posmax;
		posmax = 0;
		for (int location = 1; location <= slot; ++location){
	
			if (array[location] > array[posmax])
				posmax= location;
		
		}
		int tmp;
		tmp = array[slot];
		array[slot] = array[posmax];
		array[posmax] = tmp;

	}
	for (int i = 0; i<6; ++i)
		std::cout << array[i] << " ";
	
	std::cout << "\n";
	
	

}

int main(){

	
	int arr[] {6,5,4,3,2,1};
	//std::cout << arr[4] << "\n";
	//std::cout << *(arr+4) << "\n";

	//std::cout << arr+4 << "\n";
	
	// pointer to a function that takes no arguments and returns an int
	// the function below can point to any function
	select_sort(arr,6);
	for (int m = 0; m < 6; ++m)
		std::cout << arr[m] << " ";

	std::cout << "\n";
	int (*pfoo)() = foo;
	pfoo = goo;

	// matching return signatures 
	double (*pdalla)() = dalla;
	float (*pkutta)() = kutta;
	int (*daddu)() = daddu;
		
}
