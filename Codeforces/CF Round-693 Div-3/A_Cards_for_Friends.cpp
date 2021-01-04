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
    ll a,b,n; cin>>a>>b>>n;

    ll ans=1;
    while(a%2==0){
        ans*=2;
        a/=2;
    }
    while(b%2==0){
        ans*=2;
        b/=2;
    }
    // cout<<ans<<endl;
    if(ans>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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