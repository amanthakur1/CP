#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int maxN = 1e7 + 1;
vector<int> primeFactor(maxN, 1);

void factorize() {
    for (int i = 2; i < maxN; i++) {
        if (primeFactor[i] == 1) {
            for (int j = i; j < maxN; j += i) {
                primeFactor[j] = i;
            }
        }
    }
}
// find power of prime factors mod 2--------------- and then check for same.

void solve(){
    // Write your code from here....
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(auto &i:v) cin>>i;

    // creating (power of primes)mod 2 for all v[i]'s
    for(int i=0;i<n;i++){
        ll x=v[i];
        ll cnt=0;
        v[i]=1;
        ll fac = primeFactor[x]; 

        while(x>1){
            if(primeFactor[x] == fac){
                cnt++;
                x/=fac;
            }
            else{
                if(cnt&1) v[i]*=fac; // if curr factor has odd power , updating v[i]
                fac=primeFactor[x]; // new primefac
                cnt=0;
            }
        }
        if(cnt&1) v[i]*=fac; // still odd power
    }

    ll ans=1;
    map<ll,ll> mp; // check for the same masks
    for(int i=0;i<n;i++){
        if(mp[v[i]]){
            ans++;
            mp.clear();
        }
        mp[v[i]]++;
    }

    cout<<ans<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    factorize();

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}