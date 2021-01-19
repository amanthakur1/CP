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
    int n; cin>>n;
	string s;cin >> s;
    string ans=""; 


	int l=-1;

	for (int i=0;i<n;i++) {
		if (s[i] == '1') {
            if (l == 2) { ans += '0'; l = 1;}
			else { ans += '1'; l = 2;}
			
		} 
        else{
			if(l==1){
				ans += '0';
				l = 0;
			}
			else { ans += '1'; l = 1;}
		}
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