#include<iostream>
#include<stack>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;


string isBalanced(string s) {
    stack<string> st;
    
    map<string, string> matcher;
    vector<string> opening = {"(", "[", "{"};


    matcher["["] = "]";
    matcher["("] = ")";
    matcher["{"] = "}";

    int len = s.length();
     
    for (int i = 0; i<len; ++i)
    {
        vector<string>::iterator f;
        string char_s(1, s[i]);
        f = find(opening.begin(), opening.end(), char_s);
        if (f != opening.end()) st.push(char_s);
        else
        {
            if (st.empty()) return "NO";
            else
            {
                string popped = st.top();
                st.pop();
                if (matcher[popped] != char_s) return "NO";
            }
        }
    }

    if (st.empty()) return "YES";
    else return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
