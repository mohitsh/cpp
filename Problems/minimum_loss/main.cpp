#include <bits/stdc++.h>

using namespace std;

long minimumLoss(vector <long> price) {
    
    long l = price.size();
    vector<long> sell(l);

    sell[l-1] = price[l-1];
    for (long i = l-2; i>=0; --i){
        sell[i] = (price[i] > sell[i+1]) ? price[i] : sell[i+1];
    }


    for (long i = 0; i<sell.size(); ++i)
         cout << sell[i] << " ";
    
    cout << endl;
    return 0; 
}

int main() {
    long n;
    cin >> n;
    vector<long> price(n);
    for(long price_i = 0; price_i < n; price_i++){
       cin >> price[price_i];
    }
    long result = minimumLoss(price);
    cout << result << endl;
    return 0;
}

