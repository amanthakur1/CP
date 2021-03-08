#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   998244353;
const int N     =   2e5+5;

int power(int x, int y)
{
    int res = 1;
    while (y>0){
        if (y&1){
            res = (res%mod)*(x%mod);
            res %= mod;
        }
        y=y>>1;
        x=(x%mod)*(x%mod);
        x%=mod;
    }
    return res%mod;
}
 
 
int modInv(int a){
    return power(a,mod-2);
}

signed main(){
    sync
    // Write code from here
    ll n; cin>>n;
    ll fib[n+5];
    fib[1]=fib[2]=1;

    for(ll i=3;i<=n;i++) fib[i]=(fib[i-1]+fib[i-2])%mod;
    ll temp=power(2,n)%mod;
    ll minv=modInv(temp) % mod;
    ll ans=fib[n]*minv;

    cout<<ans%mod<<endl;
    
    
    return 0;
}