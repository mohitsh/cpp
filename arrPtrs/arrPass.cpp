
#include <iostream>

int main()
{
	int arr[] {434,221,313,645,255};
	for(int num:arr)
		std::cout << num << std::endl;
	auto max = 0;
	for (auto &i:arr)
	{
		if (i>max)
			max = i;
	}
	
	std::cout << "maximum value is: " << max << std::endl;
}
