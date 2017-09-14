#include<algorithm>
#include<vector>
#include "stack.h"

int main()
{
	Stack s;

	vector<string> expr;
	vector<string> openingBraces;
	vector<string> closingBraces;

	expr = {"[","(",")","[","]","{","(",")","(",")"};	
	openingBraces = {"[", "{", "("};	
	closingBraces = {"]", "}", ")"};

	vector<string>::iterator itr;
	for(itr = expr.begin(); itr = expr.end(); ++itr)
	{
		auto findOpening = find(openingBraces.begin(), openingBraces.end(), *itr);
		if (findOpening != openingBraces.end()) // opening braces found
			s.push_back(*itr);

		auto findClosing = find(closingBraces.begin(), closingBraces.end(), *itr);	
		if (findClosing != closingBraces.end()) // closing braces found
		{
			if (s.isEmpty())
			{
				cout << "UNMATCHED!" << endl;
				break;
			}

			else
			{
				string elem = s.pop();
				auto posO = find(openingBraces.begin(), openingBraces.end(), *itr) - openingBraces.begin();
				if (elem != closingBraces[posO])
				{
					cout << "UNMATCHED!" << endl;	
					break;
				}
			}

		}
	}
}
