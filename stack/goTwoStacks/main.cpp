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
    int sum = 0;
    stack<int> s1, s2;
    vector<int>::reverse_iterator i;
    for (i = a.rbegin(); i != a.rend(); ++i)
        s1.push(*i);

    for (i = b.rbegin(); i != b.rend(); ++i)
        s2.push(*i);

    int score(0);
    while (sum < x)
    {
        int top1, top2, extra1, extra2, popped;
        if (!s1.empty())
            top1 = s1.top();
        if (!s2.empty())
            top2 = s2.top();

        if (top1 <= top2 && !s1.empty()) 
        {
            sum += top1;
            s1.pop(); 
            //cout  << "popping: " << top1 << endl;
            score += 1;
        }

        else
        {
            if (!s2.empty())
            {
                sum += top2;
                s2.pop();
            //cout << "popping: " << top2 << endl;
            score += 1;
            }
        }

    //cout << "final sum: " << sum << " x: " << x << " score: " << score << endl;
    }
    if (sum > x)
        cout << score-1 << endl; 
    else
        cout << score << endl;
}
