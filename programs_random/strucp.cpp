
#include <iostream>

struct Wing{

int age;
float CPI;


};

void printInfo(Wing wing){

	std::cout << "age " << wing.age << "\n";
	std::cout << "CPI " << wing.CPI << "\n";

}

int main(){
Wing tapan = {21,10.0};

std::cout << tapan.age << "\n";


Wing dalla;

dalla.age  = 21;
dalla.CPI = 10.0;

std::cout << dalla.age << "\n";
std::cout << dalla.CPI << "\n";

Wing namit = {22,9.9};
Wing jain = {20,10.0};
printInfo(namit);
printInfo(jain);
return 0;
}
