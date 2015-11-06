
#include <iostream>

class matrix
{
	private:
		double adData[4][4];
	public:	
		matrix()
		{
			for (int nCol = 0; nCol < 4; ++nCol)
				for (int nRow = 0; nRow < 4; ++nRow)
					adData[nRow][nCol] = 0.0;
		}
	double& operator() (const int nCol, const int nRow);
};

double& matrix::operator() (const int nCol , const int nRow)
{
	return adData[nRow][nCol];
}

int main()
{
	using namespace std;
	matrix cmat;
	cmat(1,2) = 2.0;
	cout << cmat(1,2) << endl;
	
}


					
