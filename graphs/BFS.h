#include<iostream>
#include<vector>
#include<list>
#include<map>

using namespace std;
void bfs(map <int, vector< vector<int> > > g, int n, int start)
{
    bool discovered[n];
    vector<int> processed(n);
    list<int> queue;

    for (int i = 0; i<n; ++i)
        discovered[i] = false;

    discovered[start] = true;
    queue.push_back(start);

    list<int>::iterator i;

    while(!queue.empty())
    {
        int s = queue.front();
        cout << "processed: " << s << endl;
        queue.pop_front();
        
        for (auto it = g[s].begin(); it != g[s].end(); ++it)
        {
            int node = (*it)[0];
            if(!discovered[node])
            {
                discovered[node] = true;
                queue.push_back(node);
            }
        }
    }
}
