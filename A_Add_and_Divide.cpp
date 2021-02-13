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
    ll a,b; cin>>a>>b;

    ll ans=0;
    // if(b==1) ans++,b++;

        // while(a%b==0) b++,ans++;
    while(a!=0){
        if(a%b==0) b++,ans++;
        a/=b;
        ans++;
        // if(a) ans++,b++;
        // cout<<a<<" -------" <<b<<endl;
    }

    cout<<ans<<endl;
    

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