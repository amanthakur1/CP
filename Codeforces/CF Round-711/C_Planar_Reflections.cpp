#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int n,k;
ll dp[1005][1005][2];
// dp[plane_no][decay_age][direction]

int fundp(int plane, int age, int dir){
    if(age==1) return 1;

    if(dp[plane][age][dir] !=-1) return dp[plane][age][dir];

    int ans = 2; // curr +  copy of curr

    if(dir==1){ // moving right
        if(plane < n){ // is plane ahead
            ans += fundp(plane+1, age, dir) -1; // moving ahead with plane+1, same age, same dir, and -1 for removing it
        }
        ans%=mod;
        if(plane > 1){ // is plane in left
            ans += fundp(plane-1, age-1, !dir) -1; // moving to left to plane-1 ,age -1, diff dir= 0 , and -1 for removing it
        }
    }
    else{
        if(plane>1){ // can move more in left
            ans += fundp(plane-1, age, dir) -1;  // moving in left with plane-1, same age, same dir, and -1 for removing it
        }
        ans%=mod;
        if(plane <n){ // can move more in right
            ans += fundp(plane+1, age-1, !dir) -1; // moving to right with plane+1, age -1, dir =1, -1 for itself
        }
    }
    ans%=mod;
    return dp[plane][age][dir] = ans;
}

void solve(){
    // Write your code from here....

    cin>>n>>k;
    memset(dp,-1,sizeof(dp));

    cout<<fundp(1,k,1)<<endl;

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