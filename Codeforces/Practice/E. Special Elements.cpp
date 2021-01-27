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
    int n; cin>>n;
    vector<int> v(n);
    for(auto &i: v) cin>>i;

    int freq[n+1]={0};
    int sum;
    for(int i=0;i<n;i++){
        sum=v[i];
        for(int j=i+1;j<n;j++){
            sum+=v[j];
            if(sum>n) break;
            freq[sum]=1;
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(freq[v[i]]) ans++;
    }
    cout<<ans<<endl;

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