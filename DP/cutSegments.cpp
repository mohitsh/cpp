#include<iostream>

using namespace std;

int max(int &a, int &b){
    return (a ? a>b : b);
}

void findNumCutSegment(int N, int *arr){
    
    int m = 3;
    int mat[m][N+1];

    for (int i = 0; i<m; ++i){
        for (int j = 0; j<N+1; ++j){
            mat[i][j] = 0;
        }
    } 

    for (int j = 0; j<N+1; ++j){
        if (j%arr[0] == 0) mat[0][j] = j/arr[0];
        else mat[0][j] = 0;
    }

    for (int i = 1; i<m; ++i){
        for (int j = 0; j<N+1; ++j){
            if (j < arr[i]) mat[i][j] = mat[i-1][j];
            else if (j == arr[i]) mat[i][j] =  max(mat[i-1][j], 1);
            else{
                int seg1 = mat[i][arr[i]];
                int seg2 = mat[i][j-arr[i]];
                 
                if (seg2 == 0) mat[i][j] = mat[i-1][j];
                else mat[i][j] = max(seg1 + seg2, mat[i-1][j]);
            }
        }
    }

    /*for (int i = 0; i<m; ++i){
        for (int j = 0; j<N+1; ++j){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << mat[m-1][N] << endl;        
}


int main(){

    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;

        int arr[3]; // store x, y, z
        for (int i = 0; i<3; ++i)
            cin >> arr[i];

        findNumCutSegment(N, arr);
    }

    return 0;
}


