#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

ll go(ll rem, vector<ll> &fac){
    if(rem<=0){
        return accumulate(fac.begin(), fac.end(), 0LL);
    }
    ll n=fac.size();
    ll ans=inf;
    for(ll i=0;i<n;i++){
        vector<ll> nfac=fac;

        ll x=nfac[i];
        swap(nfac[i], nfac[n-1]);
        nfac.pop_back();

        for(ll j=0;j<n-1;j++){
            nfac[j] *=x;
            ans=min(ans, go(rem-1, nfac));
            nfac[j] /=x;
        }
    }
    return ans;
}

int main(){
    sync
    // Write code from here
    test(t){
        ll k,x;
        cin>>k>>x;
        vector<ll> fac;
        for(ll i=2;i*i<=x;i++){
            if(x%i==0){
                ll p=1;
                while(x%i==0){
                    x/=i;
                    p*=i;
                }
                fac.push_back(p);
            }
        }
        if(x>1) fac.push_back(x);
        ll fs=fac.size();
        if(k>=fs){
            ll sm=accumulate(fac.begin(), fac.end(), 0ll);
            cout<<sm + (k-fs)<<endl;
            continue;
        }
        // if k< fs
        sort(fac.begin(), fac.end());
        ll rem=fs-k;
        cout<<go(rem,fac)<<endl;
        

    }
    
    
    
    return 0;
}