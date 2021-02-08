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
    int n,p; cin>>n>>p; p+=97;
    string s; cin>>s; s[s.size()-1]++;
    int i;
    
    
    for(i=s.size()-1;i>=0 && i<(int)s.size();){
        if(s[i]>=p){
            s[i] = 97; s[i-1]++;
            i--;
        }else if(s[i-1]==s[i] || s[i-2]==s[i])  s[i]++;
        else   i++;
         
    }
    
    if(i<0) cout<<"NO";
    else cout<<s;
    
    
    
    return 0;
}