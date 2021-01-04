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
    int n; cin >> n;
    vector<string> vec;
	set<string> st;
	
    
	for(int i=0;i<n;i++) {
		string x; cin >> x;
		if (x[0] == '!') vec.push_back(x);
		else st.insert('!' + x);
	}

	for (auto k : vec) {
		if (st.count(k)) {
			cout << k.substr(1, k.size() - 1);
			return;
		}
	}

	cout << "satisfiable" <<endl;

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