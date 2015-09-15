
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
	
	int array[10] = {34,56,23,11,9,43,78,51,38,17};
	for (auto num:array)
		std::cout << num << "\n";
	//selection_sort(array);	
	bubble_sort(array);
	return 0;
}



