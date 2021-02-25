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
    ll n,m; cin>>n>>m;

    if(m>=((n*(n-1))/2)){
        cout<<"no solution";
    }
    else{
        for(ll i=0;i<n;i++){
            cout<<0<<" "<<i+1<<endl;
        }
    }
    
    
    
    return 0;
}