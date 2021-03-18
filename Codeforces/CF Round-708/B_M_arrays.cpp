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

	map<int, int> mapp;

    ll ans=0;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        if(x%m) mapp[x%m]++;
        else ans=1;
    }

    for(auto k : mapp){
        auto f=mapp.find(m - k.first), remf=mapp.find(k.first);
        if(f==mapp.end()) ans+=k.second;
        else{
            ll maxfreq = max(k.second, f->second);
            ll minfreq = min(k.second, f->second);
            if(maxfreq==minfreq and maxfreq!=0) ans+=1;
            f->second=0; remf->second=0;
            ans+=maxfreq - minfreq;
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