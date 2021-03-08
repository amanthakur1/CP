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
    ll a,b; cin>>a>>b;
    ll lcm=(a*b)/__gcd(a,b);
    if(a==b) cout<<"Equal";
    ll ca=lcm/a -1,cb=lcm/b -1;
    if(ca==cb+1 or cb==ca+1) cout<<"Equal";
    else{
        if(ca>cb) cout<<"Dasha";
        else cout<<"Masha";
    }   
    
    return 0;
}