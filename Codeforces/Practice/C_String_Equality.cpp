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
        int n,k; cin>>n>>k;
        char x;
        int ans = 1;
        map<char, int> map1, map2;
        for(int i=0;i<n;i++) cin>>x, map1[x]++;
        for(int i=0;i<n;i++) cin>>x, map2[x]++;
        int mini=inf;
        for(char x='a';x<='z';x++){
            int mini=min(map1[x], map2[x]);
            map1[x]-=mini; 
            map2[x]-=mini;
        }
        
        for(char c='z';c>='a';c--){
            if(map2[c]%k!=0){
                ans=0;
                break;
            }
            
            for(char d=c; d>='a'; d--){
                if(map1[d]>=k){
                    int mini=min(map1[d]/k, map2[c]/k);
                    map1[d]-=k*mini;
                    map2[c]-=k*mini;
                }
            }
            
            if(map2[c]){
                ans=0;
                break;
            }
        }
        cout<<(ans ? "Yes" : "No")<<endl;
    
    }
    
    
    return 0;
}