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
    ll n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    ll dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=max(dp[i][j], dp[i-1][j-1]+2);
            }
            else{
                dp[i][j]=max({dp[i][j], dp[i-1][j]-1, dp[i][j-1]-1});
            }
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans;
    
    return 0;
}