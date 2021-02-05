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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll left=0;
    ll s=0;
    ll ans=a[0];
    ll freq=1;

    for(ll i=1;i<n;i++){
        s+=(a[i]-a[i-1])*(i-left);
        while(s>k){
            s-=(a[i]-a[left]);
            left++;
        }
        if(freq<(i-left+1)){
            ans=a[i];
            freq=i-left+1;
        }
    }

    cout<<freq<<" "<<ans;
    
    
    return 0;
}