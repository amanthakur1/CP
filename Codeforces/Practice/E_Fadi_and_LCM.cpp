#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

ll lcm(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}

int main(){
    sync
    // Write code from here
    ll a,b;
    ll x;
    cin>>x;

    for(ll i=1;i*i<=x;i++){
        if(i*i==x and lcm(i,i)==x){
           a=i,b=i; 
        }
        else if(x%i==0 and lcm(i,x/i)==x){
            a=i;
            b=x/i;
        }
    }

    cout<<a<<" "<<b<<endl;
    return 0;
}