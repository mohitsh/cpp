
#include <iostream>

int main()
{
	int arr[] {54,26,93,17,77,31,44,55,20};
	
	for (int i = 8; i>=0; --i)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	for (auto num:arr)
		std::cout << num << std::endl;
}
