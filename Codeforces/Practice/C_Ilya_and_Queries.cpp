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
    
    string s;
    cin>>s;
    ll n=s.size();
    ll res[n]={0};

    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]) res[i+1]=res[i]+1;
        else res[i+1]=res[i];
    }

    ll q; cin>>q;
    while(q--){
        ll l,r; cin>>l>>r;
        cout<<res[r-1]-res[l-1]<<endl;
    }
    
    return 0;
}