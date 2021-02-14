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
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);
    a[n-1] = a[n-1]>1 ? 1 : 2;
    sort(a,a+n);
    for(ll i=0;i<n;i++) cout<<a[i]<<" ";
    
    
    return 0;
}