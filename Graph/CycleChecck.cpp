#include <bits/stdc++.h>
using namespace std;

const int N = 100000;

std::vector<int> adj[N];

bool visited[N];

int cnt = 0;
bool checkForCycle(int node, int parent)
{
    visited[node] = true;
    for (int x : adj[node])
    {
        if (!visited[x])
        {
            if (checkForCycle(x, node))
                return true;
        }
        else if (x != parent)
            return true;
    }

    return false;
}
bool isCycle(int n, vector<int> adj[])
{
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (checkForCycle(i, -1))
                return true;
        }
    }
}
    int main()
    {

        int n;
        cin >> n; // no of nodes
        int m;
        cin >> m; // no of edges

        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            //considering undirected
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool ans = isCycle(n, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        return 0;
    }
