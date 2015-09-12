
#include <iostream>
#include <cstdlib>
#include <ctime>

// generating random number manually
unsigned int PRNG(){

	// this static is very important
	// this preserves the value and let us create random 
	// values one after another
	static unsigned int seed = 5323;
	std::cout << "assigned seed here " << seed << "\n";
	seed =  (8253729 * seed + 2396403);
	std::cout << "generated new seed " << seed << "\n";
	std::cout << "modulo applied " <<  seed % 32767 << "\n";
	
	


}

unsigned int getRandomNumber(int min, int max){
		static const double fraction = 1.0/(static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand()*fraction*(max-min+1) + min);
	}

int main(){

	for (int i = 0; i < 10; ++i){

		//std::cout << PRNG() << "\t";
		//PRNG();
		if ((i+1)%5 == 0){
			std::cout << "\n";
		}
		
	}
	// generating random number through cstlib
	
	// this seed is fixed so sequence of numbers will always be fixed
	//srand(5323);
	
	// timestamp will keep on changing so use this to generate rands
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i<100; i++){
		std::cout << rand() << "\t";
		if ((i+1)%5 == 0){
			std::cout << "\n";
		}
	}
	
	std::cout << "time " << time(0) << "\n";
	
	std::cout << getRandomNumber(1,6) << "\n";
	
}
































