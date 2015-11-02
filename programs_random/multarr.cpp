

#include <iostream>
#include <cstring>

int main(){

	int array[3][5] = {
		{1,2,3,4,5},
		{5,4,3,2,1},
		{1,2,3,4,5}
	};
	int row = 3;
	int col = 5;
	for (int i=0; i<row; ++i){

		for (int j = 0; j<col; ++j){
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}

	const int numrows = 10;
	const int numcols = 10;
	
	int product[numrows][numcols] = {0};
	for (int i = 1; i<numrows; ++i){
		for (int j = 1; j<numcols; ++j){
			product[i][j] = i*j;
		}
	}
	for (int i = 1; i<numrows; ++i){
		for (int j = 1; j<numcols; ++j){
			std::cout << product[i][j] << " ";
		}
		std::cout << "\n";
	}
	char mystring[] = "string";
	std::cout << mystring << " has " << sizeof(mystring) << " characters" << "\n"; 
	for(int i = 0; i<sizeof(mystring); ++i)
		std::cout << static_cast<int>(mystring[i]) << " ";	
	std::cout << "\n";

	char ceo[] = "verma ji";
	std::cout << ceo << "\n";
	// '' denotes character and "" denotes string so here 
	// use '' because its a character not a string
	ceo[1] = 'D'; 
	std::cout << ceo << "\n";
	
	char input[10];
	std::cout << "provide input ->" << "\n";
	std::cin.getline(input, 10);
	std::cout << "your input -> " << input << "\n";
	
	char source[] = "darkLord";
	std::cout << "original -> " << source << "\n";
	char dest[11];
	strcpy(dest,source);
	std::cout << "copied -> " << dest << "\n";

	char source1[] = "utkarhPatange";
	std::cout << "original: " << source1 << "\n";
	char copy[49];
	strncpy(copy,source1,49);
	copy[49] = 0;
	std::cout << "copied: " << copy << "\n";

	std::cout << "good part: " << "\n";
	char name[20] = "mohit";
	std::cout << "sizeof: " << sizeof(name) << "\n";
	std::cout << "strlen: " << strlen(name) << "\n";

}






