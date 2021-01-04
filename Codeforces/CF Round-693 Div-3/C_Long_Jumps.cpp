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

    int n; cin>>n;
    int v[n];
    for(auto &i: v) cin>>i;

    ll su[n]={0};
    for(int i=n-1;i>=0;i--){
        if(i+v[i] < n) su[i] = v[i] + su[i+v[i]];
        else           su[i] = v[i];
    }

    cout<<*max_element(su,su+n) <<endl;

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

