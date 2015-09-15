

#include <iostream>

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


}
