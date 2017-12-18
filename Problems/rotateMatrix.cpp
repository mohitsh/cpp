#include<iostream>
#include<vector>
#include<iterator>

using namespace std;


void rotateMat(vector< vector<int> > &mat, int row_min, int row_max, 
        int col_min, int col_max)
{

    // rotate left row 
    int col = 0;
    int prev = mat[0][col];
    int new_elem;
    for (int i = row_min; i<row_max-1; ++i)
    {
       new_elem = mat[i+1][col];
       mat[i+1][col] =  prev;
       prev =  new_elem;
    }

    cout << new_elem << endl;


    // rotate bottom col
    int row = 3;
    prev = new_elem;

    for (int j = col_min; j<col_max-1; ++j)
    {
        new_elem = mat[row][j+1];
        mat[row][j+1] = prev;
        prev = new_elem;
    }


    cout << new_elem << endl;
    
    // rotate right row        
    col = 4;
    prev = new_elem;
    for (int i = row_max-1; i>row_min; --i)
    {
        new_elem = mat[i-1][col];
        mat[i-1][col] = prev;
        prev = new_elem;
    }

    cout << new_elem << endl;

    // rotate top col;
    row = 0;
    prev = new_elem;
    for (int j = col_max-1; j>col_min+1; --j)
    {
        new_elem = mat[row][j-1];
        mat[row][j-1] = prev;
        prev = new_elem;
    }
    cout << new_elem << endl;


    // fix first element
    
    mat[0][0] = new_elem;
   
}


int main()
{

    ostream_iterator<int> print(cout, " ");

    vector<vector<int>> mat;

    vector<int> row1 = {1,2,3,4,5};
    vector<int> row2 = {4,3,8,9,1};
    vector<int> row3 = {2,1,3,9,7};
    vector<int> row4 = {1,5,4,2,3};

    mat.push_back(row1);
    mat.push_back(row2);
    mat.push_back(row3);
    mat.push_back(row4);


 
    for (int i = 0; i<mat.size(); ++i)
    {
        copy(mat[i].begin(), mat[i].end(), print);
        cout << endl;
    }


    int row_max, row_min, col_max, col_min;
    row_min = 0;
    row_max = 4;
    col_min = 0;
    col_max = 5;

    rotateMat(mat, row_min, row_max, col_min, col_max);


    /*// rotate left row 
    int col = 0;
    int prev = mat[0][col];
    int new_elem;
    for (int i = row_min; i<row_max-1; ++i)
    {
       new_elem = mat[i+1][col];
       mat[i+1][col] =  prev;
       prev =  new_elem;
    }

    cout << new_elem << endl;


    // rotate bottom col
    int row = 3;
    prev = new_elem;

    for (int j = col_min; j<col_max-1; ++j)
    {
        new_elem = mat[row][j+1];
        mat[row][j+1] = prev;
        prev = new_elem;
    }


    cout << new_elem << endl;
    
    // rotate right row        
    col = 4;
    prev = new_elem;
    for (int i = row_max-1; i>row_min; --i)
    {
        new_elem = mat[i-1][col];
        mat[i-1][col] = prev;
        prev = new_elem;
    }

    cout << new_elem << endl;

    // rotate top col;
    row = 0;
    prev = new_elem;
    for (int j = col_max-1; j>col_min+1; --j)
    {
        new_elem = mat[row][j-1];
        mat[row][j-1] = prev;
        prev = new_elem;
    }
    cout << new_elem << endl;


    // fix first element
    
    mat[0][0] = new_elem; */

    cout << endl << " ROTATED " << endl;

    for (int i = 0; i<mat.size(); ++i)
    {
        copy(mat[i].begin(), mat[i].end(), print);
        cout << endl;
    }

    
    return 0;

}


