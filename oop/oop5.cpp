

#include <iostream>

class Simple{

	private:
		int m_nID;
	public:
		Simple(int nID){

			setID(nID);
		}
	void setID(int num){ m_nID = num; }
	int getID(){return m_nID;}

};	

class Calc{

private:
	int m_nValue;

public:
	Cals(){m_nValue = 0;}

	void Add(int nValue) {m_nValue += nValue;}
	void Sub(int nValue) {m_nValue -= nValue;}
	void Mult(int nValue) {m_nValue -= nValue;}

	int GetValue(){return m_nValue;}

}

int main(){

	Simple simple(1);
	std::cout << simple.getID() << "\n";
	simple.setID(1001);
	std::cout << simple.getID() << "\n";

}
