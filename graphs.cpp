#include <iostream>
#include <vector>
using namespace std;
class Graph
{
    int V;
    vector<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new vector<int>[V];
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void display()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            for (int neighbor : l[i])
            {
                cout << neighbor << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.display();
    return 0;
}