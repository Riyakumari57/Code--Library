#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
#define int             long long int
#define ld              long double
#define ll              long long
#define INF             1000000000000000000
#define pb              push_back
#define mp              make_pair
#define all(x)          x.begin(),x.end()
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define sz(x)           (int)((x).size())
#define f1              first
#define s2              second
#define pii             pair<int,int>
#define bigprime        1000000007
#define MOD             1000000007
#define gcd(a,b)        __gcd((a),(b))
#define lcm(a,b)        (a/gcd(a,b))*b
#define scanvec(a,n)      rep(i,0,n){cin>>a[i];}
#define printvec(a,n)     rep(i,0,n){cout<<a[i]<<endl;}
#define boost            ios_base::sync_with_stdio(false);cin.tie(NULL);
//typedef tree<int, null_type, less<int>,rb_tree_tag,tree_order_statistics_node_update>PBDS;
//typedef tree<pair<int,int>, null_type, less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>PBDS;
/***************************************************/     
//bool isPrime(int N){for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}  
//bool isvowel(char x){ return(x=='a' || x== 'e' ||x=='i' || x== 'o' || x=='u' );}
//int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}         
//int mod(int x){return (x%MOD + MOD)%MOD;}                                                                                                        
//int modmul(int a, int b) {return ((a%MOD) * (b%MOD)) % MOD;}                                                                                     
//int modadd(int a, int b){return mod(mod(a) + mod(b));}                                                                                            
//int modsub(int a, int b){return((a%MOD) - (b%MOD) + MOD)%MOD;}
//vector<int> sieve(int n) {int*a = new int[n + 1](); vector<int> v; for (int i = 2; i <= n; i++)if (a[i] == 0) {v.pb(i); for (int j = 2 * i; j <= n; j += i)a[j] = 1;} return v;}
//int ceilval(int a,int b){return ((a/b) + ((a%b)!=0));}
//bool cmp(const pair<int,int> &a,const pair<int,int> &b){return a.f1>b.f1;}
//countsetbits(int n){return __builtin_popcount(n);}
/***************************************************/
void aim()
{ 
    int n,k=1,m=2;
    cin>>n;
    int l=n*n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<-1<<endl;
        return;
    }
    int a[n][n];
    memset(a, 0, sizeof a); 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(k<=l)
            {
                 a[i][j]=k;
                 k+=2;
            }
           else
           {
                a[i][j]=m;
                 m+=2;
           }
        }
    }

    
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
signed main(){
boost
 int t;cin>>t;while(t--){aim();}
//    cin.tie(NULL);
//aim();
return 0;
}