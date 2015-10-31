
#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>
#include <list>
#include <iomanip>

using namespace std;

vector<int> findbest(vector< vector<int> > &v, int i, int j, int row, int col)
{	
	//vector< vector<int> > v = v1;
	vector<int> vec;
		if (i == 0)
		{
			//cout << "dude I'm here!!!" << endl;
			if (v[i+1][j] > v[i][j+1])
			{
				vec.push_back(i+1);
				vec.push_back(j);
				vec.push_back(v[i+1][j]);
				v[i][j] = 0;
			}
			else
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);	
				v[i][j] = 0;
			}
					
			return vec;
		}
		else if ( i == row-1)
		{
			//cout << "for last row: " << endl;
			//cout << "i-1 " << i-1 << endl;
			//cout << "j " << j << endl;
			//cout << "i " << i << endl;
			//cout << "j+1 " << j+1 <<endl;
			//cout << v[i-1][j] << endl;
			//cout << v[i][j+1] << endl;
			if (v[i-1][j] > v[i][j+1])
			{
				//cout << "last row should be here! " << endl;
				vec.push_back(i-1);
				vec.push_back(j);
				vec.push_back(v[i-1][j]);
				v[i][j] = 0;
			}
			else
			{
				//cout << "No! here " << endl;
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);
				v[i][j] = 0;
			}
			return vec;
		}
		else if (i > 0 and i < row-1)
		{
			//cout << "HERE!!!!!" << endl;
			if (v[i-1][j] >= v[i+1][j] and v[i-1][j] >= v[i][j+1]) 
			{
				vec.push_back(i-1);
				vec.push_back(j);
				vec.push_back(v[i-1][j]);
				v[i][j] = 0;
			}
			else if (v[i+1][j] >= v[i-1][j] and v[i+1][j] >=v[i][j+1])
			{
				vec.push_back(i+1);
				vec.push_back(j);
				vec.push_back(v[i+1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] >= v[i+1][j] and v[i][j+1] >= v[i-1][j])
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);
				v[i][j] = 0;
			}
			return vec;
		}		
}

int search(vector< vector<int> > &v1, int row, int col)
{

	//int c_col = 0;
	
	for (int i =0; i<row; ++i)
	{
		vector< vector<int> > v  = v1;
		cout << "Starting with Row: " << i << endl;
		int c_row = i;
		int c_col = 0;
		int sum = v[c_row][c_col];
		vector<int> step;
		while(c_col != col-1)
		{
			step = findbest(v,c_row,c_col,row,col);
			c_row = step[0];
			c_col = step[1];
			sum = sum + step[2];
			cout << c_row << " " << c_col << endl;
		}
		
		int sum1 = sum;
		int sum2 = sum;
		for (int p=c_row-1; p>=0; --p)
		{
			if (v[p][c_col] == -1)
				break;
			else
				sum1 = sum1+v[p][c_col];
		}
		for (int p = c_row+1; p<row; ++p)
		{
			if (v[c_row+1][c_col] == -1)
				break;
			else
				sum2 = sum2 + v[p][c_col];
		}
		cout << "sum1: " << sum1 << endl;
		cout << "sum2: " << sum2 << endl;
	}
	//cout << "sum: " << sum << endl;
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
		{
			//cout << v[i][j] << " ";
		
		}
		//cout << "\n";
	}	
	// send total no of rows
	search(v,n,m);
	return 0;
}



