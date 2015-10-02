
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;
int main()
{

	stringstream ss;
	ss << 89 << "Hex" << hex << 89 << oct << "oct" << 89;
	cout << ss.str() << endl;

}
