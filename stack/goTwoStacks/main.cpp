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

     
    return 0;
}

void processor(vector<int> &a, vector<int> &b, int x)
{
    int sum = 0;
    stack<int> s1, s2;
    vector<int>::reverse_iterator i;
    for (i = a.rbegin(); i != a.rend(); ++i)
        s1.push(*i);

    for (i = b.rbegin(); i != b.rend(); ++i)
        s2.push(*i);

    int score1 = score2 = 0;
    while (s < x)
    {
        int top1, top2, extra1, extra2, popped;
        top1 = s1.top();
        top2 = s2.top();

        if (top1 < top2) 
        {
            sum += top1;
            s1.pop(); 
            score1 += 1;
            score2 += 1;

        }

        else if (top2 < top1)
        {
            sum += top2;
            s2.pop();
            score1 += 1;
            score2 += 1;
        }

        else
        {
            sum += top1; 
            
        }
    }

}
