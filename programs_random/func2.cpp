
#include <iostream>

int getValue(){

std::cout << "input the value: ";
int a;
std::cin >> a;
return a;

}

int main(){

int x = getValue();
int y = getValue();

int z = x + y;
std::cout << "this is the output: " << z << std::endl;

}
