

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	
	ofstream outf("sample.dat");
	if (!outf)
		cout << "ERROR!";
	else
	{
		outf << "this is first line" << endl;
		outf << "this is second line" << endl;
	}
	return 0;
}
