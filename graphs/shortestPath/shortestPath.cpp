#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<map>
#include "SHORTEST_PATH.h"

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



        edge = {a,w};
        adjList = g[b];
        found = false;
        for (it = adjList.begin(); it != adjList.end(); ++it)
            if ((*it)[0] == a) found = true;

        if (found == false)
            g[b].push_back(edge);

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
    int n = 3;
    map <int, vector< vector<int> > > g;

    addEdge(g, 0, 1, 0);
    addEdge(g, 0, 4, 0);
    addEdge(g, 0, 5, 0); 

    addEdge(g, 1, 0, 0); 
    addEdge(g, 1, 2, 0); 
    addEdge(g, 1, 5, 0); 

    addEdge(g, 2, 1, 0); 
    addEdge(g, 2, 3, 0); 
    addEdge(g, 2, 6, 0); 

    addEdge(g, 3, 2, 0); 
    addEdge(g, 3, 6, 0); 
    addEdge(g, 3, 7, 0); 

    addEdge(g, 4, 0, 0); 
    addEdge(g, 4, 5, 0); 
    addEdge(g, 4, 8, 0); 

    addEdge(g, 5, 0, 0); 
    addEdge(g, 5, 1, 0); 
    addEdge(g, 5, 4, 0); 
    addEdge(g, 5, 8, 0); 

    addEdge(g, 6, 2, 0); 
    addEdge(g, 6, 3, 0); 
    addEdge(g, 6, 11,0); 
    addEdge(g, 6, 10,0); 
    addEdge(g, 6, 9, 0); 

    addEdge(g, 7, 11,0); 
    addEdge(g, 7, 3, 0); 

    addEdge(g, 8, 4, 0); 
    addEdge(g, 8, 5, 0); 
    addEdge(g, 8, 12,0); 
    addEdge(g, 8, 13,0); 
    addEdge(g, 8, 9, 0); 

    addEdge(g, 9, 6, 0); 
    addEdge(g, 9, 8, 0); 
    addEdge(g, 9, 10,0); 

    addEdge(g, 10, 6, 0); 
    addEdge(g, 10, 9, 0); 
    addEdge(g, 10, 14,0); 

    addEdge(g, 11, 6, 0); 
    addEdge(g, 11, 7, 0); 
    addEdge(g, 11, 15,0); 

    addEdge(g, 12, 8, 0); 
    addEdge(g, 12, 13,0); 

    addEdge(g, 13, 8, 0); 
    addEdge(g, 13, 10, 0); 
    addEdge(g, 13, 12, 0); 

    addEdge(g, 14, 10, 0); 
    addEdge(g, 15, 11, 0);
    
    stack<int> path = shortestPath(g, n, 14, 0);
    while(!path.empty())
    {
        cout << path.top() << " -> ";
        path.pop();
    }
    cout << "DONE" << endl;
}
