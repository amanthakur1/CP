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
    ll n,m; cin>>n>>m;
    char arr[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) cin>>arr[i][j];
    }
    
    ll ans=1;
    for(ll j=0;j<m;j++){
        set<char> s;
        for(ll i=0;i<n;i++){
            s.insert(arr[i][j]);
        }
        ans=(ans*s.size())%mod;
    }

    cout<<ans<<endl;
    
    return 0;
}