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
    ll n; cin>>n;
    vector<pair<int,int> > v;
    for(int i=0;i<(pow(2,n));i++){
        ll x; cin>>x;
        v.push_back({x,i+1});
    }

    function< vector<pair<int,int>>(vector<pair<int,int > >) > go = [&] ( vector<pair<int,int>> a){
        // FUNCTION BODY HERE
        vector<pair<int,int >> nv;

        for(int i=0;i<a.size();i+=2){
            if(a[i].first > a[i+1].first){
                nv.push_back({a[i].first,a[i].second});
            }
            else{
                nv.push_back({a[i+1].first,a[i+1].second});
            }
        }
        return nv;
    };




    while(v.size()!=2){
        v=go(v);
    }
    ll mxa=v[0].first, mxaI=v[0].second;
    ll mxb=v[1].first, mxbI=v[1].second;

    if(mxa>mxb) cout<<mxbI<<endl;
    else        cout<<mxaI<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}