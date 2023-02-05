#include <bits/stdc++.h>
using namespace std;
class graph
{
private:
    int n;
    int g[100][100];

public:
    graph(int x)
    {
        n = x;
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                g[i][j] = 0;
            }
        }
    }
    void add_edge(int x, int y)
    {
        if (x >= n || y > n)
        {
            cout << "vertex does not exist" << endl;
        }
        if (x == y)
        {
            cout << "Same vertex" << endl;
        }
        else
        {
            g[x][y] = 1;
            g[y][x] = 1;
        }
    }
    void add_vertex()
    {
        n++;
        int i;
        for (i = 0; i < n; i++)
        {
            g[i][n - 1] = 0;
            g[n - 1][i] = 0;
        }
    }
    void remove_vertex(int x)
    {
        if (x > n)
        {
            cout << "vertex not present in this graph" << endl;
            return;
        }
        int i;
        while (x < n)
        {
            for (i = 0; i < n; i++)
            {
                g[i][x] = g[i][x + 1];
            }
            for (i = 0; i < n; i++)
            {
                g[x][i] = g[x + 1][i];
            }
            x++;
        }
        n--;
    }
    void show()
    {
        cout << "\n\n Adjacency Matrix:";
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            cout<<"\t";
            for (int j = 0; j < n; j++)
            {
                cout << " " << g[i][j];
            }
        }
        cout<<endl;
    }
};
void input_edge(graph &obj)
{
    cout << "enter number of edge: ";
    int e;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        obj.add_edge(v1, v2);
    }
}
int main()
{
    cout << "how many veretx do you want enter first: ";
    int x;
    cin >> x;
    graph obj(x);
    input_edge(obj);
    int op;
    while (1)
    {
        cout << "\t 1 for add_vertex" << endl;
        cout << "\t 2 for remove vertex" << endl;
        cout << "\t 3 for show addjacent matrix" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            obj.add_vertex();
            cout << "if you want conncet new vertex with edge\n\t press 1: ";
            int y;
            cin >> y;
            if (y == 1)
            {
                input_edge(obj);
            }
            break;
        case 2:
            cout << "enter vertex number: ";
            int x;
            cin >> x;
            obj.remove_vertex(x);
            break;
        case 3:
            obj.show();
            cout<<endl;
            break;
        }
    }
    return 0;
}
