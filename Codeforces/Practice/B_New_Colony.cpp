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
    ll n,k; cin>>n>>k;
    vector<ll> h(n);
    for(auto &i:h) cin>>i;
    if(k> 100*100){
        cout<<-1<<endl;
        return;
    } 
    ll ans=-1;
    while(k--){
        for(int i=0;i<n-1;i++){
            if(h[i]<h[i+1]){
                h[i]++;
                if(k==0){
                    cout<<i+1<<endl;
                    return;
                }
                break;
            }
        }
    }
    cout<<-1<<endl;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}