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
        ll n; cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];

        
        ll ans[n+1]={0};
        ll m=4000000,maxi=3999999;

        for(ll i=0;i<n;i++){
            if(a[i]==i+1 and ans[i+1]==0){
                ans[i+1]=maxi;
                maxi-=2;
            }
            else{
                if(ans[a[i]]){
                    ans[i+1]=ans[a[i]];
                }
                else{
                    ans[i+1]=m;
                    ans[a[i]]=m;
                    m-=2;
                }
            }
        }
        for(ll i=1;i<=n;i++){
            cout<<ans[i]<<(i==n ? endl : " ");
        }

    }
    
    
    return 0;
}