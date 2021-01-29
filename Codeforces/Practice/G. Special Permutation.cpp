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
    if(n<4){ cout<<"-1"<<endl; return;}
    
    vector<int> ans;
    
    for(int i=n;i>0;i--){
        if(i&1) ans.push_back(i);
    }
    ans.push_back(4);
    ans.push_back(2);

    for(int i=6;i<=n;i+=2){
        ans.push_back(i);
    }

    for(auto k : ans) cout<<k<<" ";
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