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
    test(t){
        ll n; cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll x; cin>>x; v.push_back(x);
        }
        ll q; cin>>q;
        if(find(v.begin(), v.end(),1LL) == v.end()){
            vector<ll> res;
            ll tes;
            for(ll j=0;j<n-1;j++){
                if(v[j]&1){
                    
                }
            }
        }

    }
    
    
    return 0;
}