#include <bits/stdc++.h>
using namespace std;
#define MAX 100
class Graph
{
public:
    int n;
    int vertex;
    int ar[MAX][MAX];

public:
    Graph(int node, int v) : n(node), vertex(v){};
    Graph()
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                ar[i][j] = 0;
            }
        }
    }
    void add_edge(int c1, int c2, int check)
    {
        if (c1 > n || c2 > n)
        {
            cout << "node doesn't exist" << endl;
        }
        else if (check == 1)
        {
            ar[c1][c2] = 1;
            ar[c2][c1] = 1;
        }
        else
        {
            ar[c1][c2] = 1;
        }
    }
    void in_out()
    {
        cout << "\n\tvertex\t indegree\t outdegree\n";
        for (int i = 1; i < n + 1; i++)
        {
            int r = 0, c = 0;
            cout << "\t" << (i);
            for (int j = 1; j < n + 1; j++)
            {
                // ar[i][j] = 0;
                // cout<<ar[i][j]<<" ";
                c = c + ar[j][i];
                r = r + ar[i][j];
            }
            cout << "\t\t" << c << "\t\t" << r;
            cout << endl;
        }
    }

    void showadjacent()
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                // ar[i][j] = 0;
                cout << ar[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    cout << "enter number of node : ";
    int n;
    cin >> n;
    cout << "etner number of Edges: ";
    int Eadge;
    cin >> Eadge;
    Graph obj(n, Eadge);
    while (Eadge--)
    {
        int c1, c2, check;
        cout << "enter connected Vertex:";
        cin >> c1 >> c2;
        cout << "connected two both side then enter 1 else 0: ";
        cin >> check;
        obj.add_edge(c1, c2, check);
    }
    int k = 1;
    while (k)
    {
        cout << "\npress 1 for indegree & outdegree: ";
        cout << "\npress 2 for adjacent matrix: ";
        cout<<"\nelse 0 for exit: ";
        cin >> k;
        if (k == 1)
        {
            obj.in_out();
            cout << endl;
        }
        else
        {
            obj.showadjacent();
        }
    }
}
