#include<iostream>
#include<vector>
#include<iterator>

using namespace std;


void rotateMat(vector< vector<int> > &mat, int row_min, int row_max, 
        int col_min, int col_max)
{

    // rotate left row 
    int col = col_min;
    int prev = mat[row_min][col];
    int new_elem;
    for (int i = row_min; i<row_max-1; ++i)
    {
       new_elem = mat[i+1][col];
       mat[i+1][col] =  prev;
       prev =  new_elem;
    }



    // rotate bottom col
    int row = row_max-1;
    prev = new_elem;

    for (int j = col_min; j<col_max-1; ++j)
    {
        new_elem = mat[row][j+1];
        mat[row][j+1] = prev;
        prev = new_elem;
    }


    
    // rotate right row        
    col = col_max-1;
    prev = new_elem;
    for (int i = row_max-1; i>row_min; --i)
    {
        new_elem = mat[i-1][col];
        mat[i-1][col] = prev;
        prev = new_elem;
    }


    // rotate top col;
    row = row_min;
    prev = new_elem;
    for (int j = col_max-1; j>col_min+1; --j)
    {
        new_elem = mat[row][j-1];
        mat[row][j-1] = prev;
        prev = new_elem;
    }


    // fix first element
    
    mat[row_min][col_min] = new_elem;
   
}


int main()
{

    ostream_iterator<int> print(cout, " ");

    vector<vector<int>> mat;

    //vector<int> row1 = {1,2,3,4,5};
    //vector<int> row2 = {4,3,8,9,1};
    //vector<int> row3 = {2,1,3,9,7};
    //vector<int> row4 = {1,5,4,2,3};

    int m, n, r;
    m = 5;
    n = 4;
    r = 7;

    int repeat = m + m + n-2 + n-2;
    r = r%repeat;

    vector<int> row1 = {1,2,3,4};
    vector<int> row2 = {7,8,9,10};
    vector<int> row3 = {13, 14, 15, 16};
    vector<int> row4 = {19, 20, 21, 22};
    vector<int> row5 = {25,26, 27, 28};


    mat.push_back(row1);
    mat.push_back(row2);
    mat.push_back(row3);
    mat.push_back(row4);
    mat.push_back(row5);


 
    for (int i = 0; i<mat.size(); ++i)
    {
        copy(mat[i].begin(), mat[i].end(), print);
        cout << endl;
    }


    for (int k = 0; k<r; ++k)
    {
        int row_max, row_min, col_max, col_min;
        row_min = 0;
        row_max = m;
        col_min = 0;
        col_max = n;
     
        while (row_min < row_max && col_min < col_max)
        {
            rotateMat(mat, row_min, row_max, col_min, col_max);
            row_min += 1;
            row_max -= 1;
            col_min += 1;
            col_max -= 1;
        }
    


        cout << endl << " ROTATED " << endl;

        for (int i = 0; i<mat.size(); ++i)
        {
            copy(mat[i].begin(), mat[i].end(), print);
            cout << endl;
        }

    }  
    return 0;

}


