#include "bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define int long long
#define pb push_back
#define f first
#define s second
#define all(v) (v).begin(),(v).end()
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define dump(){ cout<<"NO"<<endl; return; }
#define ok(){ cout<<"YES"<<endl; return; }
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
const int mod = 1000000007;

void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int> a(n,0);
    for(auto &i:a) cin>>i;

    int lo=0,hi=(1.5)*1e9;
    auto good=[&](const int x){
        int tot=0;
        for(auto &i:a){
            if(tot>c) {
                tot=1e18+10;
                break;
            }
            if((i+2*x)*(i+2*x)>c) {
                tot=1e18+10;
                break;
            }
            tot+=(i+2*x)*(i+2*x);
            // if(tot>c) {
            //     tot=LONG_MAX;
            //     break;
            // }
        }
        return tot;
    };
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int x=good(mid);
        // cout<<x<<" ";
        if(x==c){
            cout<<mid<<endl;
            return ;
        }
        else if(x<c){
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<hi<<endl;
}

signed main()
{
    fastio;

    int t=1; 
    cin>>t;
    while(t--)
    solve();
    return 0;
}