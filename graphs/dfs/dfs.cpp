#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<map>

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

void runDfs(int u, map <int, vector< vector<int> > >  &g, vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " "; 

    vector< vector<int> > adjList = g[u];
    for (int i = 0; i<adjList.size(); ++i)
        if (visited[adjList[i][0]] == false)
            runDfs(adjList[i][0], g, visited);
    
}

void dfs(map <int, vector< vector<int> > > &g, int V)
{
    vector<bool> visited(V, false);
    for (int u = 0; u<V; ++u)
        if (visited[u] == false)  runDfs(u, g, visited);
}

int main()
{
    int V = 5;
    map <int, vector< vector<int> > > g;
    addEdge(g, 0, 1, 0);
    addEdge(g, 0, 4, 0);
    addEdge(g, 1, 4, 0);
    addEdge(g, 1, 2, 0);
    addEdge(g, 3, 4, 0);
    addEdge(g, 2, 3, 0);
    
    printGraph(g);
    dfs(g, V);
    cout << endl;
}
