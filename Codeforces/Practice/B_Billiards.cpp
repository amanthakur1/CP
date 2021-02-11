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
    ll sx,sy,gx,gy;
    cin>>sx>>sy>>gx>>gy;

    double ans=(double)(sx*gy+gx*sy)/(sy+gy);
    cout<<fixed<<setprecision(10)<<ans;
    
    
    return 0;
}