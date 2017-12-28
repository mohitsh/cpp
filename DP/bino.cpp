#include<iostream>

using namespace std;

int main()
{


    int n, k;
    cin >> n >> k;


    long long mat[n+1][n+1];

    for (int i = 0; i<=n; ++i)
        mat[i][0] = 1;

    for (int i = 0; i<=n; ++i)
       mat[i][i] = 1; 



    for (int i = 2; i<=n; ++i)
    {
        for (int j = 1; j<i; ++j)
            mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
    }


    cout << mat[n][k] << endl;
    return 0;
}
