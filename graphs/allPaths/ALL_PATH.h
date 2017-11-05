#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<stack>

using namespace std;
map<int, int> findPath(map <int, vector< vector<int> > > g, int n, int start, int b)
{
    bool discovered[n];
    vector<int> processed(n);
    map< int, int > parentsTree;

    list<int> queue;

    for (int i = 0; i<n; ++i)
        discovered[i] = false;

    discovered[start] = true;
    queue.push_back(start);

    list<int>::iterator i;

    //int new_degree, old_degree;
    //new_degree = 0;
    //old_degree = 0;
    int path_count = 0;
    while(!queue.empty())
    {
        int s = queue.front();
        cout << "processed: " << s << endl;
        cout << "neighbors: " << endl;
        //if (s == b && old_degree != new_degree) break;
        queue.pop_front();
        
        if (s == b && g[s].empty()) path_count += 1;
        for (auto it = g[s].begin(); it != g[s].end(); ++it)
        {
            int node = (*it)[0];
            cout << node << endl;
            if (node == b) path_count += 1;
            if(!discovered[node])
            {
                discovered[node] = true;
                queue.push_back(node);
                parentsTree[node] = s;
            }
        }
        //old_degree = new_degree;
        //new_degree += 1;
    }
    cout << "total path: " << path_count << endl;
    return parentsTree;
}

stack<int> shortestPath(map <int, vector< vector<int> > > g, int n, int a, int b)
{
    stack<int> path;
    map<int, int> parentsTree;  
    parentsTree = findPath(g, n, a, b);

    //map<int, int>::iterator it;
    //for (it = parentsTree.begin(); it != parentsTree.end(); ++it)
        //cout << it->first  << " parent: " << it->second << endl;

    int node;
    node = b; 

    do{
        path.push(node);
        node = parentsTree[node];
    }
    while (node != a) ;
    
    path.push(node);

    return path;
}


