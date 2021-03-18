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
    ll n,m; cin>>n>>m;

    ll a[m]={0};
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        a[x%m]++;
    }
    ll ans=0;
    if(a[0]) ans++;

    for(int i=1;i<=m/2;i++){
        ll fmini = min(a[i],a[m-i]);
        ll fmaxi = max(a[i],a[m-i]);

        if(i==m-i and a[i]) ans++;
        else if(a[i] == a[m-i] and a[i]) ans++;
        else ans+=fmaxi-fmini;
    }

    cout<<ans<<endl;
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