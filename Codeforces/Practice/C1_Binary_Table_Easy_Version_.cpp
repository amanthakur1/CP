#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define fori(a,n)   for(ll int i=a;i<(ll int)n;i++)
#define forj(a,n)   for(ll int j=a;j<(ll int)n;j++)
#define MOD         1e9+7
#define ten5        1e5
using namespace std;

queue<pair<int,int>> o,z;
char a[101][101];
vector<pair<int,int>> answer;

pair<int,int> p;

void mk1(){
    // make 1 '1' 0
    // make 2 '0' 1
    p = o.front(); o.pop(); z.push(p);
    answer.pb(p);
    a[p.first][p.second] = '0';
    
    p = z.front(); z.pop(); o.push(p);
    answer.pb(p);
    a[p.first][p.second] = '1';
    
    p = z.front(); z.pop(); o.push(p);
    answer.pb(p);
    a[p.first][p.second] = '1';
    
}

void mk3(){
    // make 3 '1' 0
    p = o.front(); o.pop(); z.push(p);
    answer.pb(p);
    a[p.first][p.second] = '0';
    
    p = o.front(); o.pop(); z.push(p);
    answer.pb(p);
    a[p.first][p.second] = '0';
    
    p = o.front(); o.pop(); z.push(p);
    answer.pb(p);
    a[p.first][p.second] = '0';
}


void check(){
    while(!o.empty()){
        if(o.size()==1) mk1();
        else if(o.size()==2) mk1();
        else if(o.size()==3) mk3();
        else if(o.size()==4) mk3();
    }
    while(!o.empty()) o.pop();
    while(!z.empty()) z.pop();
}

int main(){
    
    ll int t = 1;
    cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        answer.clear();
        
        while(!o.empty()) o.pop();
        while(!z.empty()) z.pop();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        
        for(int i=0;i<n;i+=2){
            for(int j=0;j<m;j+=2){
                if(i==n-1) i--;
                if(j==m-1) j--;
                if(i==n||j==m) break;
                if(a[i][j]=='1')  o.push({i,j});
                else z.push({i,j});
                
                if(a[i+1][j]=='1') o.push({i+1,j});
                else z.push({i+1,j});
                
                if(a[i][j+1]=='1') o.push({i,j+1});
                else z.push({i,j+1});
                
                if(a[i+1][j+1]=='1') o.push({i+1,j+1});
                else z.push({i+1,j+1});
                
                check();
                while(!o.empty()) o.pop();
                while(!z.empty()) z.pop();
            }
        }
        
        
        cout<<answer.size()/3<<"\n";
        for(int i=0;i<(int)answer.size();i+=3){
            cout<<answer[i].first+1<<" "<<answer[i].second+1<<" ";
            cout<<answer[i+1].first+1<<" "<<answer[i+1].second+1<<" ";
            cout<<answer[i+2].first+1<<" "<<answer[i+2].second+1<<" ";
            cout<<"\n";
        }
    }
    
	return 0;
}