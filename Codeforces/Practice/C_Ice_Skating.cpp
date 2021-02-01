#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

ll n;
bool vis[111];
pair<ll,ll> adj[111];

void dfs(ll node){

    vis[node]=true;
    for(ll i=0;i<n;i++){
        if(!vis[i] and (adj[node].first==adj[i].first or adj[node].second==adj[i].second)){
            dfs(i);
        }
    }
    
}

int main(){
    sync
    // Write code from here
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>adj[i].first>>adj[i].second;
    }
    
    ll cc=0;
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            cc++;
            dfs(i);
        }
    }
    cout<<cc-1;
    
    return 0;
}