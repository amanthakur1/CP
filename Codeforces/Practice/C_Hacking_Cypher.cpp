#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int main(){
    sync
    // Write code from here
    string s;
    cin>>s;
    ll a,b; cin>>a>>b;
    ll n=s.size();
    vector<ll> va(n);
    vector<ll> vb(n);
    
    for(ll i=0;i<n;i++){
        if(i==0) va[i]=(s[i]-'0')%a;
        else{
            va[i] = (va[i-1]*10 + (s[i]-'0'))%a;
        }
    }
    ll t=1;

    for(ll i=n-1;i>=0;i--){
        if(i==n-1) vb[i]=(s[i]-'0')%b;
        else{
            t=(t*10)%b;
            vb[i]= (((s[i]-'0')*t) + vb[i+1])%b;
        }
    }
    ll idx=-1;
    for(int i=0;i<n-1;i++){
        if(va[i]==0 and vb[i+1]==0 and s[i+1]!='0'){
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        string ansa="",ansb="";
        for(int i=0;i<n;i++){
            if(i<=idx) ansa+=s[i];
            else ansb+=s[i];
        }
        cout<<ansa<<endl<<ansb<<endl;
    }
    
    return 0;
}