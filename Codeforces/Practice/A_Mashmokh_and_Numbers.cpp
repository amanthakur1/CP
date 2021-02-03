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
    ll n,k;
    cin>>n>>k;
    
    
    if(k<n/2){
        cout<<-1;
        return 0;
    }
    if(n==1){
        if(k==0) cout<<1<<endl;
        else cout<<-1;
        return 0;
    }
    set<ll> st;
    ll p=n/2 -1;
    ll rem=(k-p);
    st.insert(rem);
    st.insert(rem*2);
    cout<<rem<<" "<<2*rem<<" ";
    ll x=1;
    while(p--){
        while(st.find(x)!=st.end() or st.find(x+1)!=st.end()) x++;
        cout<<x<<" "<<x+1<<" ";
        x+=2;
    }
    if(n%2!=0){
        while(st.find(x)!=st.end()) x++;
        cout<<x;
    }
    
    
    return 0;
}