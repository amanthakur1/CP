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
    test(t){
        ll int n,m;
        cin>>n>>m;
        ll int mn = INT_MAX;
        ll int neg=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll x; cin>>x;
                if(x<0) neg++;
                mn = min(mn, abs(x));
                sum += abs(x);
            }
        }
        
        if(neg&1) sum-=(2*mn);
        cout<<sum<<endl;
    }
    
    
    return 0;
}