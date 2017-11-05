#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<map>
#include "ALL_PATH.h"

using namespace std;
void addEdge(map <int, vector< vector<int> > > &g, int a, int b, int w)
{

        vector< vector<int> > adjList;
        vector< vector<int> >::iterator it;
        vector<int> edge;
        bool found;

        edge = {b,w};
        adjList = g[a];
        found = false;

        for (it = adjList.begin(); it != adjList.end(); ++it)
            if ((*it)[0] == b) found = true;

        if (found == false)
            g[a].push_back(edge);



        /*
        edge = {a,w};
        adjList = g[b];
        found = false;
        for (it = adjList.begin(); it != adjList.end(); ++it)
            if ((*it)[0] == a) found = true;

        if (found == false)
            g[b].push_back(edge);
        */

}

void printGraph(map <int, vector< vector<int> > > &g)
{
    map <int, vector< vector<int> > >::iterator it;
    cout << "count : " << g.size() << endl;

    for(it = g.begin(); it != g.end(); ++it)
    {
        int origin = it->first;
        vector< vector<int> > edges = it->second;
        vector< vector<int> >::iterator i;

        cout << "ORIGIN: " << origin << endl;
        for (i = edges.begin(); i != edges.end(); ++i)
            cout << " dest: " <<  (*i)[0] <<  " weight: " << (*i)[1] << endl;
        
        cout << endl;
        
    }
}


int main()
{
    map <int, vector< vector<int> > > g;

    int v, e, s, d;
    cin >> v >> e;
    cin.ignore();
    string rawInput;
    string buff;
    vector<int> node_store;

    getline(cin, rawInput);
    stringstream ss(rawInput);
    vector<string> tokens;
    while(ss >> buff)
     node_store.push_back(stoi(buff));



    for (int i = 0; i<node_store.size(); i = i+2)
    {
        cout << node_store[i] << " " << node_store[i+1] << endl;
        addEdge(g, node_store[i], node_store[i+1], 0);
    }

    printGraph(g);
    cin.ignore();

    cin >> s >> d;


    findPath(g, v, s, d);
}
