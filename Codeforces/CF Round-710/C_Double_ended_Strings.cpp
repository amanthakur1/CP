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
    string a,b; cin>>a>>b;

    ll n=a.size(), m=b.size();
    ll dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    ll lcs=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]= max(dp[i][j], dp[i-1][j-1] +1);
                lcs=max(lcs, dp[i][j]);
            }
        }
    }

    cout<<n + m - 2*lcs<<endl;


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