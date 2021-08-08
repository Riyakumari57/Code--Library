#include<bits/stdc++.h>
using namespace std;

 void foo()
 {
     int n;
            cin>>n;
         int total=0;
     for(int i=1;i<=9;i++)
     {
         int sum=0;
         for(int j=1;j<=4;j++)
         {
             sum= sum*10+i;
            //  cout<<" sum is "<<sum<<endl;
             total+=j;
            //  cout<<" total is "<<total<<endl;
             if(sum==n)
             {
                 cout<<total<<endl;
                 return;
             }
         }
     }

      }
 
 int main()

 {
      int t;
      cin>>t;

      while(t--)
      {
          foo();
      }
     return 0;
 }