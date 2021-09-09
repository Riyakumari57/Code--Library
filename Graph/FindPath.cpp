//find the Path between two vertex using dfs


#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

std::vector<int> adj[N];

bool visited[N];


bool find_path(int curr , int destination)
{
    if(curr == destination)
    {
        return true;
    }
    visited[curr]=true;
    bool found = false;
    for(int x : adj[curr])
    {
         if(visited[x])
         {
             continue;
         }
        
        if(find_path(x,destination))
        {
            return true;
        }
    }

}


int main(){

    int n;cin>>n; // no of nodes
    int m;cin>>m; // no of edges

    for(int i = 0;i < m; i++){
        int x,y;
        cin >> x >> y;
        //considering undirected
        adj[x].push_back(y);
        adj[y].push_back(x); 
    }

    int u, v;
    cin>>u>>v;
    if(find_path(u,v))
     cout<< "\n There is a path from " << u << " to " << v;
    else
        cout<< "\n There is no path from " << u << " to " << v;

   

    return 0;
}
