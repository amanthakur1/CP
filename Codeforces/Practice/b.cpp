#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   10000 + 5;

ll w[N]={0};
vector<ll> adj[N];
bool vis[N];
ll amt=0;
vector<ll> c;

void dfs(int node){
    amt+=w[node];
    vis[node]=1;
    c.push_back(node);

    for(auto k:adj[node]){
        if(!vis[k]) dfs(k);
    }

}

void solve(){
    // Write your code from here....
    ll n; cin>>n;
    for(int i=0;i<N;i++) w[i]=0,adj[i].clear(),vis[i]=0;

    for(int i=1;i<=n;i++) cin>>w[i];
    ll m; cin>>m;
    for(int i=0;i<m;i++){
        ll x,y; cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<int> ans;

    ll fin=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            amt=0;
            c.clear();
            dfs(i);
            if(amt>fin or (amt==fin and c.size()<ans.size())){
                fin=amt;
                ans.clear();
                for(auto k:c) ans.pb(k);
            }
        }
    }
    
    sort(ans.begin(), ans.end());


    for(auto k: ans) cout<<k<<" ";
    cout<<endl;

    return;
}


int main(){
    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}