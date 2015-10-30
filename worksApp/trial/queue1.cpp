
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

int findbest(vector< vector<int> > &v, int i, int j, int row, int col)
{
	vector<int> vec;
		int j = 0;
		if (i == 0)
		{
			//vec.push_back(v[i+1][j]);
			//vec.push_back(v[i][j+1]);
			//int value = *max_element(vec.begin(),vec.end());
			int arr[2];
			if (v[i+1][j] > v[i][j+1])
			{
				arr[0] = i+1;
				arr[1] = j;
			}
			else
			{
				arr[0] = i;
				arr[1] = j+1;	
			}
					
			return arr;
		}
		else if ( i == row-1)
		{
			//vec.push_back(v[i-1][j]);
			//vec.push_back(v[i][j+1]);
			//int value = *max_element(vec.begin(),vec.end());
			int arr[2];
			if (v[i-1][j] > v[i][j+1])
			{
				arr[0] = i-1;
				arr[1] = j;
			}
			else
			{
				arr[0] = i;
				arr[1] = j+1;
			}
			return arr;
		}
		else
		{
			vec.push_back(v[i-1][j]);	
			vec.push_back(v[i+1][j]);
			vec.push_back(v[i][j+1]);
			//int value = *max_element(vec.begin(),vec.end());
			int arr[2];
			if (v[i-1][j] >= v[i+1][j] and v[i-1][j] >= v[i][j+1]) 
			{
				arr[0] = i-1;
				arr[1] = j;
			}
			else if (v[i+1][j] >= v[i-1][j] and v[i+1][j] >=v[i][j+1])
			{
				arr[0] = i+1;
				arr[1] = j;
			}
			else if (v[i][j+1] >= v[i+1][j] and v[i][j+1] >= v[i-1][j])
			{
				arr[0] = i;
				arr[1] = j+1;
			}
			return arr;
		}
		
	
		

	return 0;
}

void search(vector< vector<int> > &v, int row, int col)
{
	int step = findbest(v,0,0,row,col);
		
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



