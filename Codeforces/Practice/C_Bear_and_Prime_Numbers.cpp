#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   1e7+5;

ll cnt[N],ans[N];
vector<ll> prime(N,1);

int main(){
    sync
    // Write code from here
    //sieve
    for(ll i=2;i<N;i++){
        if(prime[i]){
            for(ll j=i*i;j<N;j+=i){
                prime[j]=0;
            } 
        }
    }
    
    ll n; cin>>n;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        cnt[x]++;  //counting nums
    }
    //f(primes)
    for(ll i=2;i<N;i++){
        if(prime[i]){
            for(ll j=i;j<N;j+=i){
                ans[i]+=cnt[j];
            }
        }
    }

    //pref array
    for(ll i=1;i<N;i++){
        ans[i]+=ans[i-1];
    }

    ll m; cin>>m;
    while(m--){
        ll l,r; cin>>l>>r;
        l=min(l,(ll)(N-1));
        r=min(r,(ll)(N-1));
        cout<<ans[r]-ans[l-1]<<endl;
    }



    
    return 0;
}