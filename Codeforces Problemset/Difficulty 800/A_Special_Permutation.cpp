#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n; int a[n];
    for(int i=0;i<n-1;i++)
    { a[i] = i+2;}
    a[n-1] = 1;
     for(int i=0;i<n;i++)
    { cout<<a[i]<<" ";}
    cout<<'\n';


    
}
int main()
{
    int t;cin>>t;while(t--){solve();}
}