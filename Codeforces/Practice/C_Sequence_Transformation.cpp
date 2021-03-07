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
        map<ll, vector<ll>> mp;
        ll n; cin>>n;
        for(ll i=0;i<n;i++){
            ll x; cin>>x;
            mp[x].push_back(i+1);
        }
        ll int answer = INT_MAX;
        for(auto k: mp){
            int start = k.second[0];
            int end = k.second[k.second.size()-1];
            int siz = k.second.size();
            ll int ans = 0;
            if(start>1) ans++;
            if(end<n) ans++;
            for(int i=0;i<siz-1;i++){
                if(k.second[i+1]-k.second[i]>1) ans++;
            }
            answer = min(answer,ans);
        }
        cout<<answer<<endl;
    }
    
    
    return 0;
}