#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<iterator>
#include<vector>

using namespace std;

int findMax(stack<int> &, stack<int> &, stack<int> &, int &, int &, int &);

int main()
{
    stack<int> s1, s2, s3, s1new, s2new, s3new;

    string rawInput;
    string buf; 

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cin.ignore();     
    

    int s1sum, s2sum, s3sum;
    s1sum = s2sum = s3sum = 0;

    for(int i = 0; i<3; ++i)
    {
        getline(cin, rawInput);

        stringstream ss(rawInput);
        while(ss >> buf)
        {
            int data = stoi(buf);
            if (i == 0)
            {  
                s1.push(data);
                s1sum += data;
            }
            if (i == 1)
            {   
                s2.push(data);
                s2sum += data;
            }
            if (i == 2)
            {   
                s3.push(data);
                s3sum += data;
            }
        }
    }


    while(!s1.empty())
    { 
        s1new.push(s1.top()); 
        s1.pop();
    }
    while(!s2.empty())
    {   
        s2new.push(s2.top()); 
        s2.pop();
    }
    while(!s3.empty())
    {   
        s3new.push(s3.top()); 
        s3.pop();
    }

    int ans;
    ans = findMax(s1new, s2new, s3new, s1sum, s2sum, s3sum);
    cout << ans << endl;
}

int findMax(stack<int> &s1, stack<int> &s2, stack<int> &s3, int &s1sum, int &s2sum, int &s3sum)
{
    int popped;
    bool flag = false;
    //while(!(s1sum == s2sum) && !(s2sum == s3sum))
    while(!flag)
    {
        if (s1sum == 0 && s2sum == 0 && s3sum == 0) flag = true;;
        if((s1sum == s2sum) && (s2sum == s3sum)) flag = true;
        //cout << "INSIDE: " << endl;
        //cout << s1sum << " " << s2sum << " " << s3sum << endl;
        if ((s1sum > s2sum) && (s1sum > s3sum) ||
            (s1sum == s2sum) && (s1sum > s3sum) ||    
            (s1sum > s2sum) && (s1sum == s3sum))
        {
            popped = s1.top();
            s1sum -= popped;
            s1.pop();
            continue;
        }
        if ((s2sum > s1sum) && (s2sum > s3sum) ||
            (s2sum == s1sum) && (s2sum > s3sum) ||
            (s2sum > s1sum) && (s2sum == s3sum))
        {
            popped = s2.top();
            s2sum -= popped;
            s2.pop();
            continue;
        }
        if ((s3sum > s1sum) && (s3sum > s2sum) ||
            (s3sum == s1sum) && (s3sum > s2sum) ||
            (s3sum > s1sum) && (s3sum == s2sum))
        {
            popped = s3.top();
            s3sum -= popped;
            s3.pop();
            continue;
        }
    }
    return s1sum;

}

