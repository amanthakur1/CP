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
    string s; cin>>s;

    string ans=s;

    function<int(string ,string) > comp = [&] (string a, string b){
        
        for (int i = 0; i < (int)a.size(); i++) {
            if (a[i] < b[i]) return -1;
            if (a[i] > b[i]) return +1;
        }
        return 0;
    };    
    function<void (string)> cal = [&] (string ss){
        string z=ss;
        for(int i=0;i<n;i++){
            string c=z.substr(i,n-i) + z.substr(0,i);
            if (comp(c, ans) < 0) ans = c;
        }
    };

    for(int i=0;i<=9;i++){
        cal(s);
        for(int j=0;j<n;j++){
            
                if(s[j]=='9') s[j]='0';
                else s[j]++;
        }
    }

    cout<<ans<<endl;

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