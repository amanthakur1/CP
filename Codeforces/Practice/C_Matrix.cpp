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
    ll a;
    string s;
    cin>>a>>s;
    ll n=s.size();

    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll x=0;
        for(ll j=i;j<n;j++){
            x+=(s[j]-'0');
            mp[x]++;
        }
    }
    
    if(a==0) cout<< mp[0]*(n*(n+1) - mp[0]);
    else{
        ll ans=0;
        for(ll i=1;i*i<=a;i++){
            if(a%i==0){
                if(i!=a/i) ans+=mp[i]*mp[a/i]*2;
                else ans+=mp[i]*mp[a/i];
            }
        }
        cout<<ans<<endl;
    }

    
    return 0;
}