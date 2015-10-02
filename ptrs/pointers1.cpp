

#include <iostream>

using namespace std;

void add(int *a, int b)
{
	*a += b;
}

int main()
{
	int foo = 100;	
	cout << foo << "\n";
	cout << &foo << "\n";

	int *ptr1 = &foo; 
	cout << ptr1 << "\n";
	int a = 10;
	int b = 20;
	
	add(&a,b);
	cout << a << "\n";
	cout << b << "\n";

	int arr[8] {1,3,9,2,6,5,4,10};
	
	int *ptr2 = &arr[0];
	while (*ptr2!= 10)
	{
		cout << *ptr2 << "\n";
		++ptr2;
	}
	cout << "accessing through pointers: " << "\n";
	cout << *(&arr[0]) << "\n";
	cout << *(&arr[0]+1) << "\n";
	cout << *(&arr[0] + 7) << "\n";

	cout << "arr is pointer to first element of array: " << "\n";
	cout << *(arr) << "\n";
	cout << *(arr+1) << "\n";
	cout << *(arr+2) << "\n";
	cout << *(arr+7) << "\n";
	
	cout << "all of them should print 6 at index 4: " << "\n";
	cout << *(arr+4) << "\n";
	cout << arr[4] << "\n";
	cout << *(&arr[0]+4) << "\n";	

	cout << "arr and &arr[0] both have same address: " << "\n";
	cout << arr << "\n";
	cout << &(arr[0]) << "\n";
	
	int *data = nullptr;
	
	unsigned int n = 0;
	cout << "no of data points: ";
	cin >> n;
	
	data = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> data[i];
	}
	
	for (int i = 0; i<n; ++i)
		cout << *(data+i) << " ";

	cout << endl;
	delete[] data;
	
	int *dude = nullptr;
	dude = new int;
	*dude = 123143;
	cout << *dude << "\n";	
	delete dude;
	
}













