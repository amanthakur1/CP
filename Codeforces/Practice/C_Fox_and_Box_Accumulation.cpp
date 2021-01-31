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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int vis[n]={0};
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            ans++; vis[i]=1;
            int b=1;
            int j=i+1;
            while(j<n){
                if(!vis[j] and a[j]>=b){
                    vis[j]=1,b++;
                }
                j++;
            }
        }
    }
    cout<<ans;

    return 0;
}