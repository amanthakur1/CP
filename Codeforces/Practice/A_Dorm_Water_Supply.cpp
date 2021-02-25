#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

vector<pair<ll,ll>> adj[1005];
bool vis[1005];
ll cnt,l;

void dfs(ll node){
    l=node;
    vis[node]=true;
    for( auto x: adj[node]){
        if(!vis[x.first]){
            dfs(x.first);
            cnt=min(cnt,x.second);
        }
    }
}

int main(){
    sync
    // Write code from here
    ll n,p;cin>>n>>p;

    vector<ll>in(n+1),out(n+1);
    for(ll i=0;i<p;i++){
            ll a,b,c; cin>>a>>b>>c;
            adj[a].push_back({b,c});
            in[b]++;
            out[a]++;
    }
    vector<vector<ll>> ans;

    for(ll i=1;i<=n;i++){
        if(in[i]==0 and out[i]==1){
            cnt=inf;
            dfs(i);
            ans.push_back({i,l,cnt});
        }
    }

    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    }

    
    return 0;
}