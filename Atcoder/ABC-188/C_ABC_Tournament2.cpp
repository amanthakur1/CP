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
    vector<ll> a(pow(2,n)/2);
    vector<ll> b(pow(2,n)/2);
    for(auto &i: a) cin>>i;
    for(auto &i: b) cin>>i;
 
    ll mxa=*max_element(a.begin(),a.end()), mxaI=max_element(a.begin(),a.end()) - a.begin();
    ll mxb=*max_element(b.begin(),b.end()), mxbI=max_element(b.begin(),b.end()) - b.begin();
 
    if(mxa>mxb) cout<<mxbI+ (pow(2,n)/2 )+1<<endl;
    else        cout<<mxaI+1<<endl;
 

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