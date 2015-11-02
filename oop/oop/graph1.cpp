
#include <iostream>

using namespace std;

class Vertex
{
	public:
	int element;
	Vertex(int x)
	{
		element = x;
	}
	int vertex_elem()
	{
		return element;
	}
};
	
class Edge
{
	public:
		int element;
		//Vertex dest;
		//Vertex origin;
		Edge(int u, int v, int x)
		{
			Vertex origin(u);
			Vertex dest(v);
			element = x;
		}
		Vertex opposite(Vertex x)
		{
			return Edge::dest;
		}
		void printEdge()
		{
			//cout << "origin: " << u << " edge: " << x << " dest: " << v;
		}
};
	
	
class Graph
{
	public:
		int x = 0;
	
};

int main()
{
	Vertex v1(1);
	Vertex v2(2);
	Vertex v3(3);
	Vertex v4(4);

	cout << v1.vertex_elem() << endl;
	cout << v2.vertex_elem() << endl;
	cout << v3.vertex_elem() << endl;
	cout << v4.vertex_elem() << endl;
	
}
