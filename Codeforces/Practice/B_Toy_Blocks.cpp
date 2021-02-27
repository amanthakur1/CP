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
    test(t){
        ll int n,mx=-1; cin>>n;
        ll int arr[n];
        ll int cnt=0;
        for(int i=0;i<n;i++) cin>>arr[i], mx=max(mx,arr[i]);

        for(int i=0;i<n;i++) cnt +=mx-arr[i];
        
        if(cnt>mx){
            cout<<cnt-mx<<endl;
        }
        else{
            ll int sum = accumulate(arr, arr+n, 0LL);
            ll int answer = 0;
            while(sum%(n-1)) answer++, sum++;
            cout<<answer<<endl;
        }

    }
    
    
    
    return 0;
}