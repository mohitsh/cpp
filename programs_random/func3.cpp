
#include <iostream>

void printA(){
std::cout << "A" << std::endl;

}

void printB(){
std::cout << "B" << std::endl;
}

void printAB(){

printA();
printB();

}

int main(){

std::cout << "we are calling printA " << std::endl;
printA();
std::cout << "we are calling printB " << std::endl;
printB();
std::cout << "we are calling printAB " << std::endl;
printAB();
return 0;

}
