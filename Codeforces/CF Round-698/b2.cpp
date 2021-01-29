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
    ll q,d; cin>>q>>d;

    vector<int> v;
    int digi=d;
    
    for(int i=1;i<=11;i++){
        v.push_back(digi);
        digi+=10;
    }
    // for(auto k:v) cout<<k<<" ";
    ll arr[100]={0};
    for(int i=0;i<v.size();i++){
        int k=v[i];
        while(k<100){
            
            arr[k]=1;
            k+=d;
        }
    }
    for(int i=0;i<q;i++){
        ll x; cin>>x;
        if(x>=d*10) cout<<"YES"<<endl;
        else{
            if(arr[x]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;  
        }
    }
    

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