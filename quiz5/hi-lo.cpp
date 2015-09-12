
#include <iostream>
#include <cstdlib>
#include <string>

unsigned int getRandomNumber(int min, int max){
	
	srand(static_cast<unsigned int>(time(0)));
	static const double fraction = 1.0/(static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand()*fraction*(max-min+1)+min);

}

bool check(int a, int b){
	if (a == b)
		return true;
	else
		return false;

}

int main(){
	come_here:
	int dabba_guess;
	dabba_guess = getRandomNumber(1,100);
	std::cout << dabba_guess << "\n";
	
	int count = 1;
	while (count <= 6){
		std::cout << "enter your guess " << "\n";
		int num;
		std::cin >> num;
		std::cout << num << "\n";
		bool gotcha;
		gotcha = check(dabba_guess, num);
		if (gotcha == true){
			std::cout << "you win!" << "\n";
			break;
		}
		
		else if (gotcha == false && count == 6){
			std::cout << "you loose! :(" << "\n";
			std::cout << "want to play again ?" << "\n";
			std::string yousay;
			std::getline(std::cin,yousay);
			if (yousay == "yes")
				goto come_here;
		}
		++count;
	}
	

}
