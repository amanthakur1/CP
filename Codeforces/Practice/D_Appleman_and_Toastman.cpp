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
    ll n;
    cin>>n;
    vector<ll>v;
    ll total=0;
    for(int i=0;i<n;i++)
    {
            ll a; cin>>a;
            v.push_back(a);
            total+=a;
    }

    sort(v.begin(),v.end());
    ll ans=total;
    ll x=0,k=0;
    for(int i=0;i<n-1;i++)
    {
        ans+=total-x;
        x+=v[k];
        k++;
    }
    cout<<ans<<endl;
    
    
    return 0;
}