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
    test(t){
        ll n,k; cin>>n>>k;
        ll a[n*k];
        for(ll i=0;i<n*k;i++) cin>>a[i];

        ll ans=0;
        ll c=(((n+1)/2)-1)*k;
        ll cnt=c/k;
        for(ll i=c;i<n*k;i+=(n-cnt)){
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}