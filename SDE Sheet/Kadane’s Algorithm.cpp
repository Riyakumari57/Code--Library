//Largest Sum Contiguous Subarray
//kadanne's algorith
//kadanne's algorith
//Maximum Subarray sum
#include<bits/stdc++.h>
using namespace std;
void solve(int a[] , int n)
{
     int sum = 0;
       int maxx = INT_MIN;
     for(int i=0;i<n;i++)
     {
           cout<<" sum  is "<<sum<<endl;
         cout<<"maxx is "<<maxx<<endl;
           sum+=a[i];
           if(maxx<sum)
            {
             maxx = sum;
            }
           if(sum<0)
           {
               sum = 0;
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
