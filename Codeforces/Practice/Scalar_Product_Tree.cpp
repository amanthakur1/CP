#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t=1;while(t--)
#define MMOD        4294967296
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   1e5+5;

vector<ll> adj[N];
ll darr[1001];
bool vis[N];
ll n,qry;


void bfs(ll node){
    vis[node] = false;
    darr[node] = -1;

    queue<ll> que; 
    que.push(node);

    while(!que.empty()){
        ll par = que.front(); que.pop();

        for(ll x: adj[par]){
            if(!vis[x]){
                vis[x] = true;
                que.push(x);
                darr[x] = par;
            }
        }
    }
}

signed main() {
    sync
    // Write Your Code From Here
    test(t){
 
        cin>>n>>qry;
        int wts[n+1];

        for(ll i=1;i<=n;i++){
            vis[i] = false;
            adj[i].clear();
            darr[i] = 0;
        }

        for(int i=1;i<=n;i++) cin>>wts[i];

        for(ll i=0;i<n-1;i++){
            ll v,u; cin>>v>>u, adj[v].push_back(u), adj[u].push_back(v);
        }
         
        bfs(1);
        ll a,b;
        ll qans;
        while(qry--){
            qans = 0;
            cin>>a>>b;
            while(true){
                qans = ( (qans % MMOD) + (((wts[a]%MMOD)*(wts[b]%MMOD))%MMOD))%MMOD;
                a = darr[a], b = darr[b];

                if(a==1 and b==1){
                    qans = ((qans%MMOD) + (((wts[a]%MMOD)*(wts[b]%MMOD))%MMOD))%MMOD;
                    break;
                }else if(a==-1 and b==-1){
                    break;
                }
            }
            cout<<qans<<endl;
        }
    
        cout<<endl;    
    }

    return 0;
}