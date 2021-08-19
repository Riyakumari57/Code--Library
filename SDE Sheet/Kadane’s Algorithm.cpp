//Largest Sum Contiguous Subarray
//kadanne's algorith
#include<bits/stdc++.h>
using namespace std;
void solve(int a[] , int n)
{
     int sum = a[0];
     int maxx = INT_MIN;
     for(int i=1;i<n;i++)
     {
           if(sum+a[i]<0)
           {
               sum = 0;
           }
           else
           {
               sum+=a[i];
                 maxx = max(sum,maxx);
           }
     }
     cout<<maxx<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
          cin>>a[i];
    }
    solve(a,n);
}
