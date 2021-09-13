#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int>adj[N];
bool bipartiteDfs(int node, vector<int> adj[], int color[]) {
    for(auto it : adj[node]) {
        if(color[it] == -1) {
            color[it] = 1 - color[node];
            if(!bipartiteDfs(it, adj, color)) {
                return false; 
            }
        } else if(color[it] == color[node]) return false; 
    }
    return true; 
}
bool checkBipartite(vector<int> adj[], int n) {
    int color[n];
    memset(color, -1, sizeof color); 
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            color[i] = 1;
            if(!bipartiteDfs(i, adj, color)) {
                return false;
            }
        } 
    }
    return true; 
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
     

     if(checkBipartite(adj, n))
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
   

    return 0;
}
