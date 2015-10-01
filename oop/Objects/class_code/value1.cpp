
#include <iostream>

class Value
{
	private:
		int m_nvalue;
	public:
		Value(int nValue){m_nvalue=nValue;}
		friend bool isEqual(const Value &cval1, const Value &cval2);
};

bool isEqual(const Value &cval1, const Value &cval2)
{
	return (cval1.m_nvalue == cval2.m_nvalue);
}

int main()
{
	using namespace std;
	Value val1(20);
	Value val2(20);
	cout << isEqual(val1,val2) << "\n";
	
}
