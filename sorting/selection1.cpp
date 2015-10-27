
#include <iostream>

int main()
{
	int arr[] {54,26,93,17,77,31,44,55,20};
	
	for (auto dude:arr)
		std::cout << dude << std::endl;


	for (int fillspot = 8; fillspot>=0; --fillspot)
	{
		int maxpos = 0;
		int pos;
		for (pos = 1; pos<=fillspot; ++pos)
		{
			if (arr[pos] > arr[maxpos])
			{
				maxpos = pos;
			}
		}
		int tmp = arr[fillspot];
		arr[fillspot] = arr[maxpos];
		arr[maxpos] = tmp;
	}
	
	std::cout << "after sorting: " << std::endl;
	for (auto num:arr)
		std::cout << num << std::endl;
}
	
