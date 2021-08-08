#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
        int index = it - v.begin();
        cout << index+1<< endl;
}
void solve()
{
    int n;;
    cin>>n;
    vector<int>v(n);
    map<int,int>m;
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    vector<int>a;
    for(auto x : m)
    {
        if(x.second==1)
        {
             a.push_back(x.first);
        }
    }
    if(a.size()==0)
    {
        cout<<"-1"<<endl;
        return;
    }
    int x = *min_element(a.begin(), a.end());
     getIndex(v, x);
}
int main()
{
    int t;
    cin>>t;
    while(t--) {solve();}
}