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
    ll n; cin>>n;
    if(n<=2) cout<<n;
    else if(n%6==0) cout<<(n-1)*(n-2)*(n-3);
    else if(n%2==0) cout<<n*(n-1)*(n-3);
    else cout<<n*(n-1)*(n-2);
    
    
    return 0;
}