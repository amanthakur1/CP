#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int n;
int a[201];
int dp[201][401];

int go(int idx, int mins){
    if(idx==n) return 0;

    if(dp[idx][mins]!=-1) return dp[idx][mins];
    if(mins==2*n+1) return 1e7;

    dp[idx][mins]=min(go(idx,mins+1),go(idx+1,mins+1)+abs(a[idx]-mins));

    return dp[idx][mins];
}


int main(){
    sync
    // Write code from here
    int tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        memset(dp,-1,sizeof(dp));
        cout<<go(0,1)<<endl;
    }    
    return 0;
}