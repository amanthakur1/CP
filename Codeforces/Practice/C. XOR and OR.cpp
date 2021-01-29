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
    string a,b; cin>>a>>b;
    
    if(a.size()!= b.size()){
        cout<<"NO"<<endl;
        return;
    }

    int one_in_a=0;
    int one_in_b=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1') one_in_a=1;
        if(b[i]=='1') one_in_b=1;
    }
    if(one_in_a == one_in_b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}