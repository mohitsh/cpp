#include<iostream>
#include<vector>
#include<iterator>

using namespace std;


ostream_iterator<int> print(cout, " ");

void displayGrid(vector<vector<int>> grid)
{
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

int main()
{
    vector<vector<int>> grid = makeGrid();
    


    displayGrid(grid);
   
    return 0;
}
