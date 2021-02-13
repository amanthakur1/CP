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
    ll n,w;
    cin>>n>>w;
     vector< pair<ll int, pair<ll int,ll int>> > v;
    for(ll i=0;i<n;i++) {
        ll s,t,p; cin>>s>>t>>p;
        v.push_back({s,{t,p}});
    }
    
    priority_queue< pair<ll int, ll int> > q;

    sort(v.begin(), v.end());

    
    ll int tim = 0, i=0;
    while(tim<2*100000+5){
        while(!q.empty() && (q.top()).first*(-1)==tim ){
            w += (q.top()).second;
            q.pop();
        }
        while(i<n && v[i].first==tim){
            q.push({
               -v[i].second.first,
               v[i].second.second
            });
            w -= v[i].second.second;
            i++;
        }
        if(w<0){
            cout<<"No"; 
            return 0; 
        }
        if(i==n && q.empty()) break;
        tim++;
    }
    cout<<"Yes"<<endl;

    
    return 0;
}