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
    for(auto &i: a) cin>>i;
    for(auto &i: b) cin>>i;

    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=a[i]*b[i];
    }
    cout<<( ans==0 ? "Yes" : "No") <<endl;



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