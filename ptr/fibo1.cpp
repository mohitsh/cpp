

#include <iostream>

int fibo(int n){


	if (n == 1 || n == 2){
		
		return 1;
	
	}
	else
		return (fibo(n-1)+fibo(n-2));

}


int main(){

	std::cout << fibo(3) << "\n";	
        std::cout << fibo(4) << "\n";
        std::cout << fibo(5) << "\n";
        std::cout << fibo(6) << "\n";
        std::cout << fibo(7) << "\n";


}
