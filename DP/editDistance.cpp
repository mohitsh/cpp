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

void editDistance(string s1, string s2)
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
        mat[0][j] = j;

    // initialize first col from 0 to l1-1;
    
    for (int i = 0; i<=l1; ++i)
        mat[i][0] = i;


    for (int i = 1; i<=l1; ++i)
    {
        for (int j = 1; j<=l2; ++j)
        {
            /* we are taking string index from 0 
             * so since first row and column of mat is dedicated for base cases
             * we have to shift i and j by one 
             *
             * i -> i+1 and j -> j+1
             *
             * if you follow this ^ code below will look normal
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
    
    cout << mat[l1][l2] << endl;
    
}

int main()
{
    string s1, s2;
    
    cin >> s1 >> s2;
    cout << s1 << endl;
    cout << s2 << endl;

    editDistance(s1, s2);

    return 0;
}
