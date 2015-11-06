
#include <iostream>

using namespace std;
class MinMax
{
	private:
		int m_nMin;
		int m_nMax;
	public:
		MinMax(int nMin, int nMax)
		{
			m_nMin = nMin;
			m_nMax = nMax;
		}
		
		int GetMin(){return m_nMin;}
		int GetMax(){return m_nMax;}
		
		friend MinMax operator+(const MinMax &cM1, const MinMax &cM2);
		friend MinMax operator+(const MinMax &cM1, int nValue);
		friend MinMax operator+(int nValue, const MinMax &cM2);
};


MinMax operator+(const MinMax &cM1, const MinMax &cM2)
{
	int nMin = (cM1.m_nMin>cM2.m_nMin)?cM1.m_nMin:cM2.m_nMin;
	int nMax = (cM1.m_nMax>cM2.m_nMax)?cM1.m_nMax:cM2.m_nMax;
	
	return MinMax(nMin, nMax);
}

int main()
{
	MinMax cM1(10,12);
	MinMax cM2(20,22);
	MinMax dude = cM1 + cM2;
	cout << dude.GetMin() << endl;
	cout << dude.GetMax() << endl;
}




