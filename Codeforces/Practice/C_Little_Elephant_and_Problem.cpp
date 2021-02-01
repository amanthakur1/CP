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
    int n; cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i],b[i]=a[i];
    sort(b,b+n);

    int diff=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) diff++;
    }
    
    if(diff<=2) cout<<"YES";
    else cout<<"NO";
    
    
    return 0;
}