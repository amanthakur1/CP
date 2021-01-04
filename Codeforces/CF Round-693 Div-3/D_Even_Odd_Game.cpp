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
    

    ll n; cin>>n;
    priority_queue<ll> od,ev;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        if(x&1) od.push(x);
        else    ev.push(x);
    }

    ll alice=0,bob=0,turn=1;
    while(od.size() or ev.size()){
        ll o=0,e=0;
        if(od.size()){
            o=od.top();
            od.pop();
        }
        if(ev.size()){
            e=ev.top();
            ev.pop();
        }
        if(turn){
            if(e>=o) {alice+=e; if(o) od.push(o);}
            else     {if(e) ev.push(e);}

        }
        else{
            if(o>=e) {bob+=o; if(e) ev.push(e);}
            else     {if(o) od.push(o) ;}
        }
        turn^=1;

    }
    if(alice>bob) cout<<"Alice";
    else if(bob>alice) cout<<"Bob";
    else cout<<"Tie";
    cout<<endl;

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