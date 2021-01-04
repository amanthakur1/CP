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
    ll n; cin>>n;
    ll wt[n];
    for(int i=0;i<n;i++) cin>>wt[i];

    ll indeg[n]={0};
    for(int i=0;i<n-1;i++){
        ll x,y; cin>>x>>y;
        indeg[--x]++, indeg[--y]++;
    }
    priority_queue< pair<ll, ll> > pq;
    for(int i=0;i<n;i++){
        indeg[i]--;
        if(indeg[i]) pq.push({wt[i], indeg[i]});
    }

    ll sum_wts = accumulate(wt,wt+n, 0LL);
    
    cout<<sum_wts<<" ";
    for(int i=1;i<n-1;i++){
        auto node=pq.top(); pq.pop();
        node.second--;
        sum_wts+=node.first;

        if(node.second) pq.push(node);
        cout<<sum_wts<<" ";

    }
    cout<<endl;

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