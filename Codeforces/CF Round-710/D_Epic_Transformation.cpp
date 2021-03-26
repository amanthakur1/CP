#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

void solve(){
    // Write your code from here....
    ll n; cin>>n;
    map<ll,ll> mp;

    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mp[x]++;
    }

    ll mx=0;
    for(auto k:mp) mx=max(mx, k.second);
    
    if(n-mx <= mx) cout<<mx-(n-mx)<<endl;
    else cout<< (n&1 ? 1 : 0 )<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}