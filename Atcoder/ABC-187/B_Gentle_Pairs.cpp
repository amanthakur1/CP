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
    pair<int, int> p[n];
    for(ll i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double s= (p[j].second - p[i].second)/(double)(p[j].first - p[i].first);
            if(s>=-1 *(1.0) and s<=(1.0)) ans++;
        }
    }
    cout<<ans<<endl;


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