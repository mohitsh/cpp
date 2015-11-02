#include <iostream>

int main()
{
	using namespace std;
	int arr[] {5,4,3,2,1};
	
	cout << arr << endl;
	cout << *arr << endl;
	cout << sizeof(arr) << endl;

	int *ptr = arr;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << sizeof(ptr) << endl;

	int *ptr1;
	int value = 7;
	ptr1 = &value;
	
	cout << "first element:" <<  "\t" << *(arr) << " " << arr << endl;
	cout << "second element:" <<  "\t" << *(arr+1) << " " << arr+1 << endl;
	cout << "third element:" <<  "\t" << *(arr+2) << " " << arr+2 << endl;
	cout << "fourth element:" << "\t" << *(arr+3) << " " << arr+3 << endl;
	cout << "fifth element:" << "\t" << *(arr+4) << " " << arr+4 << endl;


	cout << arr[0] << " " << &arr[0] << endl;
	cout << arr[1] << " " << &arr[1] << endl;
	cout << arr[2] << " " << &arr[2] << endl;
	cout << arr[3] << " " << &arr[3] << endl;
	cout << arr[4] << " " << &arr[4] << endl;


	char c = 'C';
	cout << &c << endl;

	
}
