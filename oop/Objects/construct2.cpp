
#include <iostream>

class Book
{

	private:
		int m_npages;
		
		// private constructor can't be accessed
		Book()
		{
			m_npages = 0;
		}

	public:
		// public constructor can be accessed
		Book(int pages)
		{
			m_npages = pages;
	
		}
};

int main()
{
	Book();   // can't be accessed private class.
	Book(2001); // public class can be accessed

}
