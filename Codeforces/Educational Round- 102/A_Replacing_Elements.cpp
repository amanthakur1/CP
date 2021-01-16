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
    ll n,d; cin>>n>>d;
    vector<ll> v(n);

    for(auto &i: v) cin>>i;

    sort(v.begin(), v.end());
    ll mx=*max_element(v.begin(), v.end());

    if(v[0]+v[1] <= d or (mx <= d))cout<< "YES"<<endl;
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