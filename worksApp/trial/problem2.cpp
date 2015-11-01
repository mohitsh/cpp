
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int search(vector< vector<int> > &v,int i, int j, int row, int col)
{

	//vector< vector<int> > v = v1;
	if (v[i][j] == -1)
		return -1;
	if (v[i][j] == 0)
		return 0;
	if (j == col-1)
		return 1;

	if (v[i][j] != -1 and v[i][j] != 0)
	{
		search(v,i+1,j,row,col);
		search(v,i,j+1,row,col);
		search(v,i,j-1,row,col);
	}
}

int main()
{
	int n,m;
	cout << "rows and columns: ";
	cin >> n >> m;	
	vector< vector<int> > v;
	
	for (int i = 0; i<n; i++)
	{
		v.push_back(vector<int>() );
		for(int j = 0; j<m; ++j)
		{
			int num;
			cin >> num;
			v[i].push_back(num);
		}
	}
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
			cout << v[i][j] << " ";
		//cout << "\n";
	}	
	cout << search(v,0,0,n,m) << endl;
	return 0;
}



