#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define se          second
#define fi          first
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

signed main(){
    sync
    // Write code from here
    test(t){

        vector<pair<int,int>> od, even;
        string a,b;  cin>>a>>b;
        
        for(int i=0;i<(int)a.size();i++){
            if(i%2!=0){
                od.push_back({a[i]-'0', b[i]-'0'});
            }else{
                even.push_back({a[i]-'0', b[i]-'0'});
            }
        }

        int x = 0;
        int y=od.size()-1;
        bool cnt = false;
        
        ll ans=0;
        
        while(x<=y){
            while(
                (od[x].fi == od[x].se && !cnt) ||
                (od[x].fi!= od[x].se && cnt)
            ) x++;
            while(
                (od[y].fi==od[y].se && !cnt) ||
                (od[y].fi!=od[y].se && cnt)
            ) y--;
            if(x>y) break;
            x++, y--;
            cnt ^= 1;
            ans++;
        }
        
        
        x = 0, y=even.size()-1;
        cnt = false;
        
        while(x<=y){
            while(
                (even[x].fi==even[x].se && !cnt) or
                (even[x].fi!=even[x].se && cnt)
            ) x++;
            while(
                (even[y].fi==even[y].se && !cnt) or
                (even[y].fi!=even[y].se && cnt)
            ) y--;
            if(x>y) break;
            x++, y--;
            cnt ^= 1;
            ans++;
        }
        
        cout<<ans<<endl;
    }
    
    
    
    return 0;
}