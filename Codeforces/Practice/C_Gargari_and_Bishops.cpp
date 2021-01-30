#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

signed main(){
    sync
    // Write code from here
    int n; cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>mat[i][j];
    }
    
    map<int,int> pd,sd;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pd[i-j]+=mat[i][j];
            sd[i+j]+=mat[i][j];
        }
    }
    int oans=0,eans=0;
    int x1=1,y1=1,x2=1,y2=2;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)&1){
                if((pd[i-j]+sd[i+j]-mat[i][j])>oans){
                    oans=(pd[i-j]+sd[i+j]-mat[i][j]);
                    x1=i+1;
                    y1=j+1;
                }
            }
            else{
                if((pd[i-j]+sd[i+j]-mat[i][j])>eans){
                    eans=(pd[i-j]+sd[i+j]-mat[i][j]);
                    x2=i+1;
                    y2=j+1;
                }
            }
        }
    }
    cout<<oans+eans<<endl;
    cout<<x2<<" "<<y2<<" "<<x1<<" "<<y1<<endl;
    
    return 0;
}