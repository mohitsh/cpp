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
int exactlyKEdges(map <int, vector< vector<int> > > g, int n, int start, int b, int k)
{

    vector<vector<int> > paths;
    queue<vector<int> > q; // store each path in a queue of vectors
    
    vector<int> source = {start}; // initialize with source 
    q.push(source);
    
    while(!q.empty())
    {
        vector<int> fe = q.front(); // take first path for processing
        vector<int>::iterator vecIt;
        q.pop(); // remove the same

        int last_elem = fe.back();

        vector< vector<int> > adjList;
        adjList = g[last_elem];

        for (auto it = adjList.begin(); it != adjList.end(); ++it)
        {
            int node = (*it)[0];
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


    int exactly_k_edges = 0;
    int total_edges;
    for (int i = 0; i < paths.size(); ++i)
    {
        total_edges = paths[i].size() -1;
        if (total_edges == k) exactly_k_edges += 1;
    }
    
    return exactly_k_edges;
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

        // allow for multiple edges b/w nodes
        /*for (it = adjList.begin(); it != adjList.end(); ++it)
            if ((*it)[0] == b) found = true;

        if (found == false)*/
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


    int n;
    cin >> n; 
    cin.clear();
    for (int j = 0; j<n; ++j)
    {
        map <int, vector< vector<int> > > g;
        int v, s, d, k;
        cin >> v;
        cin.ignore();
        string rawInput;
        string buff;
        vector<int> node_store;

        getline(cin, rawInput);
        stringstream ss(rawInput);
        int row = 0;
        int col = 0;
        int i2 = 0; 
        int node_val;
        while(ss >> buff)
        {
            node_val = stoi(buff); 
            if (i2%v == 0)
            {
                row += 1;
                col = 0;
            } 
            col += 1;
            if (node_val == 1)
               addEdge(g, row-1, col-1, 0); 
            //node_store.push_back(stoi(buff));
            i2 += 1;
        }

       /*for (int i = 0; i<node_store.size(); ++i)
        {
            if (i%v == 0)
            { 
                row += 1;
                col = 0;
            }
            col += 1;

            if (node_store[i] == 1)
                addEdge(g, row-1, col-1, 0);
        }*/

        cin.clear();
        cin >> s >> d >> k;
        int ans = exactlyKEdges(g, v, s, d, k);
        cout << ans << endl;
    }

}
