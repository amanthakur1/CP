#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        " \n " 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int Mod = 998244353;
int fact[300005];

int n, k; 
vector<pair<int, int> > pts;
 
int mult(long long a, long long b) {
    a *= b;
    a %= Mod;
    return a;
}
 

unsigned long long power(unsigned long long x, int y, int p) { 
	unsigned long long res = 1; 
	x = x % p; // Update x if it is more than or 
	while (y > 0) { 
		if (y & 1) 
			res = (res * x) % p; 
		y = y >> 1;
		x = (x * x) % p; 
	} 
	return res; 
} 
unsigned long long modInverse(unsigned long long n, int p) { 
	return power(n, p - 2, p); 
} 
unsigned long long ncr(unsigned long long n, int r, int p) { 
    if(r == 0)
        return 1;
	return (fact[n] * modInverse(fact[r], p) % p * modInverse(fact[n - r], p) % p) % p; 
} 

int main() 
{
sync
// Write code from here
    cin>>n>>k;
    fact[0] = fact[1] = 1;
    for(int i = 1; i < 300001; i++) {
        fact[i] = mult(i, fact[i-1]);
    }

    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        pts.push_back({a,0}); // for on light 
        pts.push_back({b,1}); // for off light
    }

    sort(pts.begin(),pts.end());

    int on=0;
    ll ans=0;
    for(int i=0;i<pts.size();i++){
        if(pts[i].second==0){
            if(on>=k-1){
                ans+=ncr(on,k-1,Mod);
                ans%=Mod;
            }
            on++;
        }
        else{
            on--;
        }
    }
    cout<<ans;

return 0;
}