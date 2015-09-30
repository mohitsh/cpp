
#include <iostream>

class Calc
{

	private:
		int m_value;
	public:
		Calc(){m_value = 0;}
		
		Calc& Add(int nValue){ m_value += nValue; return *this;}
		Calc& Sub(int nValue){m_value -= nValue; return *this;}
		Calc& Mul(int nValue){m_value *= nValue; return *this;}
		
		int getValue() { return m_value;}
};

int main()
{

	Calc calc;
	calc.Add(5).Sub(3).Mul(4);
	std::cout << calc.getValue() << "\n";

}
