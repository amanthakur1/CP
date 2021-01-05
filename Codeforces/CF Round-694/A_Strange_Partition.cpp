#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

void solve(){
    // Write your code from here....
    ll n,x; cin>>n>>x;
    ll a[n];
    
    ll amax=0,amin=0,k=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        amax+=(a[i] +x -1)/ x ;
        amin+=a[i];
    }
    // if(k) 
    cout<<((amin+x-1)/x)<<" "<<amax<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}