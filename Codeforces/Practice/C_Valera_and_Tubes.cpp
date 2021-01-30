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
    int n,m,k;
    cin>>n>>m>>k;

    int lst=n*m-2*(k-1);
    int b=0;
    int x=0;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            
            if(b<n*m-lst){
                if(b%2==0){
                    cout<<"2 ";
                }
                if(i&1) cout<<i<<" "<<j<<" ";
                else cout<<i<<" "<<m-j+1<<" ";
                b++;
                if(b%2==0) cout<<endl;
            }
            else{
                
                if(x==0) cout<<lst<<" ";
                x=1;
                if(i&1) cout<<i<<" "<<j<<" ";
                else cout<<i<<" "<<m-j+1<<" ";
            }

        }
    }
    
    
    return 0;
}