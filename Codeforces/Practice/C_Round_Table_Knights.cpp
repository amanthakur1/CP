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

    vector<ll> fac;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(i>2) fac.push_back(i);
            if(n/i >2) fac.push_back(n/i);
        }
    }
    fac.push_back(n);

    ll ans[n];
    for(auto x: fac){
        // bool ans=true;
        for(ll i=0;i<(n/x);i++) ans[i]=0;

        for(ll i=0;i<n;i++){
            if(a[i]==0) ans[i%(n/x)]=true;
        }
        for(ll i=0;i<(n/x);i++){
            if(!ans[i]){
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";

    return 0;
}