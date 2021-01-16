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
    string a,b;
    cin>>a>>b;
    ll n=a.size(), m= b.size();
    ll lc = (n*m)/__gcd(n,m);

    string na="", nb="";
    for(int i=0;i<lc;i++){
        int ind= i%n;
        na+=a[ind];
    }
    for(int i=0;i<lc;i++){
        int ind= i%m;
        nb+=b[ind];
    }

    bool ans=1;
    for(int i=0;i<lc;i++){
        if(na[i]!=nb[i]) ans=0;
    }

    if(!ans) cout<<"-1"<<endl;
    else cout<<na<<endl;


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