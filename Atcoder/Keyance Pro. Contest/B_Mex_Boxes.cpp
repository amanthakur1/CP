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
    ll n, k; cin >> n >> k;
	map<ll, ll>M;
    vector<ll> arr;
	for(ll i=0;i<n;i++){
        ll x; cin>>x,M[x]++;
    } 

	ll freq = M[0];
	ll i = 1;

	while (M[i - 1]){
		if (M[i] < freq) {
			ll diff = freq - M[i];
			while (diff--) arr.pb(i);
			freq = M[i];
		}
		i++;
	}

    ll z=min(k,(ll)arr.size());
    ll ans = 0;
	sort(arr.rbegin(), arr.rend());

	for(ll i=0;i<z;i++) ans += arr[i];

	cout << ans;

    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}


