
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
	int data;
	node *next;
};

/* queue of std library returns void when popped 
.We need that popped. So Queue class is defined accordingly
*/

/* Queue class starts */
class Queue
{
        private:
                node *front;
                node *rear;
        public:
                Queue();
                ~Queue();
                void push(int);
                int pop();
                bool isEmpty();
};
Queue::Queue()
{
        front = NULL;
        rear = NULL;
}

Queue::~Queue()
{
        delete front;
}

void Queue::push(int x)
{
        node *temp = new node();
        temp->data = x;
        temp->next = NULL;
        if (front == NULL)
                front = temp;
        else
                rear->next = temp;
        rear = temp;
}

int Queue::pop()
{
        node *temp = new node();
        int value;
        if (front == NULL)
                cout << " nothing here! " << endl;
        else
        {
                temp = front;
                value = temp->data;
                front = front->next;
                delete temp;
        }
        return value;
}

bool Queue::isEmpty()
{
        return (front == NULL);
}


/* Queue class ends */

/* Graph starts */
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
		vector<int> BFS(int);
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
	for (int i = 0; i<n; ++i)
	{	
		for (int j = 0; j<n; ++j)
		{
			
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

/* BFS starts */
/*  using BFS to find shortest path b/w vertices */

vector<int> Graph::BFS(int s)
{
	Queue q;
	
	bool *explored = new bool[n+1];
	
	for (int i = 1; i<=n; ++i)
		explored[i] = false;

	q.push(s);
	explored[s] = true;
	vector<int> v1;

	v1.push_back(s);
	while (!q.isEmpty())
	{
		int v = q.pop();
		v1.push_back(v);

		for (int w = 1; w <= n; ++w)
		{
			if (isConnected(v,w) and !explored[w])
			{
				q.push(w);
				explored[w] = true;
			}
		}
	}

	delete[] explored;
	return v1;
}

/* BFS ends */
/* Graph ends */
int main()

{
        int n,m;
        cin >> n >> m;
	Graph g(n);
        for (int i = 0; i<n-1; ++i)
        {
                        int node1, node2;
                        cin >> node1 >> node2;
			g.addEdge(node1,node2);
        }

	/* carn vector will hold address of cities (city numbers) where
		festival is taking place	
	*/
	vector<int> carn;
	/* city one is where festival starts */
	carn.push_back(1);
	for (int ind = 0; ind<m; ++ind)
	{
		int code, city;
		cin >> code >> city;

		/*
			if code is 2 shortest distance will be calculated
		*/	
		if (code == 2)
		{
			vector<int> ans;
			/* vector ans contains result of BFS call */
			ans  = g.BFS(city);
			vector<int>::iterator it;

			vector<int>::iterator it1;
			vector<int> dude;
			/* for loop matches city address with BFS call 
				that will give us the distance
			*/
			for (it1 = carn.begin(); it1 != carn.end(); ++it1)
			{
				// count keeps track of distance b/w cities i.e. 1 
				int count = 0;
				for (it = (ans.begin()+1); it != ans.end(); ++it)
				{
					if (*it1 == *it)
					{
						dude.push_back(count);
					}
					++count;
				}
			}
			// output the nearest city where festival is happening.
			cout << *std::min_element(std::begin(dude), std::end(dude));
			cout << endl;
		}
		/* if code is 1 mark one more city as festival city */
		if (code == 1)
		{
			carn.push_back(city);
		}
	}
}



















