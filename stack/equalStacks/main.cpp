#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<iterator>
#include<vector>

using namespace std;

stack<string> findMax(stack<string>, stack<string>,stack<string>);
int main()
{
    stack<string> s1, s2, s3;

    string rawInput;
    string buf; 

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cin.ignore();     
    

    for(int i = 0; i<3; ++i)
    {
        getline(cin, rawInput);

        stringstream ss(rawInput);
        while(ss >> buf)
        {
            if (i == 0) s1.push(buf);
            if (i == 1) s2.push(buf);
            if (i == 2) s3.push(buf);
        }
   }
   //bool flag = false;
   //while (!flag)
   //{
   //}
}

stack<string> findMax(stack<string> s1, stack<string> s2, stack<string> s3)
{
    int l1, l2, l3;

    l1 = s1.size();
    l2 = s2.size();
    l3 = s3.size();

    if (l1 > l2 && l1 > l3) return s1;
    if (l2 > l1 && l2 > l3) return s2;
    if (l3 > l1 && l3 > l1) return s3;
}

