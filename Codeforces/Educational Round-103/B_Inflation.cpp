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
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(auto &i: v) cin>>i;

    ll pre[n]={0};
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i-1];
    }

    ll ans=0;
    for(int i=1;i<n;i++){
        double curr =(double)((x*v[i])*100)/ double(pre[i]);
        // cout<<"curr ="<< 
        if(curr-(double)x > 1e-9) ans+=(v[i]*x)*100-pre[i];
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