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
    for(auto &i: v) cin>>i;

    set<ll> ans;
	for (auto k : v) {
		if (ans.count(k) == 0) ans.insert(k);
		else ans.insert(k + 1);
	}

	cout << ans.size(); cout << endl;
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

