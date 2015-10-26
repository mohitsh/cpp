#include <iostream>
#include <string>

int main()
{
	using namespace std;
//	string name("the dude");
//	cout << "the goddamn name is: " << name << endl;

//	cout << "the cin part: " << endl;
//	string your_name;
//	string age;
	
//	cout << "enter your name: " << endl;
//	cin >> your_name;
//	cout << "enter your age: " << endl;
//	cin >> age; 

//	cout << "your name is: " << your_name << " and your age is: " << age << endl;

	cout << "the getline part: " << endl;
	string my_name;
	string my_age;

	cout << "enter your name: " << endl;
	getline(cin,my_name);

	cout << "enter your age: " << endl;
	getline(cin,my_age);
	
	cout << "my name is: " << my_name << " and my age is: " << my_age << endl;
	cout << "my name length is: " << my_name.length() << endl;
}
