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
    ll n,k; cin>>n>>k;
    if(n%2==1){
        cout<<n/2<<" "<<n/2<<" "<<1;
    }
    else{
        ll h=n/2;
        if(h%2==0) cout<<h<<" "<<h/2<<" "<<h/2;
        else cout<<h -1 << " "<<h -1<<" "<<2;
    }
    cout<<endl;

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