
#include <iostream>

class Accumulator
{
	private:
		int m_nvalue;
	public:
		Accumulator(){m_nvalue = 0;}
		void Add(int value){m_nvalue += value;}
		int getValue(){return m_nvalue;}
		friend void Reset(Accumulator &cAccumulator);
		
};

void Reset(Accumulator &cAccumulator){
	cAccumulator.m_nvalue = 0;
}

int main()
{
	
	using namespace std;
	Accumulator acc;
	cout << acc.getValue() << "\n";
	acc.Add(1000);
	cout << acc.getValue() << "\n";
	Reset(acc);
	cout << acc.getValue() << "\n";
} 
