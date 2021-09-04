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
// bool findd(string s){if (s.find('a') != std: :string: :npos)return true;else return false;}
// int indexofc(string str)
// { std: :size_t found =str.find('a');
// if (found!=std: :string: :npos)
// return found;
// }
void aim()
{ 
    int n;
    cin>>n;
    vector<int>v(n),b;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int maxI = std::max_element(v.begin(),v.end()) - v.begin();
    int minI = std::min_element(v.begin(),v.end()) - v.begin();
    int pos = abs(maxI - minI)-1;
    //cout<<"maxi is "<<maxI<<" "<<"mini is "<<minI<<" pos is"<<pos<<endl;
    if(pos==0)
    {
        if(maxI==0 || maxI == n-1)
        {
            cout<<2<<endl;
        }
        else if(minI==0 || minI==n-1)
        {
            cout<<2<<endl;
        }
        else
        {
            if(maxI>minI)
            {
                cout<<(n-minI)<<endl;
            }
            else
            {
                cout<<(n-maxI)<<endl;
            }
         
        }
    }
    else
    {
                int ans1 = maxI+(n-minI)+1;
                int ans2 = minI+(n-maxI)+1;
                 int ans3 = n-min(maxI,minI);
                int ans4 = max(maxI,minI)+1;
                int ans5 = n - max(maxI,minI)+minI+1;
                b.push_back(ans1);
                b.push_back(ans2);
                b.push_back(ans3);
                b.push_back(ans4);
                b.push_back(ans5);
                cout<<*min_element(b.begin(),b.end())<<endl;
         
    }
}
signed main(){
boost
 int t;cin>>t;while(t--){aim();}
//    cin.tie(NULL);
//aim();
return 0;
}