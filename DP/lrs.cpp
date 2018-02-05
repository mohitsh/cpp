#include<iostream>

using namespace std;

int max(int a, int b){
    return (a>b)?a:b;
}

int main(){
	int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        char s[n];
        cin >> s;
        

        int mat[n+1][n+1];
        for (int i = 0; i<n+1; ++i){
            for (int j = 0; j<n+1; ++j){
                mat[i][j] = 0;
            }
        }

        for (int i = 1; i<n+1; ++i){
            for (int j = 1; j<n+1; ++j){
                //cout << s[i-1] << " " << s[j-1] << endl;
                if (s[i-1] ==  s[j-1] && j>i)
                    mat[i][j] = 1+mat[i-1][j-1];
                else
                    mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
            }
        }

        /*for (int i = 0; i<n+1; ++i){
            for (int j = 0; j<n+1; ++j){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }*/
        cout << mat[n][n] << endl;
    }	
	return 0;
}

