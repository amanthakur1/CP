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
    ll n,ka,kb;
    cin>>n>>ka>>kb;
    ll w,b;
    cin>>w>>b;
    ll aw= min(ka,kb);
    ll bw= min(n-ka,n-kb);
    aw+=(max(ka,kb)-min(ka,kb)) /2;
    bw+=(max(n-ka,n-kb)-min(n-ka,n-kb))/2;
    if(w<=aw and b<=bw) cout<<"YES"<<endl;
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