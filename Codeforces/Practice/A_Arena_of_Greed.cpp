#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

signed main(){
    sync
    // Write code from here
    test(t){
        ll n; cin>>n;
        ll ans=0,c=1;
        while(n){
            int cnt=0;
            if(n%4==2 || n==4){
                n/=2;
                cnt=n;
            }
            else{
                n--;
                cnt=1;
            }
            if(c) ans+=cnt;
            c=!c;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}