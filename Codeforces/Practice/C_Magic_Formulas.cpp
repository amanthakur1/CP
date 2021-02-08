#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int main(){
    sync
    // Write code from here
    
    ll n; cin>>n;
    ll f[n+5]={0};
    for(ll i=1;i<=n;i++) f[i]=f[i-1]^i;

    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll x; cin>>x;
        ans^=x;
        ll fac=n/i;
        if(fac&1) ans^=f[i-1];

        ll rem=n%i;
        ans^=f[rem];
    }

    cout<<ans;

    return 0;
}