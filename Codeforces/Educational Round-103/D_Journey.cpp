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
    string s; cin>>s;

    int left1[n], left2[n], right1[n],right2[n];
    int l1=-1,l2=-1;

    // from left to right --------->
    for(int i=0;i<n;i++){
        if( (i%2==0 and s[i]=='L') or // FORMING -> LRLRLRLR---
            (i%2==1 and s[i]=='R')
        ) l1=i;
        left1[i]=l1;

        if( (i%2==0 and s[i]=='R') or // FORMING -> RLRLRLR---
            (i%2==1 and s[i]=='L')    
        ) l2=i;

        left2[i]=l2;
    }

    int r1=n,r2=n;
    // from right to left --------->
    for(int i=n-1;i>=0;i--){
        if( (i%2==0 and s[i]=='L') or // FORMING -> LRLRLRLR---
            (i%2==1 and s[i]=='R')
        ) r1=i;
        right1[i]=r1;

        if( (i%2==0 and s[i]=='R') or // FORMING -> RLRLRLR---
            (i%2==1 and s[i]=='L')    
        ) r2=i;

        right2[i]=r2;
    }

    vector<int> ans(n+1,0);

    for(int i=0;i<n+1;i++){
        int left=0,right=0;

        if(i<n) right = (i%2==0 ? right1[i] : right2[i]) - i; // even pos -> type1 finding else type2 
        if(i>0) left = i-1 - (i%2==0 ? left1[i-1] : left2[i-1]); // even pos -> type1 finding else type2 

        ans[i]=left + right + 1; // string matching in left + matching in right + 1

    }

    for(auto k: ans) cout<<k<<" ";
    cout<<endl;


    return;
}

/*

1. For each city to move to its left or right path should have in form -> LRLRLRL or RLRLRL , based on parity
2. For a city , find no cites folowing LRLRL or RLRLR in left  + itself + no of cities folowing LRLRL or RLRLR in right
3. To optimize this , precalculate on the basis of, first diff char index in both left and right arrays

*/


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

