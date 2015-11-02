
#include <iostream>
#include <ctime>
#include <queue>
using namespace std;

struct node
{
	int info;
	node *next;
};

class Queue
{
	private:
		node *front;
		node *rear;
	public:
		Queue();
		~Queue();
		bool isEmpty();
		void enqueue(int);
		int dequeue();
		void display();
};

void Queue::display()
{
	node *p = new node;
	p = front;
	if (front == NULL)
		cout << " nothing here " << endl;
	else
	{
		while(p!=NULL)
		{
			cout << endl << p->info;
			p = p->next;
		}
	}
}
Queue::Queue()
{
	front = NULL;
	rear = NULL;
}

Queue::~Queue()
{
	delete front;
}

void Queue::enqueue(int data)
{
	node *temp = new node();
	temp->info = data;
	temp->next = NULL;
	if (front == NULL)
		front = temp;
	else
		rear->next = temp;
	rear = temp;
}

int Queue::dequeue()
{
	node *temp = new node();
	int value;
	if (front == NULL)
		cout << " nothing here! " << endl;
	else
	{
		temp = front;
		value = temp->info;
		front = front->next;
		delete temp;
	}
	return value;
}

bool Queue::isEmpty()
{
	return (front == NULL);
}


class Graph
{
	private:
		int n;
		int **A;
	public:
		Graph(int size = 2);
		~Graph();
		bool isConnected(int, int);
		void addEdge(int u, int v);
		void BFS(int);
		void printGraph(int);
};

Graph::Graph(int size)
{
	int i, j;
	if (size < 2)	n = 2;
	else n = size;
	A = new int*[n];
	for (i = 0; i<n; ++i)
		A[i] = new int[n];
	for (i = 0; i<n; ++i)
		for (j = 0; j<n; ++j)
			A[i][j] = 0;
	
}

Graph::~Graph()
{
	for (int i = 0;i<n;++i)
		delete[] A[i];
	delete[] A;
}

bool Graph::isConnected(int u, int v)
{
	return (A[u-1][v-1] == 1);
}

void Graph::addEdge(int u, int v)
{
	A[u-1][v-1] = A[v-1][u-1] = 1;
}

void Graph::printGraph(int n)
{
	for (int i = 1; i<=n; ++i)
	{	
		for (int j = 1; j<=n; ++j)
		{
			
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void Graph::BFS(int s)
{
	Queue q;
	
	bool *explored = new bool[n+1];
	
	for (int i = 1; i<=n; ++i)
		explored[i] = false;

	q.enqueue(s);
	explored[s] = true;
	cout << "BFS starts from: " << s << endl;
	
	while (!q.isEmpty())
	{
		int v = q.dequeue();
		cout << v << " ";
		
		for (int w = 1; w <= n; ++w)
		{
			if (isConnected(v,w) and !explored[w])
			{
				q.enqueue(w);
				explored[w] = true;
			}
		}
	}
	cout << endl;
	delete[] explored;
}

int main()
{
	Graph g(7);
	g.addEdge(1,2);
        g.addEdge(1,3);
        g.addEdge(2,4);
        g.addEdge(3,4);
        g.addEdge(3,6);
        g.addEdge(5,6);
        g.addEdge(4,7);
        g.addEdge(5,7);
	g.BFS(1);
	g.BFS(2);
	g.BFS(3);
	g.BFS(4);
	g.BFS(5);
}



















