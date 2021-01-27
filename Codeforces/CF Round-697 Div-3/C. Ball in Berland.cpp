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
    int a,b,k; cin>>a>>b>>k;
    vector<int> va(k),vb(k);

    for(auto &i:va) cin>>i;
    for(auto &i:vb) cin>>i;

    int fa[a+1]={0},fb[b+1]={0};
    for(int i=0;i<k;i++){
        fa[va[i]]++;
        fb[vb[i]]++;
    }

    ll ans=0;
    for(int i=0;i<k;i++){
        ans+= (k- fa[va[i]] - fb[vb[i]] + 1);
    }
    cout<<ans/2 <<endl;

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