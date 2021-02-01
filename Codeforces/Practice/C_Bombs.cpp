#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

bool comp(pair<int,int> A, pair<int,int> B){
    int ax = abs(A.first), ay = abs(A.second);
    int bx = abs(B.first), by = abs(B.second);
    return (ax+ay) < (bx+by);
}

int main(){
    sync
    // Write code from here
    int n; cin>>n;
    vector<pair<ll,ll>> pts;

    for(int i=0;i<n;i++){
        ll x,y; cin>>x>>y;
        pts.push_back({x,y});
    }
    sort(pts.begin(),pts.end(),comp);
    
    vector<pair<int,char>> answer;
    int posx=0, posy=0;
    for(auto k:pts){
        ll x = k.first;
        ll y = k.second;

        if(abs(posx-x)){
            answer.push_back({abs(posx-x), (x<posx) ? 'L' : 'R'});
            posx = x;
        }
    
        if(abs(posy-y)){
            answer.push_back({abs(posy-y), (y<posy) ? 'D' : 'U'});
            posy = y;
        }
        answer.push_back({2,'A'});
        if(abs(posx)){
            answer.push_back({abs(posx), (0<posx) ? 'L' : 'R'});
            posx = 0;
        }

        if(abs(posy)){
            answer.push_back({abs(posy), (0<posy) ? 'D' : 'U'});
            posy = 0;
        }
        answer.push_back({3,'A'});
    }

    cout<<answer.size()<<endl;
    for(auto k: answer){
        if(k.second=='A') cout<<k.first<<endl;
        else{
            cout<<"1 "<<k.first<<" "<<k.second<<endl;
        }
        
    }

    

    return 0;
}