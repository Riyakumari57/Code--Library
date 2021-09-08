#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

std::vector<int> adj[N];

bool visited[N];

int cnt =0;
void dfs(int node){
    cout<<node<<endl;
    visited[node] = true;
    cnt++;
    for(int x:adj[node]){
        if(visited[x]){
            continue;
        }
        dfs(x);
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

    dfs(1); // call dfs from any node

    if(cnt == n){
        cout<<"Connected graph";
    }
    else{
        cout<<"Not Connected graph";
    }

    return 0;
}
