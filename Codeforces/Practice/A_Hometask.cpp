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
    string s; cin>>s;
    ll ans=0;
    test(t){
        string c;
        cin>>c;
        char a=c[0],b=c[1];
        ll x,y; 
        x=y=0;
        for(ll j=0;j<s.size();j++){
            if(s[j]==a) x++;
            else if(s[j]==b) y++;
            else{ 
                ans += min(x,y); 
                x=y=0;
            }
        }
        ans+=min(x,y);
    }
    cout<<ans;
    
    
    return 0;
}