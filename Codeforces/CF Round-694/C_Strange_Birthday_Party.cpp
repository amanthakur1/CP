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
    ll n,m; cin>>n>>m;
    vector<int> per(n), cost(m);
    for(auto &i : per) cin>>i;
    for(auto &i : cost) cin>>i;

    sort(per.rbegin(),per.rend());
    ll k=0,ans=0;
    for(int i=0;i<n;i++){
        if(k>m){
            ans+=cost[per[i]-1];
            continue;
        }
        int f=per[i];
        if(k<=(f-1) and cost[k]<cost[f-1]){
            ans+=cost[k++];
        }
        else{
            ans+=cost[f-1];
        }
    }

    cout<<ans<<endl;
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