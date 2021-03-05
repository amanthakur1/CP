#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int main(){
    sync
    // Write code from here
    test(t){
        ll n,k; cin>>n>>k;
        ll tot=(n*(n-1))/2;
        if(tot-k < n-1 and k!=tot){
            cout<<"-1"<<endl;
            continue;
        }
        vector<pair<ll, ll> > adj;
        for(ll i=1;i<n;i++){
            for(ll j=i+1;j<=n;j++){
                adj.push_back({i,j});
            }
        }
        cout<<tot-k%tot<<endl;
        ll cnt=0;
        for(auto x:adj){
            cout<<x.first<<" "<<x.second<<endl;
            cnt++;
            if(cnt== tot-k%tot) break;
        }

    }
    
    
    return 0;
}