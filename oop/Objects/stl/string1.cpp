
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string dude("dude");
	cout << dude << "\n";
	cout << dude.length() << "\n";

	cout << (dude.empty() ? "True" : "False");
	cout << "\n";

	string dude2("");
	cout << (dude2.empty() ? "True" : "False");
	cout << "\n";

	cout << (dude.max_size()) << "\n";
	cout << (dude2.max_size()) << "\n";

	string name("tapanBohra");
	cout << name.length() << "\n";
	cout << name.capacity() << "\n";
	
	cout << name[0] << "\n";
	cout << name[1] << "\n";

	name[0] = 'X';
	cout << name << "\n";

	name[1] = 'A';
	cout << name << "\n";

	string myname("namit");
	cout << myname << "\n";
	string yourname = myname;
	cout << yourname << "\n";
	
	string hisname;
	hisname.assign(myname,1,3);
	cout << hisname << "\n";
	
	string name1("dalla");
	string name2("kutta");
	cout << "before swapping: " << "\n";
	cout << name1 << "\n";
	cout << name2 << "\n";
	swap(name1,name2);
	cout << "after swapping: " << "\n";
	cout << name1 << "\n";	
	cout << name2 << "\n";
	
	
	string one("one");
	string two(" two ");
	string three("three");
	
	cout << one << "\n";
	cout << one + two << "\n";
	


}


















