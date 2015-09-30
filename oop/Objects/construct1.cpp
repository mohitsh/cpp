
#include <iostream>

class Fraction
{

	private:
		int m_num;
		int m_denom;
	public:
		Fraction(int num, int denom)
		{
			m_num = num;
			m_denom = denom;
		}
		
		int get_num(){return m_num;}
		int get_denom(){return m_denom;}

};
int main(){

	using namespace std;
	Fraction f1(101,1000);
	cout << f1.get_num() << "/" << f1.get_denom() << "\n";

}
