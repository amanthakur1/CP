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
        int p,q;
        cin>>p>>q;

        set<int> fac;
        for(int i=2;i*i<=q;i++){
            if(q%i==0) fac.insert(i),fac.insert(q/i);
        }
        fac.insert(q);
        int ans=0;
        for(int x:fac){

            int temp=p;
            while(temp%q==0){
                temp/=x;
            }
            ans=max(ans,temp);

        }

        cout<<ans<<endl;
    }
    
    
    return 0;
}