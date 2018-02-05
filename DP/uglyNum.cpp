#include<iostream>

using namespace std;

long long min(long long a, long long b, long long c){
    long long min1 = (a<b)?a:b;
    return (min1<c)?min1:c;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n; 
        cin >> n;
        
        long long arr[n];
        long long i2, i3, i5;

        arr[0] = 1;

        i2 = 0;
        i3 = 0;
        i5 = 0;

        long long choice2, choice3, choice5, min_val;
        choice2 = arr[i2]*2;
        choice3 = arr[i3]*3;
        choice5 = arr[i5]*5;
        
        for (long long i = 1; i<n; ++i){ 

            min_val = min(choice2, choice3, choice5);
            arr[i] = min_val;

            if (min_val == choice2){
                i2 += 1;
                choice2 = arr[i2]*2;
            }
            if (min_val == choice3){
                i3 += 1;
                choice3 = arr[i3]*3;
            }
            if (min_val == choice5) {
                i5 += 1;
                choice5 = arr[i5]*5;
            }
           
        }   
        cout << min_val << endl;
    }

    return 0;
}
