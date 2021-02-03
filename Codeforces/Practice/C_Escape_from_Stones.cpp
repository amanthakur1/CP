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

    for(int i=0;i<s.size();i++){
        if(s[i]=='r') cout<<i+1<<endl;
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='l') cout<<i+1<<endl;
    }
    
    return 0;
}