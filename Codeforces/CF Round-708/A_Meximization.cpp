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
    // vector<int> v;
    map<int,int> mp;

    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mp[x]++;
    }
    
    vector<int> ans;
    for (auto k : mp) {
        cout << k.first << " ";
        for (int i = 0; i < k.second - 1; i++) ans.push_back(k.first);
    }

	for(auto k:ans) cout<<k<<" ";
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