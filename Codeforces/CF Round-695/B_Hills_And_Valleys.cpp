#include <bits/stdc++.h>
#define ll          long long
#define int         long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

void solve(){
    // Write your code from here....
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    int ans=0;
    for(int i=2;i<n;i++){ // finding all hills and velly
        if((a[i]>a[i-1] and a[i]>a[i+1]) or (a[i]<a[i-1] and a[i]<a[i+1] )) ans++;
    }
    
    
    function<int(int x) > exist = [&] (int x){
        if(x==1 or x==n) return 0; // edge case(no changes occur on more then 3 elements)
        else{
            if((a[x]<a[x+1] and a[x]<a[x-1]) or (a[x]>a[x+1] and a[x]>a[x-1]) ) return 1;
            else                                                                return 0;
        }
    };
    int maxChanges=0; // determining maximum reductions from the ans.
    for(int i=2;i<n;i++){

        if(exist(i)){

            int temp = a[i];
            int cnt = exist(i-1) + exist(i+1); // i-1 and i+1 is hill or velly
            a[i]=a[i-1];                // set a[i] equal to  left
            maxChanges = max(maxChanges, cnt - exist(i+1) +1 ); // cnt: before reduction, exist(i+1) weather (i+1) got set after this, +1 removing ith set hill or velly
            a[i]=a[i+1];                // set a[i]= right
            maxChanges = max(maxChanges, cnt - exist(i-1) +1);   // cnt: before reduction, exist(i-1) weather (i-1) got set after this, +1 removing ith set hill or velly
            a[i] = temp;                // set a[i] back 
        }
    }

    // ans : total hills + velly - maxChanges;
    cout<< ans - maxChanges <<endl;

    return;
}


signed main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}