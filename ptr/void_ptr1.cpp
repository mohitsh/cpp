
#include <iostream>

enum Type{

	INT,
	FLOAT,
	CSTRING,
};

void printValue(void *ptr, Type type){

	switch(type){
		case INT:
			std::cout << *static_cast<int*>(ptr) << "\n";
			break;
		case FLOAT:
			std::cout << *static_cast<float*>(ptr) << "\n";
			break;
		case CSTRING:
			std::cout << static_cast<char*>(ptr) << "\n";
			break;

	}

}

int main(){

	int nValue = 5;
	double fValue = 10.05;
	char szValue[] = "dalla";
	
	printValue(&nValue,INT);
	printValue(&fValue,FLOAT);
	printValue(&szValue,CSTRING);
	
	return 0;
}
