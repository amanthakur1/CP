#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

ll power(ll x,ll y,ll p){
    ll res = 1;
    x = x % p; 
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
ll modInverse(ll n,ll p){
    return power(n, p - 2, p);
}
 
ll nCr(ll n,ll r,ll p){
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p; 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
 

void solve(){
    // Write your code from here....
    ll n,k; cin>>n>>k;

    vector<int> v(1005,0);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v[x]++;
    }
    
    ll ans=0;
    for(int i=1001;i>=0;i--){
        if(k==0) continue;

        if(v[i]-k>=0){
            ans+=nCr(v[i],k,mod)%mod;
            ans%=mod;
            k=0;
        }
        // else if(k==0 and v[i]){
        //     ans*=v[i];
        //     ans%=mod;
        // }
        else if(v[i]) k-=v[i];
    }

    if(ans) cout<<ans<<endl;
    else cout<<1<<endl;
    // cout<<ans<<endl;
    

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