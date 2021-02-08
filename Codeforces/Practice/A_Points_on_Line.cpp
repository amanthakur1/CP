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
    ll n,k; cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];

    ll ans=0;
    ll l=0;
    
    for(ll i=2;i<n;i++){
        while((a[i]-a[l])>k){
            l++;
        }
        ll num=i-l-1;
        ans+=(num*(num+1))/2;
    }

    cout<<ans;
    
    return 0;
}