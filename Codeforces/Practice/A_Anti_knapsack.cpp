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

    vector<int> v;
    for(int i=1;i<=n;i++){
        if(i>=(k/2 + k%2) and i!=k) v.push_back(i);
    }

    cout<<v.size()<<endl;
    for(auto k:v) cout<<k<<" ";
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