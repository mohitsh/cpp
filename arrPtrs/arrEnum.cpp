
#include <iostream>

enum Students
{
	Jain,		// 0
	Namit,		// 1
	Tapan,		// 2
	Dalakoti,	// 3
	Varun,		// 4
	Jangid,		// 5
	Deepankar,	// 6
	total_students		// 7

};

int main()
{
	int test_scores[total_students];
	test_scores[Jain] = 100;
	test_scores[Jangid] = 101;
	test_scores[Deepankar] = 110;	

	std::cout << test_scores[Jain] << std::endl;
	std::cout << test_scores[Jangid] << std::endl;
	std::cout << test_scores[Deepankar] << std::endl;

	

}
	
	
