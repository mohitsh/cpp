
#include <iostream>

class Something
{
	private:
		static int value;
	public:
		static int get_value(){return value++;}
};

int Something::value = 1234;

int main()
{
	using namespace std;
	cout << Something::get_value() << "\n";
	cout << Something::get_value() << "\n";
        cout << Something::get_value() << "\n";
        cout << Something::get_value() << "\n";
        cout << Something::get_value() << "\n";
        cout << Something::get_value() << "\n";

}
