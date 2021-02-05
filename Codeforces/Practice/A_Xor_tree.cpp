#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   1e5+5;

vector<ll> adj[N];
ll n;
ll in[N];
ll out[N];
vector<ll> ans;

void dfs(ll node, ll par, ll f1, ll f2){

    if(in[node]^f1!=out[node]){
        f1^=1;
        ans.push_back(node);
    }
    
    for(auto x:adj[node]){
        if(x!=par){
            dfs(x,node,f2,f1);
        }
    }
    
    

}


int main(){
    sync
    // Write code from here
    cin>>n;
    for(ll i=0;i<n-1;i++){
        ll x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++) cin>>in[i];
    for(int i=1;i<=n;i++) cin>>out[i];
    
    dfs(1,0,0,0);
    
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<endl;
    }
    
    
    return 0;
}