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
    ll x,y; cin>>x>>y;
    ll u=0,d=0,r=0,l=0;
    string s; cin>>s;
    for(auto k:s){
        if(k=='U') u++;
        if(k=='D') d--;
        if(k=='R') r++;
        if(k=='L') l--;
    }

    if(x<=r and x>=l and y<=u and y>=d) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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