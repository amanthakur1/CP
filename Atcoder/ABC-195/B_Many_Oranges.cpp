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

    int a,b, w; cin>>a>>b>>w;
    w=w*1000;
    
    int ka = w/a;
    int kaa = w%a;
    int kb = w/b;
    int kbb = w%b;

    if(kaa> (b-a)*ka or kbb>(b-a)*kb){
        cout<<"UNSATISFIABLE"<<endl;
    }
    else cout<< w/b + (w%b ? 1 : 0)<<" "<<ka<<endl;


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