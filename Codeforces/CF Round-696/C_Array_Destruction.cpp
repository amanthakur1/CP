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
    ll n; cin>>n;
    n*=2;
    map<int,int> mp;

    int ar[n]; 
    for(int i=0;i<n;i++) cin>>ar[i];

    sort(ar,ar+n);
    
    for(int i=0;i<n-1;i++){

        vector<pair<int,int>> ans;
        int got=1;
        int curr=ar[n-1];
        multiset<int> s;

        for(int j=0;j<n-1;j++) if(i!=j) s.insert(ar[j]);

        while(s.size()){
            int x = *s.rbegin(); // new x will always be max of present nums
            s.erase(s.find(x)); // it wil be delted

            auto tofind = s.find(curr-x); // pair for x
            if(tofind !=s.end()){ // if found
                ans.push_back({x, *tofind}); 
                curr = max(x,*tofind); // maximiseing new x
                s.erase(tofind); // deleting used element
            }
            else{
                got=0;
                break;
            }
        } 
        if(got){
            cout<<"YES"<<endl;
            cout<<ar[n-1] + ar[i]<<endl; // first selection of x
            cout<<ar[n-1]<<" "<<ar[i]<<endl;
            for(auto k:ans) cout<<k.first<<" "<<k.second<<endl;
            
            return;
        }
    }
    cout<<"NO"<<endl;

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

// new x will always be maximum present num
// find pair for 