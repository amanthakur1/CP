#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

set<ll> num;
void go(ll x){
    if(x>(ll)1e10+1) return;
    num.insert(x);
    go(10*x+4);
    go(10*x+7);
}

int main(){
    sync
    // Write code from here
    go(4);
    go(7);
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    l--;
    while(l <= r){
        auto it = num.upper_bound(l);
        ans+=(min((ll)*it , r) - l) **it;
        l = *it;
    }
    cout<<ans;
    
    return 0;
}