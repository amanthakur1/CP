#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int main(){
    sync
    // Write code from here
    ll m; cin>>m;
    ll am[m]; for(ll i=0;i<m;i++) cin>>am[i];
    ll n; cin>>n;
    ll an[n]; for(ll i=0;i<n;i++) cin>>an[i];

    ll ans=0;
    sort(am,am+m);
    ll k=am[0];
    sort(an,an+n);
    ll c=0;
    for(ll i=n-1;i>=0;){
        c++;
        if(c==k+1){
            c=0;
            i-=2;
        }
        else{
            ans+=an[i];
            i--;
        }
    }
    
    cout<<ans;
    
    return 0;
}
