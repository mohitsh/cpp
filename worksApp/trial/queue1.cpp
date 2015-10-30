
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
	vector<int> vec;
		if (i == 0)
			{
				if (v[i+1][j] > v[i][j+1])
					{
						vec.push_back(i+1);
						vec.push_back(j);
						v[i][j] = 0;
					}
				else
					{
						vec.push_back(i);
						vec.push_back(j+1);	
						v[i][j] = 0;
					}
					
				return vec;
			}
			else if ( i == row-1)
			{
				if (v[i-1][j] > v[i][j+1])
				{
					vec.push_back(i-1);
					vec.push_back(j);
					v[i][j] = 0;
				}
				else
				{
					vec.push_back(i);
					vec.push_back(j+1);
					v[i][j] = 0;
				}
				return vec;
			}
			else
			{
				if (v[i-1][j] >= v[i+1][j] and v[i-1][j] >= v[i][j+1]) 
				{
					vec.push_back(i-1);
					vec.push_back(j);
					v[i][j] = 0;
				}
				else if (v[i+1][j] >= v[i-1][j] and v[i+1][j] >=v[i][j+1])
				{
					vec.push_back(i+1);
					vec.push_back(j);
					v[i][j] = 0;
				}
				else if (v[i][j+1] >= v[i+1][j] and v[i][j+1] >= v[i-1][j])
				{
					vec.push_back(i);
					vec.push_back(j+1);
					v[i][j] = 0;
				}
				return vec;
			}		
}

int search(vector< vector<int> > &v, int row, int col)
{
	int c_row = 0;
	int c_col = 0;
	vector<int> step;
	//step = findbest(v,c_row,c_col,row,col);
	//c_row = step[0];
	//c_col = step[1];
	while(c_col != col-1)
	{
		step = findbest(v,c_row,c_col,row,col);
		c_row = step[0];
		c_col = step[1];
		cout << c_row << " " << c_col << endl;
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
		{
			//cout << v[i][j] << " ";
		
		}
		//cout << "\n";
	}	

	// send total no of rows
	search(v,n,m);

	return 0;
}



