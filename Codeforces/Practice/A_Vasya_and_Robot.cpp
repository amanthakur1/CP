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
    ll n,l,r,ql,qr;
    cin>>n>>l>>r>>ql>>qr;

    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];

    ll pref[n+1]={0};
    for(ll i=1;i<=n;i++){
        pref[i]=pref[i-1]+a[i-1];
    }   
    ll ans=inf;
    for(ll i=0;i<=n;i++){
        ll curr=pref[i]*l + (pref[n]-pref[i])*r;
        
        if(i>(n-i)) curr+=(i-(n-i)-1)*ql;
        if(i<(n-i)) curr+=((n-i)-i-1)*qr;

        ans=min(ans,curr); 
    }

    cout<<ans;
    
    return 0;
}