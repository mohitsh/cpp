#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<iterator>
#include<vector>

using namespace std;


int main()
{
    stack<int> s;
    stack<pair<int, int> > aux;

    string rawInput;
    string buf; 

    int n;
    cin >> n;
    cin.ignore();     

    for(int i = 0; i<n; ++i)
    {
        getline(cin, rawInput);

        stringstream ss(rawInput);
        vector<string> tokens;
        vector<string>::iterator ii;
        while(ss >> buf)
            tokens.push_back(buf);

       
        if (tokens.size() == 2)
        {
            int data = stoi(tokens[1]); 
            s.push(data);
            if (aux.empty())
                aux.push(make_pair(data, 1));

            else
            {
                pair<int, int> max_count = aux.top();
                int max_val = max_count.first;
                int count = max_count.second;

                if (data == max_val)
                {
                    aux.pop();
                    count += 1;
                    pair<int, int> new_max =  make_pair(data, count);
                    aux.push(new_max);
                }

                if (data > max_val)
                {
                    pair<int, int> new_max =  make_pair(data, 1);
                    aux.push(new_max);
                }
            }
        }
        else
        {
            if (tokens[0] == "2")
            {
                int stack_top = s.top();
                s.pop(); 
                pair<int, int> max_count = aux.top();
                int max_val = max_count.first;
                int count = max_count.second;
                
                if (stack_top == max_val)
                {
                    if (count == 1) aux.pop();
                    else
                    {
                        aux.pop();
                        count -= 1;
                        pair<int, int> new_max_count = make_pair(max_val, count);
                        aux.push(new_max_count);
                    }
                }
                
            }

            if (tokens[0] == "3")
            {
                pair<int, int> max_count = aux.top();
                int max_val = max_count.first;
                cout << max_val << endl;
            }
        }
   }
}
