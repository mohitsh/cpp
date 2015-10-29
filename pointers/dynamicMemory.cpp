
#include <iostream>

int main()
{

	using namespace std;
	int *ptr = new int;
	*ptr = 10;
	
	cout << *ptr << endl;

	delete ptr;		
	//cout << *ptr << endl;
	ptr = nullptr;

	cout << "enter array size " << endl;
	int size;
	cin >> size;
	
	int *array = new int[size] {1,2,3,4,5};
	cout << "an array of size " << size << " has been allocated. " << endl;

	//array[0] = 20;
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;	
	cout << array[3] << endl;
	cout << array[4] << endl;
	cout << array[5] << endl;
	
	delete[] array;
	array = 0;

	return 0;

}
