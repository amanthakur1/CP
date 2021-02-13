#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

ll n,m;
char grid[2005][2005];

int main(){
    sync
    // Write code from here
    cin>>n>>m;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) cin>>grid[i][j];
    }

    ll dp[n+1][m+1]={0};
        
    
    dp[n][m]= 0 ? grid[n-1][m-1]=='#':1;
    
    //last row
    for(int i=m-1;i>=1;i--){
        if(grid[n-1][i-1]=='#' or dp[n][i+1]==0)
            dp[n][i]=0;
        else
            dp[n][i]=1;
    }
    //last column
    for(int i=n-1;i>=1;i--){
        if(grid[i-1][m-1]=='#' or dp[i+1][m]==0)
            dp[i][m]=0;
        else
            dp[i][m]=1;
    }
    
    for(int i=n-1;i>=1;i--){
        for(int j=m-1;j>=1;j--){
            if(grid[i-1][j-1]=='#') dp[i][j]=0;
            else 
                dp[i][j]=dp[i+1][j]+dp[i][j+1] + dp[i+1][j+1];
                
        }
    }
    
    cout<<dp[1][1];
    
    return 0;
}