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
    ll n;
    cin >> n;
    vector<ll> v;
    ll x = n;
    for(ll i = 2; i*i <= n; i ++){
        while(n%i==0){
            v.push_back(i); 
            n/= i;
        }
    }
    if(n>1) v.push_back(n);
    if(v.size() > 2) cout<<"1"<<endl<<v[0]*v[1]<<endl;
    else if(v.size() == 2) cout<<"2"<<endl;
    else cout <<"1"<<endl<<"0"<<endl;
    
    
    
    return 0;
}