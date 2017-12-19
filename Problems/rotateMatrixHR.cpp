#include<iostream>
#include<vector>
#include<iterator>
#include<sstream>
#include<algorithm>

using namespace std;


int isZero(int val){ return val==0;}


int gcd(long  long a , long  long b)
{
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int lcm(vector<int> v)
{

   int result = v[0];

    for (int i = 1; i<v.size(); ++i)
    {
        result = (v[i]*result) / (gcd(v[i], result));
    } 

    return result;
}


void rotateMat(vector< vector<int> > &mat, long long row_min, long long row_max, 
        int col_min, long long col_max)
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

    int m, n, r;
    cin >> m >> n >> r;
    cin.ignore();

    vector<vector<int>> mat;

    for (int i = 0; i<m; ++i)
    {
        string rawInput;
        string buf;

        getline(cin, rawInput);
        stringstream ss(rawInput);

        vector<int> tokens;
        while(ss>>buf)
        {
            int elem = stoi(buf);
            tokens.push_back(elem);
        }
        mat.push_back(tokens);
    }

    

    ostream_iterator<int> print(cout, " ");

    int repeat = 1;
    int m1, n1;
    m1 = m; n1=n;
    int size = (m1/2 < n1/2) ? m1/2 : n1/2;
    vector<int> vRepeat(size);

    
    while ( m1 > 1 && n1 > 1)
    {
        repeat = (m1 + m1 + n1-2 + n1-2);
        vRepeat.push_back(repeat);

        m1 = m1-1;
        n1 = n1-1;
    }
    vector<int>::iterator it = remove_if(vRepeat.begin(), vRepeat.end(), isZero);
    vRepeat.resize(it-vRepeat.begin());

    int  lcmVal = lcm(vRepeat);

    int modulo = ((m == n) ? m : lcmVal);

    int counter = (r<modulo) ? r : r%modulo;

    for (int k = 0; k<counter; ++k)
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

    }  


    for (int i = 0; i<mat.size(); ++i)
    {
        copy(mat[i].begin(), mat[i].end(), print);
        cout << endl;
    }

    return 0;

}


