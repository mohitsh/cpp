
#include <iostream>

int askInput(){

	std::cout << "enter a number b/w 1 and 9 " << "\n";
	int num;
	std::cin >> num;
	return num;

}

void selection_sort(int array[]){
	std::cout << "passed array " << "\n";
	for (int k = 0; k < 10; ++k)
		std::cout << array[k] << "\n";
	
	const int size = 10;
	for (int i = size-1; i > 0; --i){
		int posmax = 0;
		for (int j = 1; j <= i; ++j){
			if (array[j] > array[posmax])
				posmax = j;
		}	
		int temp;
		temp = array[posmax];
		array[posmax] = array[i];
		array[i] = temp;
	}
	
	std::cout << "sorted array ->" << "\n";
	for (int i =0; i<10; ++i){
		std::cout << array[i] << "\n";	
	}

}


void bubble_sort(int array[]){
	
	const int size = 10;
	for (int i = size-1; i > 0; --i){
		for (int j = 0; j < i; ++j){
			if (array[j] > array[j+1]){
				std::swap(array[j],array[j+1]);
			}
		}
	}
	for (int k = 0; k < size; ++k)
		std::cout << array[k] << " ";
	std::cout << "\n";
}

void short_bubble(int array[]){
	const int size = 10;
	/*
	std::cout << "HOLA hola HOLA" << "\n";
	for (int o = 0; o<size; ++o)
		std::cout << array[o] << "\n";
	*/
	static int count = 0;
	for (int i = size-1; i>0; --i){
		static int index = 0;
		static bool exchange = true;
		while (exchange && index < i){
			std::cout << "im in while loop" << "\n";
			exchange = false;
			if (array[index] > array[index+1]){
				std::cout << "fuck this" << "\n";
				exchange = true;
				std::swap(array[index],array[index+1]);
				++count;
			}
		index = index + 1;
		}
	}
	
	std::cout << "okay this is short bubble sorted array ->" << "\n";
	for (int k = 0; k < size; ++k){
		std::cout << array[k] << " "; 	
	}
	std::cout << "\n";
	std::cout << "count ->" << count << "\n";
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
		std::cout << number << ' ' << "\n";

	int n1 = 1;
	int n2 = 2;
	std::cout << "n1 " << n1 << " n2 " << n2 << "\n";
	std::swap(n1,n2);
	std::cout << "n1 " << n1 << " n2 " << n2 << "\n";
	const int size = 10;
	int array[10] = {34,56,23,11,9,43,78,51,38,17};
	std::cout << "this is original array ->" << "\n";
	for (int m = 0; m<size; ++m)
		std::cout << array[m] << " ";
	std::cout << "\n";
	//selection_sort(array);	
	//bubble_sort(array);
	short_bubble(array);
	return 0;
}



