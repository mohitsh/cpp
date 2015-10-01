
#include <iostream>

class Calc
{
	private:
		int m_nValue;
	public:
		Calc(){m_nValue = 0;}
		
		void Add(int value);
		void Sub(int value);
		void Mul(int value);
		
		int GetValue(){return m_nValue;}

};

void Calc::Add(int value){ m_nValue += value;}
void Calc::Sub(int value){m_nValue -= value;}
void Calc::Mul(int value){m_nValue *= value;}

int main()
{

	using namespace std;
	Calc dude;
	dude.Add(10);
	dude.Sub(5);
	dude.Mul(3);
	cout << dude.GetValue() << "\n";

}
