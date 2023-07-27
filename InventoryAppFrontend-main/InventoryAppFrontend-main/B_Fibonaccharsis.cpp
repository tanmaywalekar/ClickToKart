#include <bits/stdc++.h>
using namespace std;
#define int long long
using db = long double; // or double, if TL is tight
#define f first
//#define s second
#define tcT template <class T
#define tcTU tcT, class U
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vb = V<bool>;
using vl = V<int>;
using vd = V<db>;
using vs = V<string>;
#define mod 1000000007
int m=1000000000+7;
// vectors
// oops size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound


// loops
//#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define FOR(i, a) for (int i = 0; i < (a); ++i)
void fn(int n,int k,int &ans)
{
    vi fb(80,1);
    for(int i=2;i<36;i++){
        fb[i]=fb[i-1]+fb[i-2];
    }
    int fst=fb[k-3];
    int sec=fb[k-2];
    for(int i=0;i<=n;i++){
        if(i>=(n-sec*i)/fst && (n-sec*i)%fst==0&&n-sec*i>=0){
            ans++;
        }
    }
}

int32_t main()
{

   
    
          
    int t;
    cin>>t;

     while(t--)
    {
     int n,k;
    cin>>n>>k;
    if(k-2>35){
        cout<<"0"<<endl;
        continue;
    }
    int ans=0;
    fn(n,k,ans);
    cout<<ans<<endl;

          
            
      
    }
    
        
            
        
        

    
return 0;
}


