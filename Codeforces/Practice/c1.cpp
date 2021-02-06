#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

void solve() {
	int n; cin >> n;
	n += 2;

	ll int dp[n] = {0}; dp[0] = 1;

	for(int i=0;i<n;i++) {
		if (i + 3 < n) dp[i + 3] += dp[i];
		if (i + 2 < n) dp[i + 2] += dp[i];
		if (i + 1 < n) dp[i + 1] += dp[i];
	}

	cout << dp[n - 1]<<endl;
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