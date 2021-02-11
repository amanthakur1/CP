#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

unsigned long long power(unsigned long long x, int y, int p){
	unsigned long long res = 1;
	x = x % p;
	while (y > 0){
		if (y & 1)res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}
unsigned long long modInverse(unsigned long long n,int p){return power(n, p - 2, p);}
unsigned long long nCrModPFermat(unsigned long long n,int r, int p){
	if (n < r)return 0;
	if (r == 0)return 1;
	unsigned long long fac[n + 1];
	fac[0] = 1;
	for (int i = 1; i <= n; i++) fac[i] = (fac[i - 1] * i) % p;
	return (fac[n]*modInverse(fac[r], p) % p*modInverse(fac[n - r], p) % p)% p;
}

int main(){
    sync
    // Write code from here
    ll a,b,n;
    cin>>a>>b>>n;

    vector<ll> apos;
    ll p=n,q=0;
    while(p>=0){
        ll num=a*p+b*(n-p);
        ll x=1;
        while(num){
            ll y=num%10;
            num/=10;
            if(y!=a and y!=b){
                x=0;
                break;
            }
        }
        if(x) apos.push_back(p);
        p--;
        q++;
    }
    ll ans=0;
    for(ll x:apos){
        ans+=nCrModPFermat(n, x, mod);
        ans%=mod;
    }
    
    cout<<ans;
    
    return 0;
}