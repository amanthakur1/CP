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
    ll n,m; cin>>n>>m;
    ll a[n+5];
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int> x,y,z;
    for(int i=2;i<n;i++){
        if(a[i]<a[i-1] and a[i]<a[i+1]){
            x.push_back(i);
        }
        else if(a[i]<a[i+1]){
            y.push_back(i);
        }
        else if(a[i]<a[i-1]){
            z.push_back(i);
        }
    }
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        if(l==r||l+1==r){
            cout<<"Yes"<<endl;
            continue;
        }
        auto it=lower_bound(x.begin(),x.end(),l+1);
        if(it!=x.end()&&(*it<r)){
            cout<<"No"<<endl;
            continue;
        }
        it=lower_bound(z.begin(),z.end(),l+1);
        if(it==z.end()||(*it>=r)){
            cout<<"Yes"<<endl;
            continue;
        }
        auto it2=lower_bound(y.begin(),y.end(),*it);
        if(it2==y.end()||(*it2>=r)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}