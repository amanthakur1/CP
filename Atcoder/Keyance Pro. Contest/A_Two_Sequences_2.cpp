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
    vector<ll> a(n),b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;

    vector<ll> maxi;
    maxi.pb(a[0]*b[0]);
    for(int i=1;i<n;i++){
        a[i]=max(a[i], a[i-1]);
        maxi.pb(a[i]*b[i]);
    }
    for(int i=1;i<n;i++) maxi[i] = max(maxi[i], maxi[i-1]);

    for(auto k:maxi) cout<<k<<endl; 
    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}