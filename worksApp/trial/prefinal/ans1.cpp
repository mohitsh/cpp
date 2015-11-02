
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findbest(vector< vector<int> > &v, int i, int j, int row, int col, bool flag)
{	
	//vector< vector<int> > v = v1;
	vector<int> vec;
		if (flag == 0)
		{
		if (i == 0)
		{
			//cout << "dude I'm here!!!" << endl;
			if (v[i+1][j] > v[i][j+1] and v[i+1][j] > v[row-1][j] and v[i+1][j] != 0)
			{
				vec.push_back(i+1);
				vec.push_back(j);
				vec.push_back(v[i+1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] > v[i+1][j] and v[i][j+1] > v[row-1][j] and v[i][j+1] != 0)
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);	
				v[i][j] = 0;
			}
			else if (v[row-1][j] > v[i+1][j] and v[row-1][j] > v[i][j+1] and v[row-1][j] != 0)
			{
				vec.push_back(row-1);
				vec.push_back(j);
				vec.push_back(v[row-1][j]);
				v[i][j] = 0;
			}		
			else
				vec.push_back(-1);
			return vec;
		}
		else if ( i == row-1)
		{
			if (v[i-1][j] > v[i][j+1] and v[i-1][j] > v[0][j] and v[i-1][j] != 0)
			{
				vec.push_back(i-1);
				vec.push_back(j);
				vec.push_back(v[i-1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] > v[i-1][j] and v[i][j+1] > v[0][j] and v[i][j+1] != 0)
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);
				v[i][j] = 0;
			}
			else if (v[0][j] > v[i][j+1] and v[0][j] > v[i-1][j] and v[0][j] != 0)
			{
				vec.push_back(0);
				vec.push_back(j);
				vec.push_back(v[0][j]);
				v[i][j] = 0;
			}
			else
				vec.push_back(-1);
			return vec;
		}
		else if (i > 0 and i < row-1)
		{
			//cout << "HERE!!!!!" << endl;
			if (v[i-1][j] >= v[i+1][j] and v[i-1][j] >= v[i][j+1] and v[i-1][j] != 0) 
			{
				vec.push_back(i-1);
				vec.push_back(j);
				vec.push_back(v[i-1][j]);
				v[i][j] = 0;
			}
			else if (v[i+1][j] >= v[i-1][j] and v[i+1][j] >=v[i][j+1] and v[i+1][j] != 0)
			{
				vec.push_back(i+1);
				vec.push_back(j);
				vec.push_back(v[i+1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] >= v[i+1][j] and v[i][j+1] >= v[i-1][j] and v[i][j+1] != 0)
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);
				v[i][j] = 0;
			}
			else
				vec.push_back(-1);
			return vec;
		}
		}
		if (flag == 1)
		{
		if (i == 0)
		{
			//cout << "dude I'm here!!!" << endl;
			if (v[i+1][j] > v[i][j+1] and v[i+1][j] != 0)
			{
				vec.push_back(i+1);
				vec.push_back(j);
				vec.push_back(v[i+1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] > v[i+1][j] and v[i][j+1] != 0)
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);	
				v[i][j] = 0;
			}
			else
				vec.push_back(-1);
			return vec;
		}
		else if ( i == row-1)
		{
			if (v[i-1][j] > v[i][j+1] and v[i-1][j] != 0)
			{
				vec.push_back(i-1);
				vec.push_back(j);
				vec.push_back(v[i-1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] > v[i-1][j] and v[i][j+1] != 0)
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);
				v[i][j] = 0;
			}
			else
				vec.push_back(-1);
			return vec;
		}
		else if (i > 0 and i < row-1)
		{
			//cout << "HERE!!!!!" << endl;
			if (v[i-1][j] >= v[i+1][j] and v[i-1][j] >= v[i][j+1] and v[i-1][j] != 0) 
			{
				vec.push_back(i-1);
				vec.push_back(j);
				vec.push_back(v[i-1][j]);
				v[i][j] = 0;
			}
			else if (v[i+1][j] >= v[i-1][j] and v[i+1][j] >=v[i][j+1] and v[i+1][j] != 0)
			{
				vec.push_back(i+1);
				vec.push_back(j);
				vec.push_back(v[i+1][j]);
				v[i][j] = 0;
			}
			else if (v[i][j+1] >= v[i+1][j] and v[i][j+1] >= v[i-1][j] and v[i][j+1] != 0)
			{
				vec.push_back(i);
				vec.push_back(j+1);
				vec.push_back(v[i][j+1]);
				v[i][j] = 0;
			}
			else
				vec.push_back(-1);
			return vec;
		}
		}		
}

int search(vector< vector<int> > &v1, int row, int col, bool flag)
{

	//int c_col = 0;
	int max = 0;
	for (int i =0; i<row; ++i)
	{
		vector< vector<int> > v  = v1;
		//cout << "Starting with Row: " << i << endl;
		int c_row = i;
		int c_col = 0;
		//cout << c_row << " " << c_col << endl;
		if (v[c_row][c_col] == -1)
			continue;
		else
		{
		int sum = v[c_row][c_col];
		vector<int> step;
		bool dude = 0;
		while(c_col != col-1)
		{
			int prev_row = c_row;
			step = findbest(v,c_row,c_col,row,col,flag);
			c_row = step[0];
			if (c_row == -1)
				{
					//cout << "no path" << endl;
					dude = 1;
					break;
				}
			else
			{
			c_col = step[1];
			if (((prev_row - c_row) == row-1) or ((c_row - prev_row) == row-1))
				sum = v[c_row][c_col];
			else
				sum = sum + step[2];
			//cout << c_row << " " << c_col << endl;
			}
		}
		
		if (dude == 0)
		{
		int sum1 = sum;
		int sum2 = sum;
		for (int p=c_row-1; p>=0; --p)
		{
			if (v[p][col-1] == -1)
				break;
			else
			{
				//cout << "here!!! " << endl;	
				sum1 = sum1+v[p][col-1];
			}	
		}
		for (int p = c_row+1; p<row; ++p)
		{
			if (v[c_row+1][col-1] == -1)
				break;
			else
				sum2 = sum2 + v[p][col-1];
		}
		//cout << "sum1: " << sum1 << endl;
		//cout << "sum2: " << sum2 << endl;
		if (sum1 > sum2)
		{
			max = sum1;
			//cout << sum1 << endl;
		}
		else
		{
			max = sum2;
			//cout << sum2 << endl;
		}
		}
	}
	//cout << max << endl;
}
	return max;
}
int main()
{
	int n,m;
	//cout << "rows and columns: ";
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
	//cout << "Across the wall: " << endl;
	int ans1 = search(v,n,m,0);
	//cout << "No crossing: " << endl;
	int ans2 = search(v,n,m,1);
	if (ans1 > ans2 and ans1 !=0 )
		cout << ans1 << endl;
	else if (ans2 > ans1 and ans2 != 0)
		cout << ans2 << endl;
	else 
		cout << -1 << endl;
	return 0;
}



