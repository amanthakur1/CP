#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ll t; cin>>t;
    while(t--){
        int n; cin>>n;
        n=n+2;
        ll dp[n+1]={0};
        dp[0]=1;
        for(int i=0;i<n;i++){
            if(i+1<n) dp[i+1]+=dp[i];
            if(i+2<n) dp[i+2]+=dp[i];
            if(i+3<n) dp[i+3]+=dp[i];
        }
        cout<<dp[n-1]<<endl;
    }
    return 0;
}