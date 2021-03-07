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
    string s1,s2; cin>>s1>>s2;
    s1 = '!'+s1;
    
    map<char,bool> present;
    for(auto k: s1) present[k]=1;
    for(auto k: s2){
        if(present[k]==0){cout<<"-1"; return 0;}
    }
    
    map<char, int> p[s1.size()];
    
    for(int i=s1.size()-1;i>0;i--){
        p[i-1] = p[i];
        p[i-1][s1[i]] = i;
    }

    int ptr = 0;
    int answer = 1;
    
    for(auto k: s2){
        ptr = p[ptr][k];
        if(ptr==0) answer++, ptr = p[0][k];
    }
    
    cout<<answer;
    
    
    return 0;
}