/*
                _                            _____ _           _
               / \   _ __ ___   __ _ _ __   |_   _| |__   __ _| | ___   _ _ __
              / _ \ | '_ ` _ \ / _` | '_ \    | | | '_ \ / _` | |/ / | | | '__|
             / ___ \| | | | | | (_| | | | |   | | | | | | (_| |   <| |_| | |
            /_/   \_\_| |_| |_|\__,_|_| |_|   |_| |_| |_|\__,_|_|\_\\__,_|_|
*/

#include <bits/stdc++.h>
#define int          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n"
#define test(t)     int t;cin>>t;while(t--)

using namespace std;

const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

signed main() {
    sync
    // Write code from here
    test(t){
        
        
        int n,m,x,k; cin>>n>>m;
        
        unordered_map<int,vector<int>> row,col;
        
        
        int ans_mat[n][m];
    
        
        for(int i=0;i<n;i++){
            cin>>x;
            row[x].push_back(x);
            for(int j=1;j<m;j++){ cin>>k; row[x].push_back(k); }
        }
        
        for(int i=0;i<m;i++){
            cin>>x;
            col[x].push_back(x);
            for(int j=1;j<n;j++){ cin>>k; col[x].push_back(k); }
        }
        
        
        bool cnt=0;
        int e;
        
        for(auto k: row){
            for(auto g: col){
                if(k.first==g.first){
                    e = k.first; cnt =1;
                    break;
                }
            }
            if(cnt) break;
        }
        
        ans_mat[0][0]=e;
        
        int top;
        for(int i=0;i<m;i++){
            
            top = row[e][i];
            
            for(int j=0;j<n;j++){
                ans_mat[j][i] = col[top][j];
            }
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans_mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    
	return 0;
}
