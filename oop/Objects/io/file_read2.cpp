#include <iostream>
#include <fstream>
#include <string>

int main()
{

	using namespace std;
	ifstream inf("sample.dat");
	if (!inf)
	{
		cerr << "error" << endl;
		
	}
	
	while (inf)
	{
		std::string dude;
		getline(inf,dude);
		cout << dude << endl;
	}
	
	return 0;
}
