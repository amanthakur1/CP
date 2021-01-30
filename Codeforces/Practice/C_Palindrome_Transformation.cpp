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
    int n,p;
    string s;
    cin>>n>>p>>s;
    n--,p--;
    if(p>n/2) p=n-p;
    int ans=0,l=-1,r;
    for(int i=0;i<=n/2;i++){

        if(s[i]!=s[n-i]){
            int diff=(abs(s[i]-s[n-i]));
            ans+=min(diff,26-diff);
            if(l<0) l=i; else r=i;

        }
    }
    ans+=min(abs(p-l),abs(p-r));
    ans+=max(0,r-l);

    cout<< (l<0 ? 0 : ans);

    return 0;
}