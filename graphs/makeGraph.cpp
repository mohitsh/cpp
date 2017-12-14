#include<iostream>

using namespace std;


struct AdjListNode
{
  int dest;
  struct AdjListNode* next;
};


struct AdjList
{
  struct AdjListNode *head;
};

struct Graph
{
  int V;
  struct AdjList* array;
};

struct AdjListNode* addNewAdjNode(int dest)
{
  struct AdjListNode* newNode = new AdjListNode;
  newNode->dest = dest;
  newNode->next = NULL;

  return newNode;
};

struct Graph* createGraph(int V)
{

  struct Graph* graph = new Graph;
  graph->V = V;

  graph->array = new AdjList;

  for (int i = 0; i < V; ++i)
  {
    graph->array[i].head = NULL;
  }

  return graph;
};

void addEdge(struct Graph *graph, int src, int dest)
{

  struct AdjListNode *newNode = addNewAdjNode(dest);
  newNode->next = graph->array[src].head;
  graph->array[src].head = newNode;


  newNode = addNewAdjNode(src);
  newNode->next = graph->array[dest].head;
  graph->array[dest].head = newNode;

}


void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->V; ++v)
    {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl)
        {
            printf("-> %d", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}




int main()
{
    // create the graph given in above fugure
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    // print the adjacency list representation of the above graph
    printGraph(graph);
 
    return 0;
}
