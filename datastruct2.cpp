
#include <iostream>

// arguments gets copied every time 
// so calling this function won't change the argument
void passValue(int value){

	value = 99;
}

// whole array gets pass so after a pass to arrayValue
// prime array will be replaced
void arrayValue(int prime[5]){

	prime[0] = 11;
	prime[1] = 7;
	prime[2] = 5;
	prime[3] = 3;
	prime[4] = 2;


}

int main(){

	int value = 1;
	std::cout << "before passValue " << value << "\n";
	passValue(value);
	std::cout << "after passValue " << value << "\n";
	
	int prime[5] = {2,3,5,7,11};
	std::cout << "before arrayValue " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
	arrayValue(prime);
	std::cout << "after arrayValue " << prime[0] << " " << prime[1] << " " << prime[2] << " " <<  prime[3] << " " << prime[4] << "\n";

	int dabba[5] = {1,2,3,4,5};
	int total = 0;
	for (int i=0; i<5; ++i){
		total = total + dabba[i];
	}
	std::cout << "total sum " << total << "\n";

	return 0;

}
