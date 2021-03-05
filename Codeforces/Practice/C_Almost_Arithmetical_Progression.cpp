#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

ll n, k;
ll a[4001], dp[4001][4001];

int main(){
    sync
    // Write code from here
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    ll ans=1;

    for(ll i=0;i<=n;i++){
        k=0;
        for(ll j=0;j<i;j++){
            dp[i][j]= dp[j][k] +1;
            if(a[i]==a[j]) k=j;

            ans=max(ans, dp[i][j]);
        }
    }
    
    cout<<ans;
    
    return 0;
}