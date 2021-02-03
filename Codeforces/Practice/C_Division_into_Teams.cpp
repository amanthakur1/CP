#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

signed main(){
    sync
    // Write code from here
    int n; cin>>n;
    pair<int,int> arr[n]; for(int i=0;i<n;i++) cin>>arr[i].first, arr[i].second=i+1;
    sort(arr,arr+n);
    vector<int> a,b;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(x>y){
            y+=arr[i].first;
            b.push_back(arr[i].second);
        }
        else{
            x+=arr[i].first;
            a.push_back(arr[i].second);
        }
    }
    cout<<a.size()<<endl;
    for(int x:a) cout<<x<<" ";
    cout<<endl<<b.size()<<endl;
    for(int y:b) cout<<y<<" ";
    
    return 0;
}