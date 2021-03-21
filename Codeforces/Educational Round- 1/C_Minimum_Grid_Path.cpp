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
    vector<ll> v(n);
    for(auto &i:v) cin>>i;

    ll ans=n*(v[0]+v[1]);
    ll sum1=v[0], sum2=v[1], min1=v[0], min2=v[1];
    ll x=1,y=1;

    for(int i=2;i<n;i++){
        if(i%2==0){
            sum1+=v[i];
            min1=min(min1, v[i]);
            x++;
        }
        else{
            sum2+=v[i];
            min2=min(min2, v[i]);
            y++;
        }
        ans=min({
            ans, 
            (sum1 - min1 + (n- (x-1))*min1) + 
            (sum2 - min2 + (n- (y-1))*min2)
        });
    }

    cout<<ans<<endl;

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