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
    int n,k; cin>>n>>k;
    string s; cin>>s;

    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            s[i]='x';
            l=i;
            break;
        }
        // if(s[i]=='*') r=i;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*'){
            r=i;
            s[i]='x';
            break;
        }
    }

    // s[r]='x';

    int ls=0;
    int d=0;
    for(int i=l;i<r;i++){
        if(s[i]=='*') ls=i;
        if(d==k){
            s[ls]='x';
            d=i-ls;
        }
        d++;
    }
    int ans=0;
    for(auto k:s) if(k=='x') ans++;

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