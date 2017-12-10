#include<iostream>
#include<vector>
#include<list>

using namespace std;


void addEdge(vector< pair<int, int> > adjList[], int a, int b, int w)
{
  adjList[a].push_back(make_pair(b, w));
  adjList[b].push_back(make_pair(a, w));
}


void printGraph(vector< pair<int, int> > adjList[], int V)
{

  int v, w;
  
  for (int u = 0; u<V; ++u)
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

void bfs(vector <pair<int, int> > adjList[], int n, int start)
{

  bool discovered[n];
  vector<int> parents(n);
  list<int> queue;

  // initially all the nodes are undiscovered
  for (int i = 0; i<n; ++i)
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

void runDfs(vector <pair<int, int> > adjList[], int start, bool visited[])
{
  visited[start] = true;
  cout << start << " ";

  list<int>::iterator i;
  for (auto i = adjList[start].begin(); i != adjList[start].end(); ++i)
    if (!visited[i->first])
    {
      int nextNode = i->first;
      runDfs(adjList, nextNode, visited);
    }
}

void dfs(vector <pair<int, int> > adjList[], int n, int start)
{
  
  bool visited[n];
  for (int i = 0; i<n; ++i)
    visited[i] = false;


  runDfs(adjList, start, visited);

}

int main()
{

    int n = 5;
    vector< pair<int, int> > adjList[n];
    addEdge(adjList, 0, 1, 10);
    addEdge(adjList, 0, 4, 20);
    addEdge(adjList, 1, 2, 30);
    addEdge(adjList, 1, 3, 40);
    addEdge(adjList, 1, 4, 50);
    addEdge(adjList, 2, 3, 60);
    addEdge(adjList, 3, 4, 70);
    printGraph(adjList, n);
    cout << "BFS: " << endl;
    bfs(adjList, n, 1);
    cout << endl << "DFS: " << endl; 
    dfs(adjList, n, 1);
    cout << endl;
    return 0;

}
