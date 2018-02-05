#include<iostream>

using namespace std;

int min(int a, int b, int c){
    int min1 = (a<b)?a:b;
    return (min1<c)?min1:c;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m, max_size;
        cin >> n >> m;
        int arr[n][m];
        max_size = 0;

        for (int i = 0; i<n; ++i){
            for (int j = 0; j<m; ++j)
                cin >> arr[i][j];
        }


        // edge case if only one row
        if (n == 1){
            max_size = arr[0][0];
            for (int j = 1; j<m; ++j){
                if (arr[0][j] > max_size) max_size = arr[0][j];
            }
            cout << max_size << endl;
        }

        // edge case if only one column
        else if (m == 1){
            max_size = arr[0][0];
            for (int i = 0; i<n; ++i){
                if (arr[i][0] > max_size) max_size = arr[i][0];
            }

            cout << max_size << endl;

        }

        else{
            for (int i = 1; i<n; ++i){
               for (int j = 1; j<m; ++j){
                   if (arr[i][j] > 0 && arr[i-1][j-1] > 0 && arr[i-1][j] > 0 && arr[i][j-1] > 0){
                       int cur_size = 1+min(arr[i-1][j-1], arr[i-1][j], arr[i][j-1]);
                       arr[i][j] = cur_size;
                   }
                   if (arr[i][j] > max_size) max_size = arr[i][j];
               }
            }

            cout << max_size << endl;
        /*for (int i = 0; i<n; ++i){
            for (int j = 0; j<m; ++j)
                cout << arr[i][j] << " ";
            cout << endl;
        }*/
        }
        } 
        
        return 0; 
}

