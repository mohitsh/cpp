#include<iostream>

using namespace std;


struct node{
    int data;
    node *next;
};


struct adjList{
    node *head;
};

struct Graph{
    int V;
    adjList *arr;
};

node *newNode(int data){
    node *new_node = new node;
    new_node->data = data;
    new_node->next = nullptr;
    return new_node;
}

Graph *createGraph(int V){
    Graph *g = new Graph;
    g->V = V;
    g->arr = new adjList;

    for (int i = 0; i<V; ++i){
        g->arr[i].head = new node;
        g->arr[i].head = nullptr;
    }

    return g;
}


void addEdge(Graph *g, int src, int dest){
    node *new_node = newNode(dest);
    new_node->next = g->arr[src].head; 
    g->arr[src].head = new_node;

    new_node = newNode(src);
    new_node->next = g->arr[dest].head;
    g->arr[dest].head = new_node;
     
}

void printGraph(Graph *g){
    int n = g->V;
    for (int i = 0; i<n; ++i){
        node *head = g->arr[i].head;
        cout << "adjcency list for vertex: " << i << endl;
        while(head != nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
}



class Queue{
    public:
        Queue();
        void push(int);
        void pop();
        int isEmpty();
        int front();

    private:
        static const int MAXLEN = 1000;
        int arr[MAXLEN];
        int fptr;
        int bptr;
};

Queue::Queue(){
   fptr = 0;
   bptr = -1; 
}

void Queue::push(int elem){
    bptr += 1;
    arr[bptr] = elem;
}

void Queue::pop(){
    fptr += 1;
}

int Queue::isEmpty(){
    return (fptr > bptr);
}

int Queue::front(){
    return arr[fptr];
}


void bfs2(Graph *g, int start){
    int n = g->V;
    int disc[n];
    Queue q;

    for (int i = 0; i<n; ++i)
        disc[i] = false;

    q.push(start);
    disc[start] = true;

    while(!q.isEmpty()){
        int s = q.front();
        q.pop();
        
        cout << "processing: " << s << endl;
        node *ptr = g->arr[s].head;
        while(ptr != nullptr){
            if(!disc[ptr->data]){
                disc[ptr->data] = true;
                q.push(ptr->data);
                cout << "reaching: " << ptr->data << endl;
            }
            ptr = ptr->next;
        }
    }
}



void bfs(Graph *g, int start){
    int n = g->V;
    bool disc[n]; // store visited nodes
    Queue q;      // node to be processed


    for (int i = 0; i<n; ++i) // initially no node is visited
        disc[i] = false;     

    disc[start] = true; // mark start as visited
    q.push(start);      // start traversing from start

    while(!q.isEmpty()){
        int s = q.front();
        q.pop();
        cout << "processing: " << s << endl; 
        node *ptr = g->arr[s].head;
        while(ptr != nullptr){
            if (!disc[ptr->data]){
                disc[ptr->data] = true;
                q.push(ptr->data);
                cout << "reaching: " << ptr->data << endl;
            }
            ptr = ptr->next;
        }
    }
}

void rundfs(Graph *g, int disc[], int i){
    disc[i] = true;
    cout << "processing: " << i << endl;

    node *ptr = g->arr[i].head;
    while(ptr!=nullptr){
        if (!disc[ptr->data]){
            rundfs(g, disc, ptr->data);
        }
        ptr = ptr->next;
    }
}

void dfs(Graph *g, int start){
    int n = g->V;

    int disc[n];
    for (int i = 0; i<n; ++i)
        disc[i] = false;

    rundfs(g, disc, 10);
}



int main(){
    int V = 10;
    Graph *g = createGraph(V);
    cout << g->V << endl;
    addEdge(g, 0, 1); 
    addEdge(g, 0, 2);
    addEdge(g, 0, 3);

    addEdge(g, 3, 4);
    addEdge(g, 3, 5);
    addEdge(g, 3, 6);

    addEdge(g, 6, 7);
    addEdge(g, 6, 8);

    addEdge(g, 7, 10);
    addEdge(g, 1, 9);

    cout << "RUNNING BFS" << endl;
    bfs2(g, 0);
    cout << "RUNNING DFS" << endl;
    dfs(g, 0);
    return 0;
}

