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
    test(t){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];

        set<pair<ll,ll>> st;
        for(ll i=0;i<n;i++) st.insert({a[i],b[i]});

        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(cnt + (*st.rbegin()).second < (*st.rbegin()).first){
        // while(cnt + (*st.rbegin()).second < (*st.rbegin()).first){
            auto it = st.end();        
            cnt+=(*it).second;
            // it.first=cnt;
            st.erase(it);
            st.insert({cnt,cnt});
        // }
            }   
        }
        ll ans=min((*st.end()).first,accumulate(b,b+n,0LL));
        cout<<ans<<endl;



    }
    
    
    return 0;
}