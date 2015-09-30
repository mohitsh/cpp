
#include <iostream>
#include <cstring>
class String
{
	private:
		char *m_chString;
		int m_nLength;
	public:
		int GetLength()
		{
			return m_nLength;
		}

		void SetLength(int length)
		{
			m_nLength = length;
		}
};

int main()
{

	using namespace std;
	String str1;
	str1.SetLength(100);
	cout << str1.GetLength() << "\n";
	//cout << str1.m_nLength << "\n";

}
