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
        ll n,w; cin>>n>>w;
        ll a[n];
        vector<pair<ll,ll>> v;
        ll mn=inf,mx=0,sum=0;
        ll s=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mn = min(mn, a[i]);
            sum+=a[i];
            mx=max(mx,a[i]);
            v.push_back({a[i],i+1});
            if(a[i]>=(w+1)/2 and a[i]<=w){
                s=i+1;
            }
        };
        if(s){
            cout<<1<<endl;
            cout<<s<<endl;
            continue;
        }
        if(mn>w || sum<(w+1)/2){
            cout<<-1<<endl;
            continue;
        }

        queue<pair<ll,ll>> ans;

        sort(v.begin(),v.end());

        ll cs=0;
        ll got=0;
        for(ll i=0;i<n;i++){
            cs+=v[i].first;
            ans.push({v[i].first,v[i].second});
            if(cs>=(w+1)/2 and cs<=w){
                got=1;
                break;
            }
            if(cs>w){
                break;
            }
        }

        if(got){
            cout<<ans.size()<<endl;
            while(!ans.empty()){
                cout<<(ans.front()).second<<" ";
                ans.pop();
            }
            cout<<endl;
            continue;
        }

        ll nw=0;
        while(1){
            if(ans.empty()) break;
            ll x=(ans.front()).first;
            cs-=x;
            ans.pop();
            if(cs>=(w+1)/2 and cs<=w){
                nw=1;
                break;
            }
            if(cs<(w+1)/2){
                break;
            }
            
        }
        if(nw){
            cout<<ans.size()<<endl;
            while(!ans.empty()){
                cout<<(ans.front()).second<<" ";
                ans.pop();
            }
            cout<<endl;
            continue;
        }

        cout<<"-1"<<endl;


    }
    
    
    return 0;
}