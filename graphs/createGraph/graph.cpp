#include<iostream>

using namespace std;

struct adjlistNode{
    int dest;
    adjlistNode *next;
};


struct adjlist{
    adjlistNode *head;
};


struct Graph{
    int V;
    adjlist *array;
};


adjlistNode *new_adjlistNode(int dest){
    adjlistNode *new_node = new adjlistNode;
    new_node->dest = dest;
    new_node->next = nullptr;

    return new_node;
};

void addEdge(Graph *g, int src, int dest){

    adjlistNode *new_node = new_adjlistNode(dest);
    new_node->next = g->array[src].head;
    g->array[src].head = new_node;

    new_node = new_adjlistNode(src);
    new_node->next = g->array[dest].head;
    g->array[dest].head = new_node;

}

Graph  *createGraph(int V){
    Graph *g = new Graph;
    g->V = V;

    g->array = new adjlist;

    for (int i = 0; i<V; ++i){
        g->array[i].head = new adjlistNode;
        g->array[i].head = nullptr;
    }

    return g;
}

void printGraph(Graph *g){

    for (int i = 0; i<g->V; ++i){
        adjlistNode *head = g->array[i].head;
        cout << "adjecent edges of: " << i  << endl;
        while(head!=nullptr){
            cout << head->dest << " ";
            head = head->next;
        }
        cout << endl;
    }
}

int main(){
    int n = 5;

    Graph *g = createGraph(n);
    addEdge(g, 0, 1);
    addEdge(g, 0, 4);
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);
    addEdge(g, 2, 3);
    addEdge(g, 3, 4); 

    printGraph(g);
    return 0;
}
