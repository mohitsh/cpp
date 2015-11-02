
#include <iostream>

struct Advert{

	float money;
	int order;
	int other;
};

void calc(Advert dude){

	std::cout << "money " << dude.money << "\n";
	std::cout << "order " << dude.order << "\n";
	std::cout << "other " << dude.other << "\n";
	std::cout << "ans " << dude.money*dude.order*dude.other << "\n";
}

struct Fraction{

	int num;
	int denom;
};

float multiply(Fraction a, Fraction b){

	float num;
	float denom;
	num = a.num*b.num;
	denom = a.denom*b.denom;
	return num/denom;

}
int main(){

	Advert kutta = {100.23,12,34};
	calc(kutta);
	int num1;
	std::cout << "give me numerator " << "\n";
	std::cin >> num1;
	int denom1;
	std::cout << "give me denom " << "\n";
	std::cin >> denom1;
	Fraction frac1 = {num1,denom1};
	
	int num2;
	std::cout << "give me numerator " << "\n";
	std::cin >> num2;
	int denom2;
	std::cout << "give me denom " << "\n";
	std::cin >> denom2;
	Fraction frac2 = {num2,denom2};

	std::cout << multiply(frac1,frac2) << "\n";

	

}



