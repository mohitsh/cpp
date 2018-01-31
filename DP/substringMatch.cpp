#include<iostream>
#include<vector>
#include<string>


using namespace std;


int min(int a, int b, int c)
{

   int min;

   min = (a<b) ? a : b; 
   min = (min < c) ? min : c;
   return min;
}

void matchSubString(string s1, string s2)
{

    int l1, l2;
    l1 = s1.size();
    l2 = s2.size();

    static int mat[1000][1000];

    for (int i = 0; i<=l1; ++i)
    {
        for (int j = 0; j<=l2; ++j)
            mat[i][j] = 0;
    }

    // initialize first row from 0 to l2-1;
    
    for (int j = 0; j<=l2; ++j)
        mat[0][j] = 0;

    // initialize first col from 0 to l1-1;
    
    for (int i = 0; i<=l1; ++i)
        mat[i][0] = i;


    for (int i = 1; i<=l1; ++i)
    {
        for (int j = 1; j<=l2; ++j)
        {
            /* we are taking string index from 1 
             * so since first row and column of mat is dedicated for base cases
             * we have to start from 1
             *
             * Hence string indexing will require i-1 and j-1 since they start from 0
             * */

            int left = mat[i-1][j]; // cost of insert 
            int top = mat[i][j-1];  // cost of delete
            int diag = mat[i-1][j-1];   // match/replace 
            int curr = mat[i][j];

            if (s1[i-1] == s2[j-1]) mat[i][j] = diag;
            else mat[i][j] = min(left, top, diag) + 1;

        }
    }

    // utility to print final matrix
    
    /*for (int i = 0; i<=l1; ++i)
    {
        for (int j = 0; j<=l2; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }*/
    
    int i = l1;
    int j = 0;

    for (int k = 1; k<l2; ++k)
    {
        if (mat[i][k] < mat[i][j]) j = k;
    }

    //cout << "i: " << i << " j: " << j << endl;
    if (j == 0) 
        cout << "substring not found" << endl;
    else
        cout << mat[i][j] << endl;
   
}

int main()
{
    string s1, s2;
    
    cin >> s1 >> s2;
    cout << s1 << endl;
    cout << s2 << endl;

    // s2.size() > s1.size()
    matchSubString(s1, s2);

    return 0;
}
