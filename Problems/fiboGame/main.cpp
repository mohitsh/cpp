#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

#define N 4
#define M 4

ostream_iterator<int> print(cout, " ");

void displayGrid(vector<vector<int>> &grid)
{

    cout << "---------------2048---------------" << endl;
    for (int i = 0; i<grid.size(); ++i)
    {
        copy(grid[i].begin(), grid[i].end(), print);
        cout << endl;
    }
}

vector< vector<int> > makeGrid()
{

    int nrow = 4;
    vector< vector<int> > grid;

    for (int i = 0; i<nrow; ++i)
    {
        vector<int> col = {0, 0, 0, 0};
        grid.push_back(col);
    }
    
    return grid; 

}


int getFibo(int n)
{
   if (n<=2) return 1; 

   int n1, n2, n3;
   n1 = 1;
   n2 = 1;
   
   for (int i = 3; i<=n; ++i)
   {
         n3 = n1+n2;
         n1 = n2;
         n2 = n3;    
   }
   return n3;
}



void columnShifter(vector< vector<int> > &grid, int col)
{
  // shifting 3rd last column to right
  for (int i = 0; i<N; ++i)
  {
    int currVal = grid[i][col];
    int currPlace = col;

    for (int j = col+1; j<M; ++j)
    {
      cout << "currVal: " << currVal <<" val: " << grid[i][j] << endl;
      if (currVal == grid[i][j])
      {
        currVal += grid[i][j];
        currPlace = j;
      }

      else if (grid[i][j] == 0)
      {
        currPlace = j;
      }
    }

    grid[i][currPlace] = currVal;

    if (currPlace != col) grid[i][col] = 0;
  }

}

void leftSwipe(vector< vector<int> > &grid)
{

  // shifting 2nd column to right
  int col;
  col = M-1;
  columnShifter(grid, col);
  col = M-3;
  columnShifter(grid, col);

}

void driver(vector<vector<int> > &grid)
{
  displayGrid(grid);

  // add a new number
  grid[2][2] = 2;
  grid[2][3] = 2;


  /* make a right move */
  leftSwipe(grid);
  displayGrid(grid);

}
int main()
{
    vector<vector<int>> grid = makeGrid();
    
    driver(grid);     
   
    return 0;
}
