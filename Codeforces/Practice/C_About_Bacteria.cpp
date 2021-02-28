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
    ll k,b,n,t,x=1;
    cin>>k>>b>>n>>t;
    n++;

    while(x<t){
        x=x*k+b;
        n--;
    }
    n-=(x==t);

    cout<<max(0ll,n);
    
    return 0;
}