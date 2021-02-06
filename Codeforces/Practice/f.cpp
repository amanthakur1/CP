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
    vector<pair<ll,ll> > a,d;

    int n; cin>>n;
    set<int> plat;
    for(int i=1;i<=n;i++) plat.insert(i);

    for(int i=0;i<n;i++){
        ll num,x,y;
        cin>>num>>x>>y;
        a.push_back({x,num});
        d.push_back({x+y,num});
    }

    sort(a.begin(), a.end());
    sort(d.begin(), d.end());
    map<ll , ll> mp;
    // train, plat;
    map<ll,ll> pf;
    // plat,  freq
    ll i=1,j=0;

    pf[1]++;
    mp[a[0].second]=1;
    plat.erase(1);
    while(i<n and j<n){

        if(a[i].first < d[j].first){ // addition of plat
            ll curr = *(plat.begin());
            pf[curr]++;
            mp[a[i].second]=curr;
            plat.erase(curr);
            i++;
        }
        else{                         // deletion of plat
            ll curr = mp[d[j].second];
            plat.insert(curr);
            j++;
        }
    }

    // plat for fth-train
    ll f; cin>>f;
    cout<<mp[f]<<endl;

    // busy plat-------------------
    ll busy_f=0;
    for(auto k: pf){
        busy_f = max(busy_f, k.second);
    }
    vector<int> busy;
    for(auto k:pf){
        if(k.second== busy_f) busy.pb(k.first);
    }
    
    sort(busy.begin(), busy.end());

    for(auto k:busy) cout<<k<<" ";
    cout<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}