//dfs
#include <bits/stdc++.h>
using namespace std;
// #define n 5
#define COL 5

void DFS(int adj[][COL], int i, int j, int n)
{
    //Base condition
    //if i less than 0 or j less than 0 or i greater than ROW-1 or j greater than COL-  or if M[i][j] != 1 then we will simply return
    if (i < 0 || j < 0 || i > (n - 1) || j > (COL - 1) || adj[i][j] != 1)
    {
        return;
    }

    if (adj[i][j] == 1)
    {
       adj[i][j] = 0;
       DFS(adj, i + 1, j, n);     //right side traversal
                DFS(adj, i - 1, j, n);     //left side traversal
                DFS(adj, i, j + 1, n);     //upward side traversal
                DFS(adj, i, j - 1, n);     //downward side traversal
                DFS(adj, i + 1, j + 1, n); //upward-right side traversal
                DFS(adj, i - 1, j - 1, n); //downward-left side traversal
                DFS(adj, i + 1, j - 1, n); //downward-right side traversal
                DFS(adj, i - 1, j + 1, n); //upward-left side traversal
    }
}

// void DFS()
int countIslands(int adj[][COL], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (adj[i][j] == 1)
            {
                adj[i][j] = 0;
                cnt++;
                DFS(adj, i + 1, j, n);     //right side traversal
                DFS(adj, i - 1, j, n);     //left side traversal
                DFS(adj, i, j + 1, n);     //upward side traversal
                DFS(adj, i, j - 1, n);     //downward side traversal
                DFS(adj, i + 1, j + 1, n); //upward-right side traversal
                DFS(adj, i - 1, j - 1, n); //downward-left side traversal
                DFS(adj, i + 1, j - 1, n); //downward-right side traversal
                DFS(adj, i - 1, j + 1, n); //upward-left side traversal
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int adj[n][COL];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> adj[i][j];
        }
    }
    cout << "Nuadjber of islands is: " << countIslands(adj, n);
    return 0;
}
