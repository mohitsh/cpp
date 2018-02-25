#include<iostream>
#include<vector>
#include<list> 
using namespace std;


void addEdge(vector<vector< pair<int, int> > > &adjList, int a, int b, int w)
{
  adjList[a].push_back(make_pair(b, w));
  adjList[b].push_back(make_pair(a, w));
}


void printGraph(vector<vector< pair<int, int> > > &adjList, int V)
{

  int v, w;
  
  for (int u = 0; u<V+1; ++u)
  {
    cout << "Node " << u << " has edges: " << endl;;
    for (auto it = adjList[u].begin(); it != adjList[u].end(); it++)
    {
      v = it->first;
      w = it->second;
      cout << "Node " << v << " with weight " << w << endl;
    }
    cout << endl;
  }

}

void bfs(vector<vector <pair<int, int> > > &adjList, int n, int start)
{

  bool discovered[n];
  vector<int> parents(n);
  list<int> queue;

  // initially all the nodes are undiscovered
  for (int i = 0; i<n+1; ++i)
  {
    discovered[i] = false;
    parents[i] = -1;
  }

  // set first node as discovered
  discovered[start] = true;

  // add it for processing
  queue.push_back(start);

  while(!queue.empty())
  {
    // node being processed
    int s = queue.front();
    cout << s << " ";
    queue.pop_front();

    // mark all the adjacent nodes as visited
    for (auto it = adjList[s].begin(); it != adjList[s].end(); ++it)
    {
      if (!discovered[it->first])
      {
        discovered[it->first] = true;
        queue.push_back(it->first);
        parents.insert(parents.begin() + it->first, s);
      }
    }
  }

  for (int i = 0; i<n; ++i)
      cout << "parent of " << i << " is : " << parents[i] << endl;
   
}

int main()
{

    int n, q;
    cin >> n >> q;

    vector<vector< pair<int, int> > > adjList(n+1);
    for(int i=0; i<n-1; ++i){ 
    
        int a, b;
        cin >> a >> b;     
        addEdge(adjList, a, b, 0);

        //cout << "BFS: " << endl;
        //bfs(adjList, n, 1);
        //cout << endl << "DFS: " << endl; 
    }

    printGraph(adjList, n);
    bfs(adjList, n, 1);
    return 0;

}
