
#include <iostream>

class Book{

	//int m_npages;

private:
	int m_npages1;
	Book(){
		m_npages1 = 0; 
	}

public:
	int m_npages2;
	Book(int pages){
	
		m_npages2 = pages;
	}	

};

int main(){

	Book book1(1000);
	std::cout << "no of pages " << book1.m_npages2 << "\n";
	
}
