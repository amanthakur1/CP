#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

signed main(){
    sync
    // Write code from here
    int n, x, sum=0, mx=0; cin>>n;
    for(int i=0;i<n;i++) cin>>x, sum+=x, mx = max(mx, x);
    cout<<(ll)max(ceil((double)sum/(double)(n-1)),(double) mx);

    
    return 0;
}