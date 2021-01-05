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
    ll n,x; cin>>n>>x;

    queue<pair<ll,ll> > q;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        q.push({x,1});
    }
    // ll ans=0;
    while(q.size()){
        ll e=q.front().first, cnt=q.front().second; q.pop();
        ans+=e*cnt;
        if(e%x){
            break;
        }
        ll num=e/x;
        q.push({num,x*cnt});
        
    }
    while(q.size()){
        ll e=q.front().first, cnt=q.front().second; q.pop();
        ans+=e*cnt;
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