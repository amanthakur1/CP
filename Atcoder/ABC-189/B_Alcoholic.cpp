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
    ll n;long double k; cin>>n>>k;
    vector<pair<int,int> > v(n);
    // vector<int> v;
    for(auto &i : v) cin>>i.first>> i.second;

    ll ans=-1;
    long double amt=0;
    for(int i=0;i<n;i++){
        amt+=((double)(v[i].first * v[i].second )/100.0 );
        if(amt-k>1e-9){
            ans=i+1;break;
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