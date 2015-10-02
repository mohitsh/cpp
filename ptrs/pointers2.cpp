
#include <iostream>

class Foo
{
	public:
		int *a;
		Foo(int a)
		{
			this->a = new int(a);
		}
		~Foo()
		{
			delete this->a;
		}
};

int main()
{
	Foo f1(10);
	Foo f2 = f1;
	return 0;
}
