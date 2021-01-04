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
    string s; cin>>s;
    ll n=s.size();
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n==2){
        cout<<( s[0]==s[1] ? "1" : "0")<<endl;
        return;
    }
    ll ans=0; char c='1';
    for(int i=2;i<n;i++){
        if(c>'8') c='1';
        if(s[i]==s[i-1] and s[i]==s[i-2]){
            ans+=2;
            s[i]=c;c++;
            s[i-1]=c;c++;
        }
        else if(s[i]==s[i-1]){
            ans++;
            s[i]=c++;
        }
        else if(s[i]==s[i-2]){
            ans++;
            s[i]=c++;
        }
        else if(s[i-1]==s[i-2]){
            ans++;
            s[i-1]=c++;
        }

    } 
    cout<<ans<<endl;
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