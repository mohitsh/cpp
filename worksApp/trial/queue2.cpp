
#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>
#include <list>
#include <iomanip>

using namespace std;

struct AdjListNode
{
	int dest;
	struct AdjListNode *next;
};

struct AdjList
{
	struct AdjListNode *head;
};

class Graph
{
	private:
		int V;
		struct AdjList *array;

	public:
		Graph(int V)
		{
			this->V = V;
			array = new AdjList[V];
			for (int i = 0; i<V; ++i)
				array[i].head = NULL;
			
		}

		AdjListNode *newAdjListNode(int dest)
		{	
		AdjListNode *newNode = new AdjListNode;
		newNode->dest = dest;
		newNode->next = NULL;
		return newNode;
		}

		void addEdge(int src, int dest)
		{
	
			AdjListNode *newNode = newAdjListNode(dest);
			newNode->next = array[src].head;
			array[src].head = newNode;
			newNode = newAdjListNode(src);
			newNode->next =array[dest].head;
			array[dest].head = newNode;
		}

		void PrintGraph()
		{
			int v;
			for (v = 0; v < V; ++v)
			{
				AdjListNode *pCrawl = array[v].head;
				cout << "\n Adjecency list of vertex " << v << "\n head ";
				while (pCrawl)
				{
					cout << "-> " << pCrawl->dest;
					pCrawl =pCrawl->next;
				}
				cout << endl;
			}
		}
};


int search(int start_row, int start_col);
int main()
{

	Graph gh(5);
//	gh.addEdge(0,1);
//	gh.addEdge(0,4);
//	gh.addEdge(1,2);
//	gh.addEdge(1,3);
//	gh.addEdge(1,4);
//	gh.addEdge(2,3);
//	gh.addEdge(3,4);
//	gh.PrintGraph();

	int n,m;
	cout << "rows and columns: ";
	cin >> n >> m;
	//cout << n << endl;
	//cout << m << endl;

	
	vector< vector<int> > v;
	
	for (int i = 0; i<n; i++)
	{
		v.push_back(vector<int>() );
		for(int j = 0; j<m; ++j)
		{
			int num;
			cin >> num;
			v[i].push_back(num);
			//v[i].push_back(i+j);
		}
	}
	/*
	vector< std::vector<int> >::iterator row_it = v.begin();
	vector< std::vector<int> >::iterator row_end = v.end();
	
	for (; row_it != row_end; ++row_it)
	{
		vector<int>::iterator col_it = row_it->begin();
		vector<int>::iterator col_end = row_it->end();
	
		for(; col_it != col_end; ++col_it)
			cout << setw( 1 ) << *col_it;
		cout << "\n";
	}
	*/	
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
		{
			cout << v[i][j] << " ";
		
		}
		cout << "\n";
	}	


	return 0;
}



