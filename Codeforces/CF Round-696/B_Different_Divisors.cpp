#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

const int sv = 1e6;
bool prime[sv + 1];
void sieve() {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;

	for (int i = 2; i * i <= sv; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= sv; j += i) {
				prime[j] = 0;
			}
		}
	}
}

vector<ll> p;

void solve(){
    // Write your code from here....
	ll int d; cin >> d;
    
	ll b = *lower_bound(p.begin(), p.end(), (1 + d) );
	ll c = *lower_bound(p.begin(), p.end(), (b + d) );

	cout << b*c<<endl;
	return;


    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

    sieve();
    for(int i=0;i<=(int)(1e6);i++) if(prime[i]) p.push_back(i);

    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}