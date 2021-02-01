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
    int n,mx, answer=0; cin>>n;
    pair<int,int> v[n];
    for(auto &k: v) cin>>k.first>>k.second;
    
    sort(v, v+n);
    
    mx = v[0].second;
    for(int i=1;i<n;i++){
        if(v[i].second<mx) answer++;
        mx = max(mx, v[i].second);
    }
    cout<<answer;
    
    return 0;
}