#include<algorithm>
#include<vector>
#include "stack.h"

bool checkMatching(vector<string>);

int main()
{
    vector<string> expr;
    //expr = {"[","(",")","[","]","{","(",")","(",")"};	
    expr = {"[", "{", "(", ")", "}", "{", "}", "(", ")", "]"};

    bool response = checkMatching(expr);
    cout << "Is Matched: " << response << endl;

    return 0;
}

bool checkMatching(vector<string> expr)
{
    Stack s;
    vector<string> openingBraces;
    vector<string> closingBraces;

    openingBraces = {"[", "{", "("};	
    closingBraces = {"]", "}", ")"};

    vector<string>::iterator itr;
    for(itr = expr.begin(); itr != expr.end(); ++itr)
    {
        auto findOpening = find(openingBraces.begin(), openingBraces.end(), *itr);
        /* if element being parsed is opening braces then push on stack */
        if (findOpening != openingBraces.end()) 
            s.push(*itr);

      
        auto findClosing = find(closingBraces.begin(), closingBraces.end(), *itr);	
        if (findClosing != closingBraces.end()) // closing braces found
        {
            /* if element being parsed is closing braces and stack is empty then not matched*/
            if (s.isEmpty())
                return false;
            /* element being parsed and element popped should be correspnding closing, opening pair */
            else
            {
                string elem = s.pop();
                auto posC = find(closingBraces.begin(), closingBraces.end(), *itr) - closingBraces.begin();
                auto posO = find(openingBraces.begin(), openingBraces.end(), elem) - openingBraces.begin();
                if (posO != posC)
                    return false;
            }
        }
    }
    /* is some opening braces are left then not matched */
    if (!s.isEmpty())
        return false;
    else
        return true;
}

