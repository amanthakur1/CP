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
    ll a[10]={0},x[7]={1869,6198,1896,1689,1986,1968,1698};
    string s; cin>>s;
    for(ll i=0;i<s.size();i++) a[s[i]-'0']++;
    a[1]--; a[6]--; a[8]--; a[9]--;
    ll c=0;
    for(ll i=1;i<=9;i++){
        while(a[i]--){
            c=(c*10+i)%7;
            cout<<i;
        }
    }
    
    cout<<x[c];
    while(a[0]--) cout<<"0";

    return 0;
}