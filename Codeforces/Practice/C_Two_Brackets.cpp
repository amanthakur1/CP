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
        ll int r=0,sq=0;
        ll int ans=0;
        string str; cin>>str;
        
        for(auto k: str){
            
            if(k=='[') sq++;
            if(k=='(') r++;
            if(k==')'){
                if(r>0) r--, ans++;
            }
            if(k==']'){
                if(sq>0) sq--, ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    
    
    return 0;
}