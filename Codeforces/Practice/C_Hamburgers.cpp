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
    string s; cin>>s;
    ll nb,ns,nc; cin>>nb>>ns>>nc;
    ll pb,ps,pc; cin>>pb>>ps>>pc;
    ll rub; cin>>rub;
    ll rb=0,rs=0,rc=0;
    for(auto i:s){
        if(i=='B')rb++;
        if(i=='S')rs++;
        if(i=='C')rc++; 
    }
    ll l=0,r=1e13;
    
    while(l<r){
        ll mid=(l+r)/2 +1;
        ll bcost=(mid*rb-nb>0 ? (mid*rb-nb): 0)*pb;
        ll scost=((mid*rs-ns)>0 ? (mid*rs-ns) : 0)*ps;
        ll ccost=(max(0LL,(mid*rc-nc)))*pc;
        ll ttl=bcost+scost+ccost;
        if(ttl>rub) r=mid-1;
        else l=mid;
    }
    
    cout<<l;
    
    return 0;
}