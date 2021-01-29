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

    int q,d; cin>>q>>d;
	int dd = d;
    int c=0;
    int f[d]={0};
    int val[d]={0};
    int cnt=0;
    while(c<d and cnt<1e6){
        int k=dd%d;
        if(f[k]==0){
            f[k]=1;
            val[k]=dd;
            c++;
        }
        dd+=10;
        cnt++;
    }
    while()
    for(int i=0;i<d;i++) cout<<val[i]<<" ";

    for(int i=0;i<q;i++){
        ll x; cin>>x;
        ll k=x%d;
        if(f[k]==0 or val[k]>x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


	

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