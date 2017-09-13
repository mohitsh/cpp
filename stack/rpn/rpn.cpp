#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include<cctyp>
#include "stack.h"



int addi(int, int);
int subt(int, int);
int divi(int, int);
int mult(int, int);

int main()
{
	
	vector<string> expr;
	Stack s;

	expr.push_back("3");
	expr.push_back("4");
	expr.push_back("+");
	expr.push_back("2");
	expr.push_back("*");
	expr.push_back("1");
	expr.push_back("+");	

	vector<string>::iterator itr;
	for(itr = expr.begin(); itr != expr.end(); ++itr)
	{
		cout << *itr << endl;
	}

}

int addi(int a, int b)
{
	return a+b;
}

int subt(int a, int b)
{
	return a-b;
}

int divi(int a, int b)
{
	return a/b;
}

int mult(int a, int b)
{
	return a*b;
}
