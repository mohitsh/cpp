
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// applying greedy algorithm to find the next best step

vector<int> findbest(vector< vector<int> > &v, int i, int j, int row, int col, bool flag)
{
	// vec will store next step coordinates and next step value
	vector<int> vec;
		// flag 0 indicates snake can teleport
		if (flag == 0)
		{
		// if starting from first row
		if (i == 0)
		{
			/* find the next best step with maximum value */

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

		// if starting with last row
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
		// starting with any other row than first and last

		else if (i > 0 and i < row-1)
		{

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

		// flag 1 indicates no teleportation allowed
		if (flag == 1)
		{
		if (i == 0)
		{

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

/*
arguments: 
v1:grid to search, row: no of rows in grid, col: no of cols in grid,
flag indicates whether to teleport or not.
*/

int search(vector< vector<int> > &v1, int row, int col, bool flag)
{
	// max takes care of maximum score
	int max = 0;
	// explore grid starting with each row (if possible)
	for (int i =0; i<row; ++i)
	{
		vector< vector<int> > v  = v1;
		int c_row = i;
		int c_col = 0;

		// if starting point is blocked continue to next value
		if (v[c_row][c_col] == -1)
			continue;
		else
		{

		// sum will keep track of score summation
		int sum = v[c_row][c_col];
		vector<int> step;
		/*
			dude indicates whether to continue summation or not.
			if path is blocked then dude will be 1 and no summation 
			will take place for that path.
			if dude is 0 throughout only then summation will take place
			for entire path.
		*/
		bool dude = 0;
		while(c_col != col-1)
		{
			// keep trak of previous row to know whether teleportation happened.
			int prev_row = c_row;
			step = findbest(v,c_row,c_col,row,col,flag);
			c_row = step[0];

			/* 
			path is blocked turn dude to 1 and break out of the loop
			so no summation will take place for this path.
			*/
			if (c_row == -1)
				{
					dude = 1;
					break;
				}
			else
			{
			c_col = step[1];

			/* 
			if teleportation took place then difference of current and previous step 
			will be row-1 in that case make sum equal to value of current place 		          		i.e. value after teleportation.
			*/

			if (((prev_row - c_row) == row-1) or ((c_row - prev_row) == row-1))
				sum = v[c_row][c_col];
			/*
				it teleportation didn't occur then simply add value of next step 
				to our summation.
			*/
			else
				sum = sum + step[2];
			}
		}
		
		/*
			when snake reaches the last column 
			it can go up or down.
			in that case only if it reached there (the last row)
			dude will be 0 so find the total sum by going to first and last row
			and return the maximum value
		*/
		if (dude == 0)
		{
		int sum1 = sum;
		int sum2 = sum;

		// goint up the row
		for (int p=c_row-1; p>=0; --p)
		{
			if (v[p][col-1] == -1)
				break;
			else
			{
				sum1 = sum1+v[p][col-1];
			}	
		}

		// going down the row
		for (int p = c_row+1; p<row; ++p)
		{
			if (v[c_row+1][col-1] == -1)
				break;
			else
				sum2 = sum2 + v[p][col-1];
		}

		// find the maximum sum
		if (sum1 > sum2)
		{
			max = sum1;
		}
		else
		{
			max = sum2;
		}
		}
	}
}
	return max;
}
int main()
{
	int n,m;
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
	/* search for path. 0 indicates that snake can teleport and 1 indicates that
		it can't. We will explore both possibilites to get the maximum score.
	*/
	int ans1 = search(v,n,m,0);
	int ans2 = search(v,n,m,1);

	if (ans1 > ans2 and ans1 !=0 )
		cout << ans1 << endl;
	else if (ans2 > ans1 and ans2 != 0)
		cout << ans2 << endl;
	/* no path then return -1 */
	else 
		cout << -1 << endl;

	return 0;
}



