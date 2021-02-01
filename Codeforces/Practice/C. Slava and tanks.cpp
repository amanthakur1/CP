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
    ll n;cin>>n;

    vector<ll> ans;
    for(int i=1;i<=n;i++) if(i%2==0) ans.push_back(i);
    for(int i=1;i<=n;i++) if(i%2!=0) ans.push_back(i);
    for(int i=1;i<=n;i++) if(i%2==0) ans.push_back(i);

    cout<<ans.size()<<endl;
    for(auto k:ans) cout<<k<<" ";

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