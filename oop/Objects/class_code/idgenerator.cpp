
#include <iostream>

class Something
{
	private:
		int id;
		static int id_gen;
	public:
		Something(){id = id_gen++;}
		int get_id(){return id;}
	
};

int Something::id_gen = 1;
	
int main()
{
	Something one;
	Something two;
	Something three;
	
	using namespace std;
	cout << one.get_id() << "\n";
	cout << two.get_id() << "\n";
	cout << three.get_id() << "\n";
}
