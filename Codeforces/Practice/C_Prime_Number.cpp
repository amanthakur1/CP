#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int power(int base, int power){
    int res = 1;
    while(power){
        if(power&1){
            res *= base %mod;
            power--;
        }else{
            base *= base %mod;
            power/=2;
        }
    }
    
    return res;
}


signed main(){
    sync
    // Write code from here
    ll n,x; cin>>n>>x;
    ll deno=1;
    ll a[n];
    
    for(ll i=0;i<n;i++){ 
        cin>>a[i];
        deno=(deno*power(x,a[i]))%mod;
    }
    ll num=0;
    for(ll i=0;i<n;i++){
        num=(num+ deno/a[i]);
    }
    ll ans=__gcd(num,deno);
    cout<<ans<<endl;
    
    
    return 0;
}