#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>

using namespace std;
int totalPath(map <int, vector< vector<int> > > g, int n, int start, int b)
{

    vector<vector<int> > paths;
    queue<vector<int> > q; // store each path in a queue of vectors
    
    vector<int> source = {start}; // initialize with source 
    q.push(source);
    
    while(!q.empty())
    {
        vector<int> fe = q.front(); // take first path for processing
        //cout << "front" << endl;
        //for (auto it1 = fe.begin(); it1 != fe.end(); ++it1)
            //cout << (*it1) << endl;
        vector<int>::iterator vecIt;
        q.pop(); // remove the same

        int last_elem = fe.back();

        vector< vector<int> > adjList;
        adjList = g[last_elem];

        //cout << "current soruce: " << last_elem << endl;
        for (auto it = adjList.begin(); it != adjList.end(); ++it)
        {
            int node = (*it)[0];
            //cout << "neighbor: " << node << endl;
            // void loops
            if (node == b)
            {
                vector<int> new_arr = fe;
                new_arr.push_back(node);
                paths.push_back(new_arr);
            }

            else
            {
                vecIt = find(fe.begin(), fe.end(), node);
                if (vecIt == fe.end())
                {
                    vector<int> new_arr = fe;
                    //cout << "pushing: " << node << endl;
                    new_arr.push_back(node);
                    q.push(new_arr);
                }
            }
       }
    }
    cout << paths.size() << endl;

    for (int i = 0; i < paths.size(); ++i)
    {
        cout << "path: " << endl;
        for (int j = 0; j < paths[i].size(); ++j)
            cout << paths[i][j] << " ";
        cout << endl;
    }
    return 0;
}


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

}

void printGraph(map <int, vector< vector<int> > > &g)
{
    map <int, vector< vector<int> > >::iterator it;

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
    while(ss >> buff)
     node_store.push_back(stoi(buff));

    for (int i = 0; i<node_store.size(); i = i+2)
        addEdge(g, node_store[i], node_store[i+1], 0);

    cin.clear();
    cin >> s >> d;
    int ans = totalPath(g, v, s, d);
    //printGraph(g);
}
