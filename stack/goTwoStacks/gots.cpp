#include<iostream>
#include <bits/stdc++.h>
#include<stack>

using namespace std;


void processor(vector<int> &, vector<int> &, int);

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }
        processor(a,b,x); 
    }

     
}

void processor(vector<int> &a, vector<int> &b, int x)
{
    int sum(0);
    int score(0);

    int l1, l2, l;
    int elem1, elem2, i1(0), i2(0);

    l1 = a.size();
    l2 = b.size();

    if (l1 < l2)
        l = l1;
    else
        l = l2;


    while(i1 < l1 && i2 < l2)
    //for (int i = 0; i<l; ++i)
    {
        if (sum > x)
            break;

        elem1 = a[i1];
        elem2 = b[i2];
        
        if (elem1 <= elem2)
        {
            sum += elem1;
            //cout << "adding1: " << elem1 << endl;
            score += 1;
            i1 += 1;
        } 
        else
        {
            sum += elem2;
            //cout << "adding2: " << elem2 << endl;
            score += 1;
            i2 += 1;
        }
    }

    if (sum > x)
    {
        cout << score-1 << endl;
    }
    else
    {
        if (l1 < l2 && i1 == l1)        
        {
            for (int i = l1; i < l2; ++i)
            {
                if (sum > x)
                    break;
                sum += b[i];
                score += 1;
            }
        }

        if (l2 < l1 && i2 == l2)
        {
            for (int i = l2; i < l1; ++i)
            {
                if (sum > x)
                    break;
                sum += a[i];
                score += 1;
            }
        }
        
        if (sum > x)
            cout << score - 1 << endl;
        else
            cout << score << endl;
    }
    
}
