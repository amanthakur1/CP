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
    int n;
    string s;
    cin>>n>>s;

    int cnt = -1;
    char a[100000+1];
    
    for(auto x: s){

        if(x=='f' or x=='o' or x=='x'){
            
            if(x=='f') ++cnt, a[cnt] = 'f';
            
            if(x=='o'){ 
                if(cnt>-1 and a[cnt]=='f') ++cnt, a[cnt] = 'o';
                else cnt = -1;
            }
            
            if(x=='x'){
                if(cnt>0 and a[cnt-1]=='f' and a[cnt]=='o') n -= 3, cnt-=2;
                else cnt = -1;
            }
        }
        else cnt = -1;
    }
    
    cout<<n<<endl;
    
    
    return 0;
}