#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

void solve(){
    // Write your code from here....

    ll n,k, ht=0; cin>>n>>k;
    vector<ll> a(n);
    for(auto &i:a) cin>>i;

    multiset<ll> s;
    sort(a.rbegin(), a.rend());

    for(int i=0;i<n;i++){
        ll curr=a[i];
        auto lb = s.lower_bound(curr);

        if(lb!= s.end()){
            ll x = *lb; s.erase(lb);
            if(x>curr) s.insert(x-curr);        
        }
        else{
            ht++;
            if(k>curr) s.insert(k-curr);
        }
    }

    cout<<ht<<endl;

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
