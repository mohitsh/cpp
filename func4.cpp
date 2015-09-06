

#include <iostream>

// this whole thing is fucking wrong.

/*
int main(){

	int foo(){

		std::cout << "foo!";
		return 0;
	
	}
std::cout << " this call is from main function "; std::endl;
std::cout << " the call below is from the nested function so beware! "; std::endl;
foo();
return 0;

}

// end this wrong doing ends here.
*/

int foo(){

	std::cout << " foo! you fool! foo." << std::endl;
	return 0;
}

int main(){

	std::cout << " this is the main function " << std::endl;
	std::cout << " below line prints something from foo function " << std::endl;
	foo();
	return 0;

}
