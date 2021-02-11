#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;


ll int n,k,answer;
ll int mat[10][10];
bool vis[10];

void go(int node, int depth, int tim){
    if(depth==n){
        if(tim+mat[node][1]==k) answer++;
        return;
    }
    vis[node] = true;
    for(int i=1;i<=n;i++){
        if(!vis[i]) go(i, depth+1, tim+mat[node][i]);
    }
    vis[node] = false;
}
int main(){
    sync
    // Write code from here
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mat[i][j];
        }
    }
    go(1,1,0);
    cout<<answer;
    
    return 0;
}