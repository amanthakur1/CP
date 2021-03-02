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
    test(t){
        ll d,k;
        cin>>d>>k;
        ll x=0,y=0;
        ll turn=0;
        while(d*d>=x*x + y*y){
            if(turn) x+=k;
            else y+=k;
            turn^=1;
        }
        cout<<(turn ? "Utkarsh":"Ashish")<<endl;
    }
    
    
    return 0;
}