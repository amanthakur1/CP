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
    ll n,k; cin>>n>>k;
    vector<int> m(n);
    vector<int> c(n);
    for(auto &i: m) cin>>i;
    for(auto &i: c) cin>>i;
    vector<pair<double,int> > v;
    for(int i=0;i<n;i++){
        v.push_back({(double)m[i]/(double)c[i],m[i]});
    }
    sort(v.begin(), v.end());

    // for(auto k:v){
    //     cout<<k.first<<" "<<k.second<<"-----------"<<endl;
    // }
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i].second;
        ans++;
        // cout<<sum<<" Sum "<<endl;
        if(sum>=k){
            cout<<ans<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
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