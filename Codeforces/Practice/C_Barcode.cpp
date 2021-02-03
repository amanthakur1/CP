#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int n,m,x,y;
int bcol[1005]={0};
ll dp[1005][2][1005];

int go(int idx, int last, int width){
    if(idx>=m) return 0;
    if(dp[idx][last][width]!=-1) return dp[idx][last][width];

    ll cost=inf;
    if(width<x){
        cost=go(idx+1,last,width+1) + (last==0 ? n-bcol[idx] : bcol[idx]);
    }
    else{
        ll a=inf,b=inf;
        if(width<y){
            a=go(idx+1,last,width+1) + (last==0 ? n-bcol[idx] : bcol[idx]);
        }
        if(m-idx>=x){
            b=go(idx+1, last^1, 1) + (last^1==0 ? n-bcol[idx] : bcol[idx]);
        }
        cost=min(a,b);
    }
    return dp[idx][last][width] = cost;

}

signed main(){
    sync
    // Write code from here
    cin>>n>>m>>x>>y;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x; cin>>x;
            if(x=='#') bcol[j]++;
        }
    }
    
    cout<<min( go(0, 0, 0), go(0, 1, 0));
    
    return 0;
}