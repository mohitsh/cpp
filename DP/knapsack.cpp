#include<iostream>
#include<vector>

using namespace std;

int max(int a, int b){
    return (a>b)?a:b;
}


int fillKnapsack(int wt[], int v[], int n, int W){

    int mat[n+1][W+1]; 

    for (int i = 0; i<n+1; ++i){
        for (int j = 0; j<W+1; ++j){
            mat[i][j] = 0;
        }
    }

    for (int i = 1; i<n+1; ++i){
        for (int j = 1; j<W+1; ++j){
            if (j < wt[i-1]) mat[i][j] = mat[i-1][j];
            else{
                mat[i][j] = max(mat[i-1][j], mat[i-1][j-wt[i-1]] + v[i-1]);
            }
        }
    } 


    /*for (int i = 0; i<n+1; ++i){
        for (int j = 0; j<W+1; ++j){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }*/
    return mat[n][W];

}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int W;
        cin >> W;
        int wt[n];
        int v[n];
        for (int i = 0; i<n; ++i)
            cin >> v[i];
        for (int i = 0; i<n; ++i)
            cin >> wt[i];

        cout << fillKnapsack(wt, v, n, W) << endl;
    }

    /*int n = 4;
    int W = 5;

    int wt[n] = {5,3,4,2};
    int v[n] = {60, 50, 70, 30};*/
    

    return 0;
}
